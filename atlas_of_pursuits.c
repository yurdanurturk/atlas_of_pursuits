#include<stdio.h>
#include<math.h>

int eva(int a, int b);
int six(int a);

int main(){
	int i,j,u_pursuit=0;
	int user[38]={};
	int pursuit[38]={};
	
	printf("enter your mbti and big5 results: \n");
	for(i=0; i<38; i++){
		scanf("%d",&user[i]);
	}
	for(j=1;j<77;j++){
		printf("enter the pursuit's ratings: \n");
		for(i=0; i<38; i++){
			scanf("%d",&pursuit[i]);
		}
		
		for(i=0; i<3; i++){
			u_pursuit+= 6*(eva(user[i],pursuit[i]));
		}
		for(i=3; i<8; i++){
			u_pursuit+= 5*(eva(user[i],pursuit[i]));
		}
		for(i=8; i<14; i++){
			u_pursuit+= 4*(eva(user[i],pursuit[i]));
		}	
		for(i=14; i<24; i++){
			u_pursuit+= 3*(eva(user[i],pursuit[i]));
		}	
		for(i=24; i<30; i++){
			u_pursuit+= 2*(eva(user[i],pursuit[i]));
		}	
		for(i=30; i<32; i++){
			u_pursuit+=(eva(user[i],pursuit[i]));
		}
		for(i=32; i<35; i++){
			u_pursuit-= 4*(eva(user[i],pursuit[i]));
		}
		for(i=35; i<38; i++){
			u_pursuit-= 2*(eva(user[i],pursuit[i]));
		}
		
		printf("result = %d \n", u_pursuit);
		
		u_pursuit=0;
	
		
	}
	
	return 0;
}



int eva(int a, int b){
	int diff = abs(a-b);
	return diff;
}