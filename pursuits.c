#include<stdio.h>
#include<math.h>

int hi (int a, int b);
int mi(int a, int b);
int li(int a, int b);

int main(void){
	int user[18]={};
	int i;
	for(i=0; i<18; i++){
		scanf("%d",&user[i]);
	}
	
// 1. Artistic and Creative Expression
	int ace[18]={5,2,4,3,3,5,4,4,3,4,4,3,3,5,3,4,4,3};
// 1.1 Visual Arts
	int va[18]={5,3,3,4,4,5,4,4,3,4,4,3,3,5,3,4,4,3};
// 1.2 Performing Arts
	int pa[18]={5,4,5,4,3,5,4,5,3,4,5,4,4,4,5,5,4,5};
// 1.3 Crafts and Design
	int cd[18]={5,4,3,4,3,5,3,4,4,4,4,4,3,4,3,5,5,3};
// 1.4 Literary Arts
	int la[18]={5,4,2,3,4,5,3,4,4,5,3,3,3,5,2,5,5,2};
// 1.5 Media Arts
	int ma[18]={5,4,4,3,3,5,4,4,4,4,5,4,3,5,4,4,3,4};

// 2. Social and Interpersonal Engagement
	int sie[18]={4,4,5,5,3,3,3,5,3,2,4,3,5,4,5,3,4,4};
// 2.1 Community Engagement
	int ce[18]={4,4,5,5,3,4,3,5,4,3,5,4,4,5,3,4,4,4};
// 2.2 Communication and Relationships
	int cr[18]={4,3,5,5,3,3,3,5,4,2,4,3,5,3,5,3,5,4};
// 2.3 Media and Networking
	int mn[18]={4,4,5,4,3,5,4,5,4,3,5,4,4,3,5,5,4,4};
	
// 3. Investigative and Analytical Thinking
	int iat[18]={5,5,2,3,3,5,3,2,5,5,4,4,2,5,2,5,5,3};
// 3.1 Research and Analysis
	int ra[18]={5,5,2,3,2,4,3,3,5,5,4,4,2,5,2,5,5,3};
// 3.2 Problem Solving and Strategy
	int ps[18]={5,5,3,3,2,5,4,3,5,4,5,4,2,5,2,5,4,4};
// 3.3 Conceptual Thinking
	int ct[18]={5,4,2,3,2,5,4,3,5,5,5,5,2,5,2,4,4,3};
	
// 4. Enterprising and Leadership Development
	int eld[18]={4,5,5,4,2,4,5,4,4,4,5,5,3,4,5,5,4,5};
// 4.1 Business and Entrepreneurship
	int be[18]={5,4,5,3,2,5,5,3,4,5,5,5,3,4,4,5,4,5};
// 4.2 Leadership Skills
	int ls[18]={5,5,5,4,2,4,5,5,5,4,5,5,4,4,5,5,4,5};
// 4.3 Public Influence
	int pi[18]={5,4,5,4,2,5,5,4,4,3,5,5,4,4,5,4,3,5};
	
// 5. Organized and Structured Activities
	int osa[18]={2,5,3,4,2,3,2,3,5,3,4,4,3,3,3,5,4,3};
// 5.1 Administrative Skills
	int as[18]={3,5,3,4,2,3,2,4,5,3,4,3,3,3,3,5,4,3};
// 5.2 Event and Logistics Management
	int elm[18]={4,5,5,4,2,5,4,4,4,3,5,4,3,3,5,5,4,4};
// 5.3 Finance and Resources
	int fr[18]={3,5,3,3,2,3,4,2,5,4,3,4,2,3,3,5,4,4};
	
// 6. Realistic and Practical Activities
	int rpa[18]={2,5,3,3,2,2,4,3,5,4,4,4,3,3,3,5,5,4};
// 6.1 Home and Personal Projects
	int hp[18]={5,5,2,3,3,5,3,3,4,5,4,4,4,3,5,2,5,3};
// 6.2 Hands-On Trades
	int ht[18]={3,5,3,4,2,4,4,3,5,4,4,4,4,3,3,3,5,4}; 
// 6.3 Culinary Interests
	int ci[18]={5,5,4,4,3,5,4,4,4,3,5,5,5,5,4,5,5,4};
// 6.4 Automotive and Repairs
	int ar[18]={3,5,3,3,2,3,3,2,5,4,4,3,2,3,2,5,5,3};
	
// 7. Physical and Outdoor Interests
	int poi[18]={4,3,5,4,2,3,5,3,2,5,5,5,3,4,4,4,4,4};
// 7.1 Outdoor Exploration
	int oe[18]={5,4,5,4,3,3,5,3,4,5,5,5,4,5,4,4,4,4};
// 7.2 Sports and Fitness
	int sf[18]={3,5,5,4,3,3,5,3,4,4,4,5,3,3,5,5,4,5};
// 7.3 Recreation
	int rec[18]={4,3,5,4,3,4,4,3,3,4,5,3,3,5,5,3,4,4};
// 7.4 Wellness
	int wel[18]={4,5,4,5,4,3,3,4,3,4,4,3,4,5,4,5,5,3};
	
// 8. Technical and Mechanical Curiosity
	int tmc[18]={4,5,2,2,2,4,3,2,5,5,4,4,2,5,2,5,4,3};
// 8.1 Engineering and Design
	int ed[18]={5,5,3,3,2,5,4,3,5,4,4,4,4,3,5,3,5,4};
// 8.2 Programming and Technology
	int pt[18]={5,5,3,3,2,5,4,3,5,5,5,5,4,3,5,3,5,4};
// 8.3 Repairs and Maintenance
	int rm[18]={2,5,2,3,2,3,2,2,5,4,4,3,2,3,2,5,4,2};
	
// 9. Helping and Healing Interests
	int hhi[18]={4,5,4,5,3,3,2,5,4,3,5,4,5,4,4,5,5,3};
// 9.1 Healthcare Professions
	int hep[18]={3,5,4,5,3,3,2,5,5,3,5,4,5,5,3,5,5,4};
// 9.2 Mental and Emotional Wellness
	int mew[18]={5,3,3,5,5,5,2,5,3,3,5,3,3,5,3,5,5,4}; 
	
// 10. Intellectual and Conceptual Exploration
	int ice[18]={5,4,2,2,3,5,3,3,5,5,4,4,3,5,2,5,5,3};
// 10.1 History and Culture
	int hc[18]={5,4,3,4,3,4,2,4,5,4,4,4,3,5,3,4,5,3};
// 10.2 Sciences and Exploration
	int se[18]={5,5,3,3,2,5,4,2,5,4,4,4,3,5,3,5,5,3};
// 10.3 Theoretical and Philosophical Studies
	int tps[18]={5,4,2,3,3,5,3,4,5,5,4,3,3,5,2,5,5,3};
// 10.4 Creative and Analytical Thinking
	int cat[18]={5,4,3,3,3,5,3,3,5,5,4,4,3,5,3,5,5,3};
// 10.5 Literary Exploration
	int le[18]={5,4,3,3,4,5,3,4,4,5,4,4,3,5,3,5,5,3};

// 11.Entertainment and Leisure
	int el[18]={4,3,5,4,3,4,4,3,3,3,4,3,3,4,5,3,3,4};
// 11.1 Games and Play
	int gp[18]={5,3,5,4,3,5,4,3,5,3,5,5,4,5,5,3,4,3}; 
// 11.2 Media Consumption
	int mc[18]={5,3,3,4,5,5,3,4,4,3,5,3,3,5,4,3,3,2};
// 11.3 Collecting and Relaxation
	int cor[18]={4,5,2,3,5,3,2,3,5,5,2,3,2,5,3,5,5,2};
// 11.4 Hobbies and Travel
	int hot[18]={5,3,4,3,3,5,5,3,3,5,5,3,3,5,4,3,3,3};
	
// a. Power and Energy Systems
	int pes[18]={3,5,2,3,1,4,2,2,5,3,4,3,3,4,2,5,4,3};
// b. Electronics and Embedded Systems
	int ees[18]={3,5,2,3,1,4,2,2,5,4,4,3,2,5,2,5,5,3};
// c. Control and Automation Engineering
	int cae[18]={4,5,3,4,2,4,3,3,5,4,5,4,3,4,3,5,5,3};
// d. Communication and Signal Processing
	int csp[18]={4,5,2,3,2,5,3,3,5,4,5,5,3,5,2,5,5,3};
// e. Computer and Networking Systems
	int cns[18]={5,5,3,3,1,5,4,3,5,4,5,4,2,5,3,5,5,4};
// f. Electromagnetic and Photonics 
	int ep[18]={5,5,2,3,1,5,4,2,5,4,5,3,2,5,2,5,5,3};
// g. Electrical Machines and Drives
	int emd[18]={3,5,2,3,1,4,3,2,5,4,4,3,2,4,2,5,5,3};
// h. Power Electronics
	int pe[18]={3,5,2,3,2,4,3,2,5,4,5,4,3,4,2,5,5,3};
// i. Biomedical Engineering (Electronics Focused)
	int beef[18]={4,5,3,4,2,5,3,4,5,3,5,4,4,4,3,5,5,3};
// j. Nanotechnology and Advanced Materials
	int nam[18]={5,5,2,3,2,5,4,2,5,4,5,5,3,5,2,5,5,3};

	int uace=0,usie=0,uiat=0,ueld=0,uosa=0,urpa=0,upoi=0,utmc=0,uhhi=0,uice=0,uel=0,uhc=0,use=0,utps=0,ucat=0, ule=0;
	int uoe=0,usf=0,urec=0,uwel=0, uva=0, upa=0, ucd=0, ula=0, uma=0, uce=0, ucr=0, umn=0, ued=0, upt=0, urm=0, uhp=0;
	int uht=0, uci=0, uar=0, ube=0, uls=0, upi=0, uas=0, uelm=0, ufr=0, ura=0, ups=0, uct=0, ugp=0, umc=0, ucor=0, uhot=0;
	int uhep=0, umew=0, upes=0, uees=0, ucae=0, ucsp=0, ucns=0, uep=0, uemd=0, upe=0, ubeef=0, unam=0;
	for(i=0; i<5; i++){
		uace += hi(user[i], ace[i]);
		usie += hi(user[i], sie[i]);
		uiat += hi(user[i], iat[i]); 
		ueld += hi(user[i], eld[i]);  
		uosa += hi(user[i], osa[i]);
		urpa += hi(user[i], rpa[i]);
		upoi += hi(user[i], poi[i]);
		utmc += hi(user[i], tmc[i]);
		uhhi += hi(user[i],hhi[i]);
		uice += hi(user[i],ice[i]);
		uel += hi(user[i],el[i]);
		uhc += hi(user[i],hc[i]);
		use += hi(user[i], se[i]); 
		utps += hi(user[i], tps[i]);
		ucat += hi(user[i], cat[i]);
		ule += hi(user[i], le[i]);
		uoe += hi(user[i], oe[i]);
		usf += hi(user[i], sf[i]);
		urec += hi(user[i], rec[i]);
		uwel += hi(user[i], wel[i]);
		uva += hi(user[i], va[i]);
		upa += hi(user[i], pa[i]);
		ucd += hi(user[i], cd[i]);
		ula += hi(user[i], la[i]);
		uma += hi(user[i], ma[i]);
		uce += hi(user[i], ce[i]);
		ucr += hi(user[i], cr[i]);
		umn += hi(user[i], mn[i]);
		ued += hi(user[i], ed[i]);
		upt += hi(user[i], pt[i]);
		urm += hi(user[i], rm[i]);
		uhp += hi(user[i], hp[i]);
		uht += hi(user[i], ht[i]);
		uci += hi(user[i], ci[i]);
		uar += hi(user[i], ar[i]);
		ube += hi(user[i], be[i]); 
		uls += hi(user[i], ls[i]);
		upi += hi(user[i], pi[i]);
		uas += hi(user[i], as[i]);
		uelm += hi(user[i], elm[i]);
		ufr += hi(user[i], fr[i]);
		ura += hi(user[i], ra[i]);
		ups += hi(user[i], ps[i]);
		uct += hi(user[i], ct[i]);
		ugp += hi(user[i], gp[i]);
		umc += hi(user[i], mc[i]); 
		ucor += hi(user[i], cor[i]); 
		uhot += hi(user[i], hot[i]); 
		uhep += hi(user[i], hep[i]);
		umew += hi(user[i], mew[i]); 
		upes += hi(user[i], pes[i]); 
		uees += hi(user[i], ees[i]); 
		ucae += hi(user[i], cae[i]); 
		ucsp += hi(user[i], csp[i]); 
		ucns += hi(user[i], cns[i]); 
		uep += hi(user[i], ep[i]); 
		uemd += hi(user[i], emd[i]); 
		upe += hi(user[i], pe[i]); 
		ubeef += hi(user[i], beef[i]); 
		unam += hi(user[i], nam[i]); 
	}
	for(i=5; i<13; i++){
		uace += mi(user[i], ace[i]);
		usie += mi(user[i], sie[i]); 
		uiat += mi(user[i], iat[i]);  
		ueld += mi(user[i], eld[i]); 
		uosa += mi(user[i], osa[i]);
		urpa += mi(user[i], rpa[i]);
		upoi += mi(user[i], poi[i]);
		utmc += mi(user[i], tmc[i]);
		uhhi += mi(user[i],hhi[i]);
		uice += mi(user[i],ice[i]);
		uel += mi(user[i],el[i]);
		uhc += mi(user[i],hc[i]);
		use += mi(user[i], se[i]); 
		utps += mi(user[i], tps[i]);
		ucat += mi(user[i], cat[i]);
		ule += mi(user[i], le[i]);
		uoe += mi(user[i], oe[i]);
		usf += mi(user[i], sf[i]);
		urec += mi(user[i], rec[i]);
		uwel += mi(user[i], wel[i]);
		uva += mi(user[i], va[i]);
		upa += mi(user[i], pa[i]);
		ucd += mi(user[i], cd[i]);
		ula += mi(user[i], la[i]);
		uma += mi(user[i], ma[i]);
		uce += mi(user[i], ce[i]);
		ucr += mi(user[i], cr[i]);
		umn += mi(user[i], mn[i]);
		ued += mi(user[i], ed[i]);
		upt += mi(user[i], pt[i]);
		urm += mi(user[i], rm[i]);
		uhp += mi(user[i], hp[i]);
		uht += mi(user[i], ht[i]);
		uci += mi(user[i], ci[i]);
		uar += mi(user[i], ar[i]);
		ube += mi(user[i], be[i]); 
		uls += mi(user[i], ls[i]);
		uas += mi(user[i], as[i]);
		uelm += mi(user[i], elm[i]);
		ufr += mi(user[i], fr[i]);
		ura += mi(user[i], ra[i]);
		ups += mi(user[i], ps[i]);
		uct += mi(user[i], ct[i]);
		ugp += mi(user[i], gp[i]);
		umc += mi(user[i], mc[i]); 
		ucor += mi(user[i], cor[i]); 
		uhot += mi(user[i], hot[i]); 
		uhep += mi(user[i], hep[i]);
		umew += mi(user[i], mew[i]); 
		upes += mi(user[i], pes[i]); 
		uees += mi(user[i], ees[i]); 
		ucae += mi(user[i], cae[i]); 
		ucsp += mi(user[i], csp[i]); 
		ucns += mi(user[i], cns[i]); 
		uep += mi(user[i], ep[i]); 
		uemd += mi(user[i], emd[i]); 
		upe += mi(user[i], pe[i]); 
		ubeef += mi(user[i], beef[i]); 
		unam += mi(user[i], nam[i]); 
	}
	for(i=13; i<18; i++){
		uace += li(user[i], ace[i]);
		usie += li(user[i], sie[i]);
		uiat += li(user[i], iat[i]);   
		ueld += li(user[i], eld[i]); 
		uosa += li(user[i], osa[i]);
		urpa += li(user[i], rpa[i]);
		upoi += li(user[i], poi[i]);
		utmc += li(user[i], tmc[i]);
		uhhi += li(user[i],hhi[i]);
		uice += li(user[i],ice[i]);
		uel += li(user[i],el[i]);
		uhc += li(user[i],hc[i]);
		use += li(user[i], se[i]); 
		utps += li(user[i], tps[i]);
		ucat += li(user[i], cat[i]);
		ule += li(user[i], le[i]);
		uoe += li(user[i], oe[i]);
		usf += li(user[i], sf[i]);
		urec += li(user[i], rec[i]);
		uwel += li(user[i], wel[i]);
		uva += li(user[i], va[i]);
		upa += li(user[i], pa[i]);
		ucd += li(user[i], cd[i]);
		ula += li(user[i], la[i]);
		uma += li(user[i], ma[i]);
		uce += li(user[i], ce[i]);
		ucr += li(user[i], cr[i]);
		umn += li(user[i], mn[i]);
		ued += li(user[i], ed[i]);
		upt += li(user[i], pt[i]);
		urm += li(user[i], rm[i]);
		uhp += li(user[i], hp[i]);
		uht += li(user[i], ht[i]);
		uci += li(user[i], ci[i]);
		uar += li(user[i], ar[i]);
		ube += li(user[i], be[i]); 
		uls += li(user[i], ls[i]);
		uas += li(user[i], as[i]);
		uelm += li(user[i], elm[i]);
		ufr += li(user[i], fr[i]);
		ura += li(user[i], ra[i]);
		ups += li(user[i], ps[i]);
		uct += li(user[i], ct[i]);
		ugp += li(user[i], gp[i]);
		umc += li(user[i], mc[i]); 
		ucor += li(user[i], cor[i]); 
		uhot += li(user[i], hot[i]); 
		uhep += li(user[i], hep[i]);
		umew += li(user[i], mew[i]); 
		upes += li(user[i], pes[i]); 
		uees += li(user[i], ees[i]); 
		ucae += li(user[i], cae[i]); 
		ucsp += li(user[i], csp[i]); 
		ucns += li(user[i], cns[i]); 
		uep += li(user[i], ep[i]); 
		uemd += li(user[i], emd[i]); 
		upe += li(user[i], pe[i]); 
		ubeef += li(user[i], beef[i]); 
		unam += li(user[i], nam[i]); 
	}
	printf("\n*1. Artistic and Creative Expression: \t\t\t\t %d\n", uace);
	printf("*2. Social and Interpersonal Engagement: \t\t\t\t %d\n", usie);
	printf("3. Investigative and Analytical Thinking: \t\t\t\t %d\n", uiat);
	printf("4. Enterprising and Leadership Development: \t\t\t\t %d\n", ueld);
	printf("5. Organized and Structured Activities: \t\t\t\t %d\n", uosa);
	printf("6. Realistic and Practical Activities: \t\t\t\t %d\n", urpa); 
	printf("*7. Physical and Outdoor Interests: \t\t\t\t %d\n", upoi); 
	printf("8. Technical and Mechanical Curiosity: \t\t\t\t %d\n", utmc); 
	printf("9. Helping and Healing Interests: \t\t\t\t %d\n", uhhi);
	printf("*10. Intellectual and Conceptual Exploration: \t\t\t\t %d\n", uice);
	printf("11. Entertainment and Leisure: \t\t\t\t %d\n", uel); 
	
	printf("\n1.1 Visual Arts: \t\t\t\t\t %d\n", uva);
	printf("1.2 Performing Arts: \t\t\t\t\t %d\n", upa);
	printf("1.3 Crafts and Design: \t\t\t\t\t %d\n", ucd);
	printf("1.4 Literary Arts: \t\t\t\t\t %d\n", ula);
	printf("1.5 Media Arts: \t\t\t\t\t %d\n", uma);
	
	printf("\n2.1 Community Engagement: \t\t\t\t\t %d\n", uce);
	printf("2.2 Communication and Relationships: \t\t\t\t\t %d\n", ucr);
	printf("2.3 Media and Networking: \t\t\t\t\t %d\n", umn);
	
	printf("\n7.1 Outdoor Exploration: \t\t\t\t\t %d\n", uoe);
	printf("7.2 Sports and Fitness: \t\t\t\t\t %d\n", usf); 
	printf("7.3 Recreation: \t\t\t\t\t %d\n", urec);
	printf("7.4 Wellness: \t\t\t\t\t %d\n", uwel);
	
	printf("\n10.1 History and Culture: \t\t\t\t\t %d\n", uhc); 
	printf("10.2 Sciences and Exploration: \t\t\t\t\t %d\n", use); 
	printf("10.3 Theoretical and Philosophical Studies: \t\t\t\t\t %d\n", utps); 
	printf("10.4 Creative and Analytical Thinking: \t\t\t\t\t %d\n", ucat); 
	printf("10.5 Literary Exploration: \t\t\t\t\t %d\n", ule); 
	
	printf("\n3.1Research and Analysis: \t\t\t\t\t %d\n", ura);
	printf("3.2 Problem Solving and Strategy: \t\t\t\t\t %d\n", ups);
	printf("3.3 Conceptual Thinking: \t\t\t\t\t %d\n", uct);
	
	printf("\n4.1 Business and Entrepreneurship: \t\t\t\t\t %d\n", ube);
	printf("4.2 Leadership Skills: \t\t\t\t\t %d\n", uls);
	printf("4.3 Public Influence: \t\t\t\t\t %d\n", upi);
	
	printf("\n5.1 Administrative Skills: \t\t\t\t\t %d\n", uas);
	printf("5.2 Event and Logistics Management: \t\t\t\t\t %d\n", uelm);
	printf("5.3 Finance and Resources: \t\t\t\t\t %d\n", ufr);
	
	printf("\n6.1 Home and Personal Projects: \t\t\t\t\t %d\n", uhp);
	printf("6.2 Hands-On Trades: \t\t\t\t\t %d\n", uht);
	printf("6.3 Culinary Interests: \t\t\t\t\t %d\n", uci);
	printf("6.4 Automotive and Repairs: \t\t\t\t\t %d\n", uar);
	
	printf("\n8.1 Engineering and Design: \t\t\t\t\t %d\n", ued);
	printf("8.2 Programming and Technology: \t\t\t\t\t %d\n", upt);
	printf("8.3 Repairs and Maintenance: \t\t\t\t\t %d\n", urm);
	
	printf("\n9.1 Healthcare Professions: \t\t\t\t\t %d\n", uhep);
	printf("9.2 Mental and Emotional Wellness: \t\t\t\t\t %d\n", umew);
	
	printf("\n11.1 Games and Play: \t\t\t\t\t %d\n", ugp);
	printf("11.2 Media Consumption: \t\t\t\t\t %d\n", umc);
	printf("11.3 Collecting and Relaxation: \t\t\t\t\t %d\n", ucor);
	printf("11.4 Hobbies and Travel: \t\t\t\t\t %d\n", uhot);
	
	printf("1. %3d 2. %3d 3. %3d 4. %3d 5. %3d 6. %3d 7. %3d 8. %3d 9. %3d 10. %3d ", upes, uees, ucae, ucsp, ucns, uep, uemd, upe, ubeef, unam);

	return 0;
}

int hi (int a, int b){
    int diff = abs(a - b);
    if (diff == 0) return 107;
    if (diff == 1) return 58;
    if (diff == 2) return 26;
    if (diff == 3) return 7;
    if (diff == 4) return 0;
    return 0;
}
int mi(int a, int b){
    int diff = abs(a - b);
    if (diff == 0) return 24;
    if (diff == 1) return 14;
    if (diff == 2) return 6;
    if (diff == 3) return 2;
    if (diff == 4) return 0;
    return 0;
}
int li(int a, int b){
    int diff = abs(a - b);
    if (diff == 0) return 16;
    if (diff == 1) return 9;
    if (diff == 2) return 4;
    if (diff == 3) return 1;
    if (diff == 4) return 0;
    return 0;
}