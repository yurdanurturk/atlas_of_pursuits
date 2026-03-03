#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TRAIT_COUNT 30

/* You can adjust these two if you want different behavior */
#define PATTERN_WEIGHT 0.60
#define CLOSENESS_WEIGHT 0.40

typedef struct {
    char name[128];
    int traits[TRAIT_COUNT];
    double score;  /* final 0-100 */
} Pursuit;

/* --- Add new pursuits here --- */
Pursuit pursuits[] = {
    {
        "Arts & Creativity",
        {5,5,4,5,4,4, 2,3,3,3,3,4, 4,3,3,3,4,4, 4,4,3,3,3,4, 3,2,3,4,3,3},
        0.0
    },
    {
        "Entertainment & Media",
        {4,4,3,3,4,3, 2,3,3,2,2,3, 4,4,3,4,5,5, 3,3,3,3,3,3, 2,2,2,3,4,3},
        0.0
    }
};

int pursuit_count() {
    return sizeof(pursuits) / sizeof(pursuits[0]);
}

/* Calculate match score (0–100) */
void calculate_score(const int user[], Pursuit *p) {

    double user_centered[TRAIT_COUNT];
    double pursuit_centered[TRAIT_COUNT];

    /* Center values around 3 (neutral) */
    for(int i = 0; i < TRAIT_COUNT; i++) {
        user_centered[i] = user[i] - 3.0;
        pursuit_centered[i] = p->traits[i] - 3.0;
    }

    /* Pattern similarity */
    double dot = 0.0, norm_user = 0.0, norm_p = 0.0;
    for(int i = 0; i < TRAIT_COUNT; i++) {
        dot += user_centered[i] * pursuit_centered[i];
        norm_user += user_centered[i] * user_centered[i];
        norm_p += pursuit_centered[i] * pursuit_centered[i];
    }

    norm_user = sqrt(norm_user);
    norm_p = sqrt(norm_p);

    double pattern_score = 0.0;
    if(norm_user > 0 && norm_p > 0) {
        double cosine = dot / (norm_user * norm_p);
        if(cosine > 1) cosine = 1;
        if(cosine < -1) cosine = -1;
        pattern_score = (cosine + 1.0) * 50.0; /* 0–100 */
    } else {
        pattern_score = 50.0; /* neutral */
    }

    /* Closeness score */
    double sum_sq = 0.0;
    for(int i = 0; i < TRAIT_COUNT; i++) {
        double diff = user_centered[i] - pursuit_centered[i];
        sum_sq += diff * diff;
    }

    double distance = sqrt(sum_sq);
    double max_distance = 4.0 * sqrt((double)TRAIT_COUNT);
    double closeness_score = (1.0 - distance / max_distance) * 100.0;

    if(closeness_score < 0) closeness_score = 0;
    if(closeness_score > 100) closeness_score = 100;

    /* Final score */
    p->score = PATTERN_WEIGHT * pattern_score +
               CLOSENESS_WEIGHT * closeness_score;
}

/* Sort descending */
int compare(const void *a, const void *b) {
    Pursuit *p1 = (Pursuit *)a;
    Pursuit *p2 = (Pursuit *)b;

    if(p1->score < p2->score) return 1;
    if(p1->score > p2->score) return -1;
    return 0;
}

int main() {

    int user[TRAIT_COUNT];

    printf("Enter your 30 personality scores (1–5):\n");

    for(int i = 0; i < TRAIT_COUNT; i++) {
        if(scanf("%d", &user[i]) != 1 || user[i] < 1 || user[i] > 5) {
            printf("Please enter numbers between 1 and 5 only.\n");
            return 1;
        }
    }

    int count = pursuit_count();

    for(int i = 0; i < count; i++) {
        calculate_score(user, &pursuits[i]);
    }

    qsort(pursuits, count, sizeof(Pursuit), compare);

    printf("\n===== Your Best Activity Matches =====\n\n");

    for(int i = 0; i < count; i++) {
        printf("%d. %s\n", i + 1, pursuits[i].name);
        printf("   Match Score: %.1f / 100\n", pursuits[i].score);

        if(pursuits[i].score >= 80)
            printf("   This activity fits you very well.\n\n");
        else if(pursuits[i].score >= 60)
            printf("   This activity suits you quite well.\n\n");
        else if(pursuits[i].score >= 40)
            printf("   This might suit you, worth trying.\n\n");
        else
            printf("   This may not be a natural fit.\n\n");
            
    }

    return 0;
}