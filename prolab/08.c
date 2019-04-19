#include <stdio.h>
#include <string.h>

int nationNumbers();
int help();
int credit();
	int main(){


	char Ap1[20]="A1";
	char Ap2[20]="A2";
	char Bp1[20];
	char Bp2[20];
	char Cp1[20];
	char Cp2[20];
	char Dp1[20];
	char Dp2[20];
	char Ep1[20];
	char Ep2[20];
	char Fp1[20]; int goalA=0;int goalB=0;int goalC=0;int goalD=0;int passedA=0;int passedB=0;int passedC=0;int passedD=0; int overallA=0; int overallB=0; int overallC=0; int overallD=0;int pointA=0;int pointB=0;int pointC=0;int pointD=0;
	char Fp2[20];
	char Gp1[20];
	char Gp2[20];
	char Hp1[20];
	char Hp2[20];
	char A[21];
	char B[21];
	char C[21];
	char D[21];
	char E[21];
	char F[21];
	char G[21];
	char H[21];
	char x;	char p;
	char u[20];char z[20];
	char *end;
	//main menu
		printf(" ________________________________________________________________________________________ \n");
		printf("|#|                       SIMULASI PERTANDINGAN WORLD CUP 2018                         |#|\n");
		printf("|#|________________________FAKULTAS TEKNIK UNIVERSITAS INDONESIA_______________________|#|\n");
		printf("|#|####################################################################################|#|\n");
		printf("|#|  Group 8                                                                           |#|\n");
		printf("|#| NAME : 1. Aufa Dhiya Aydan                 ( 1706043260 )                          |#|\n");
		printf("|#|        2. Bhirawa Bagus Pratama Putra      ( 1706043121 )                          |#|\n");
		printf("|#|------------------------------------------------------------------------------------|#|\n");
		printf("|#|                                                                                    |#|\n");
		printf("|#|    1. Start Simulation                                                             |#|\n");
		printf("|#|    2. Help                                                                         |#|\n");
		printf("|#|    3. Credit                                                                       |#|\n");
		printf("|#|    4. Exit                                                                         |#|\n");
		printf("|#|                                                                                    |#|\n");
		printf("|#|    Input the mentioned number to select them (Other numbers will not be read)      |#|\n");
		printf("|#|____________________________________________________________________________________|#|\n");
		printf("|#|####################################################################################|#|\n");

		scanf("%c",&x);

		switch(x){
			case '1':system("cls");printf("The simulation will now begin........\n");break;
			case '2':system("cls");help();break;
			case '3':system("cls");credit();break;
			case '4':system("cls");printf("Hope to see you again!\n");return 0;break;
			default:printf("Invalid input. Please input only designated inputs.");Sleep(500);system("cls");return main();
		}
		RedO:
	printf("Would you like to enter the group match simulation first?(Group simulation is only done once in this program)\n(Y/N)\n");
	scanf("%c",&x);
	switch(x){
			case 'N':goto directCup;break;
			case 'Y':break;
			default:printf("Please put a better input");Sleep(500);system("cls");goto RedO;break;
	}

	printf("                       ||||||||||||||SCENARIO||||||||||||||\n");
	printf("Four nations,  (designated as A1, A2, A3, and A4) has been chosen to play in the World Cup.\nGuide the scoring of their group match to see which of them goes to the main event!\n");


	system("pause");
	system("cls");
//score counting for group match starts here
  	one:
	printf("|||||||||||First match|||||||||||\n");
	printf("A1 vs. A2\nWhat are the scores?\n(score of team 1 (enter) score of team 2)\n");

	do {
     if (!fgets(u, sizeof u, stdin)){//This is made to make sure no non-number becomes input. A bit rusty, but it works.

        break;}
     u[strlen(u) - 1] = 0;

     goalA = strtol(u, &end, 10);
} while (end != u + strlen(u));
do {
     if (!fgets(u, sizeof u, stdin)){

        break;}
     u[strlen(u) - 1] = 0;

     goalA = strtol(u, &end, 10);
} while (end != u + strlen(u));

do {
     if (!fgets(z, sizeof z, stdin)){

        break;}
     z[strlen(z) - 1] = 0;

     goalB = strtol(z, &end, 10);
} while (end != z+ strlen(z));



	if(goalA>goalB){
		printf("A1 gets 3 points!\n");
		pointA=pointA+3;
		overallA=overallA+goalA;
		overallB=overallB+goalB;
		passedA=goalB+passedA;
		passedB=goalA+passedB;
	}
	else if(goalA<goalB){
		printf("A2 gets 3 points!\n");
		pointB=pointB+3;
		overallA=overallA+goalA;
		overallB=overallB+goalB;
		passedA=goalB+passedA;
		passedB=goalA+passedB;
}
	else if(goalA=goalB){
		printf("A1 and A2 get 1 points!\n");
		pointA=pointA+1;
		pointB=pointB+1;
		overallA=overallA+goalA;
		overallB=overallB+goalB;
		passedA=goalB+passedA;
		passedB=goalA+passedB;
}

	printf("A3 vs. A4\nWhat are the scores?\n(score of team 1 (enter) score of team 2)\n");

do {
     if (!fgets(u, sizeof u, stdin)){

        break;}
     u[strlen(u) - 1] = 0;

     goalC = strtol(u, &end, 10);
} while (end != u + strlen(u));

do {
     if (!fgets(z, sizeof z, stdin)){

        break;}
     z[strlen(z) - 1] = 0;

     goalD = strtol(z, &end, 10);
} while (end != z+ strlen(z));



	if(goalC>goalD){
		printf("A3 gets 3 points!\n");
		pointC=pointC+3;
		overallC=overallC+goalC;
		overallD=overallD+goalD;
		passedC=goalD+passedC;
		passedD=goalC+passedD;
	}
	else if(goalC<goalD){
		printf("A4 gets 3 points!\n");
		pointD=pointD+3;
		overallC=overallC+goalC;
		overallD=overallD+goalD;
		passedC=goalD+passedC;
		passedD=goalC+passedD;
}
	else if(goalC=goalD){
		printf("A3 and A4 get 1 points!\n");
		pointC=pointC+1;
		pointD=pointD+1;
		overallC=overallC+goalC;
		overallD=overallD+goalD;
		passedC=goalD+passedC;
		passedD=goalC+passedD;
}system("pause");
system("cls");

	printf("|||||||||||Second match|||||||||||\n");
	printf("A1 vs. A4\nWhat are the scores?\n(score of team 1 (enter) score of team 2)\n");

do {
     if (!fgets(u, sizeof u, stdin)){

        break;}
     u[strlen(u) - 1] = 0;

     goalA = strtol(u, &end, 10);
} while (end != u + strlen(u));

do {
     if (!fgets(z, sizeof z, stdin)){

        break;}
     z[strlen(z) - 1] = 0;

     goalD = strtol(z, &end, 10);
} while (end != z+ strlen(z));



	if(goalA>goalD){
		printf("A1 gets 3 points!\n");
		overallA=overallA+goalA;
		overallD=overallD+goalD;
		pointA=pointA+3;
		passedA=goalD+passedA;
		passedD=goalA+passedD;
	}
	else if(goalA<goalD){
		printf("A4 gets 3 points!\n");
		overallA=overallA+goalA;
		overallD=overallD+goalD;
		pointD=pointD+3;
		passedA=goalD+passedA;
		passedD=goalA+passedD;
}
	else if(goalA=goalD){
		printf("A1 and A4 get 1 points!\n");
		overallA=overallA+goalA;
		overallD=overallD+goalD;
		pointA=pointA+1;
		pointD=pointD+1;
		passedA=goalD+passedA;
		passedD=goalA+passedD;
}

	printf("A2 vs. A3\nWhat are the scores?\n(score of team 1 (enter) score of team 2)\n");

do {
     if (!fgets(u, sizeof u, stdin)){

        break;}
     u[strlen(u) - 1] = 0;

     goalB= strtol(u, &end, 10);
} while (end != u + strlen(u));

do {
     if (!fgets(z, sizeof z, stdin)){

        break;}
     z[strlen(z) - 1] = 0;

     goalC = strtol(z, &end, 10);
} while (end != z+ strlen(z));



	if(goalC>goalB){
		printf("A3 gets 3 points!\n");
		pointC=pointC+3;
		overallB=overallB+goalB;
		overallC=overallC+goalC;
		passedC=goalB+passedC;
		passedB=goalC+passedB;
	}
	else if(goalC<goalB){
		printf("A2 gets 3 points!\n");
		pointB=pointB+3;
		overallB=overallB+goalB;
		overallC=overallC+goalC;
		passedC=goalB+passedC;
		passedB=goalC+passedB;
}
	else if(goalC=goalB){
		printf("A2 and A3 get 1 points!\n");
		pointC=pointC+1;
		pointB=pointB+1;
		overallB=overallB+goalB;
		overallC=overallC+goalC;
		passedC=goalB+passedC;
		passedB=goalC+passedB;
}system("pause");
system("cls");
five:
	printf("|||||||||||Final match|||||||||||\n");
	printf("A1 vs. A3\nWhat are the scores?\n(score of team 1 (enter) score of team 2)\n");

do {
     if (!fgets(u, sizeof u, stdin)){

        break;}
     u[strlen(u) - 1] = 0;

     goalA = strtol(u, &end, 10);
} while (end != u + strlen(u));

do {
     if (!fgets(z, sizeof z, stdin)){

        break;}
     z[strlen(z) - 1] = 0;

     goalC = strtol(z, &end, 10);
} while (end != z+ strlen(z));



	if(goalC>goalA){
		printf("A3 gets 3 points!\n");
		pointC=pointC+3;
		overallA=overallA+goalA;
		overallC=overallC+goalC;
		passedC=goalA+passedC;
		passedA=goalC+passedA;
	}
	else if(goalC<goalA){
		printf("A1 gets 3 points!\n");
		pointA=pointA+3;
		overallA=overallA+goalA;
		overallC=overallC+goalC;
		passedC=goalA+passedC;
		passedA=goalC+passedA;
}
	else if(goalA=goalC){
		printf("A1 and A3 get 1 points!\n");
		pointC=pointC+1;
		pointA=pointA+1;
		overallA=overallA+goalA;
		overallC=overallC+goalC;
		passedC=goalA+passedC;
		passedA=goalC+passedA;
}
	six:
	printf("A2 vs. A4\nWhat are the scores?\n(score of team 1 (enter) score of team 2)\n");

do {
     if (!fgets(u, sizeof u, stdin)){

        break;}
     u[strlen(u) - 1] = 0;

     goalB = strtol(u, &end, 10);
} while (end != u + strlen(u));

do {
     if (!fgets(z, sizeof z, stdin)){

        break;}
     z[strlen(z) - 1] = 0;

     goalD = strtol(z, &end, 10);
} while (end != z+ strlen(z));



	if(goalB>goalD){
		printf("A2 gets 3 points!\n");
		pointB=pointB+3;
		overallB=overallB+goalB;
		overallD=overallD+goalD;
		passedD=goalB+passedD;
		passedB=goalD+passedB;
	}
	else if(goalB<goalD){
		printf("A4 gets 3 points!\n");
		pointD=pointD+3;
		overallB=overallB+goalB;
		overallD=overallD+goalD;
		passedD=goalB+passedD;
		passedB=goalD+passedB;
}
	else if(goalD=goalB){
		printf("A2 and A4 get 1 points!\n");
		pointB=pointB+1;
		pointD=pointD+1;
		overallB=overallB+goalB;
		overallD=overallD+goalD;
		passedD=goalB+passedD;
		passedB=goalD+passedB;
}system("pause");system("cls");
overallA=overallA-passedA;
overallB=overallB-passedB;
overallC=overallC-passedC;
overallD=overallD-passedD;
	printf("Calculating Result........\n");
	system("pause");
	system("cls");
	printf("|||||||||||Match Result|||||||||||\nA1=%d\nA2=%d\nA3=%d\nA4=%d\n",pointA,pointB,pointC,pointD);
	printf("|||||||||||Goals Difference|||||||||||\nA1=%d\nA2=%d\nA3=%d\nA4=%d\n",overallA,overallB, overallC, overallD);
	system("pause");
	system("cls");
//Complicated score comparison starts here
//A first
	if(pointA>pointB&&pointA>pointC&&pointA>pointD){

		 	printf("The first position is A1");strcpy(Ap1,"A1");
		if(pointB>pointC && pointB>pointD){

		 	printf("\nthe second position is A2");strcpy(Ap2,"A2");
		 }
		else if(pointC>pointB&& pointC>pointD){

		 	printf("\nthe second position is A3");strcpy(Ap2,"A3");
		 }
        else if(pointD>pointC&& pointB>pointD){

		 	printf("\nthe second position is A4");strcpy(Ap2,"A4");
        }
		else if(pointB=pointC&&pointB>pointD&&pointC>pointD){
			if(overallB>overallC){

		 	printf("\nthe second position is A2");strcpy(Ap2,"A2");
			}
			else if(overallB<overallC){

		 	printf("\nthe second position is A3");strcpy(Ap2,"A3");
			}
		}
		else if(pointB=pointD&&pointB>pointC){
			if (overallB>overallD){

		 	printf("\nthe second position is A2");strcpy(Ap2,"A2");
			}
			else{

		 	printf("\nthe second position is A4");strcpy(Ap2,"A4");
			}
		}
		else if(pointC=pointD&&pointC>pointB){
			if(overallC>overallD){

		 	printf("\nthe second position is A3");strcpy(Ap2,"A3");
			}
			else{

		 	printf("\nthe second position is A4");strcpy(Ap2,"A4");
			}
		}
		}
//B first
    else if(pointB>pointA&&pointB>pointC&&pointB>pointD){

		printf("The first position is A2");strcpy(Ap1,"A2");
			if(pointA>pointC&& pointA>pointD){

		 	printf("\nthe second position is A1");strcpy(Ap2,"A1");}
			else if(pointC>pointA && pointC>pointD){

		 	printf("\nthe second position is A3");strcpy(Ap2,"A3");}
		 	else if(pointD>pointC&&pointB<pointD){

		 	printf("\nthe second position is A4");strcpy(Ap2,"A4");}
		 	else if(pointA=pointC&&pointA>pointD){
				if(overallA>overallC){

		 		printf("\nthe second position is A1");strcpy(Ap2,"A1");}

				else{

		 		printf("\nthe second position is A3");strcpy(Ap2,"A3");}
			}
			else if(pointA=pointD&&pointA>pointC){
				if (overallA>overallD){

		 		printf("\nthe second position is A1");strcpy(Ap2,"A1");}

			else{

		 	printf("\nthe second position is A3");strcpy(Ap2,"A4");}
			}
			else if(pointC=pointD&&pointC>pointA){
				if(overallC>overallD){

		 		printf("\nthe second position is A3");strcpy(Ap2,"A3");}

			else{

		 	printf("\nthe second position is A4");strcpy(Ap2,"A4");}
			}
		}
//C first
	 else if(pointC>pointB&&pointA<pointC&&pointC>pointD){

		printf("The first position is A3");strcpy(Ap1,"A3");
		 if(pointB<pointA&& pointA>pointD){

		 	printf("\nthe second position is A1");strcpy(Ap2,"A1");}

		 else if(pointD<pointB&& pointB>pointA){

		 	printf("\nthe second position is A2");strcpy(Ap2,"A2");}

         else if(pointA<pointD&& pointB>pointD){

		 	printf("\nthe second position is A4");strcpy(Ap2,"A4");}

		else if(pointB=pointA&&pointB>pointD){
			if(overallB>overallA){

		 	printf("\nthe second position is A2");strcpy(Ap2,"A2");}
			else{

		 	printf("\nthe second position is A1");strcpy(Ap2,"A1");}
		}
		else if(pointB=pointD&&pointB>pointA){
			if (overallB>overallD){
			printf("\nthe second position is A2");strcpy(Ap2,"A2");}

			else{

		 	printf("\nthe second position is A4");strcpy(Ap2,"A4");}
		}

		else if(pointA=pointD&&pointA>pointB){
			if(overallA>overallD){

		 	printf("\nthe second position is A1");strcpy(Ap2,"A1");}
			else{

		 	printf("\nthe second position is ");strcpy(Ap2,"A4");}
		}}
//D first
	else if(pointD>pointB&&pointA<pointD&&pointC<pointD){

			printf("The first position is A4");strcpy(Ap1,"A4");;
		 if(pointB<pointA&& pointA>pointC){

		 	printf("\nthe second position is A1");strcpy(Ap2,"A1");}
		 else if(pointC<pointB&& pointB>pointA){

		 	printf("\nthe second position is A2");strcpy(Ap2,"A2");}

        else if(pointA<pointC&& pointB<pointC){

		 	printf("\nthe second position is A3");strcpy(Ap2,"A3");}
		else if(pointB=pointC&&pointB>pointA){
			if(overallB>overallC){

		 	printf("\nthe second position is A2");strcpy(Ap2,"A2");}
			else{

		 	printf("\nthe second position is A3");strcpy(Ap2,"A3");}
		}
		else if(pointB=pointA&&pointB>pointC){
			if (overallB>overallA){

		 	printf("\nthe second position is A2");strcpy(Ap2,"A2");}

			else{

		 	printf("\nthe second position is A1");strcpy(Ap2,"A1");}
			}

		else if(pointC=pointA&&pointC>pointB){
			if(overallC>overallA){

		 	printf("\nthe second position is A3");strcpy(Ap2,"A3");}
			else{

		 	printf("\nthe second position is A1");strcpy(Ap2,"A1");}
		}}
	//AB same
	else if(pointA=pointB&&pointA>pointC&&pointA>pointD){
			if (overallA>overallB){

			printf("The first position is A1");strcpy(Ap1,"A1");

		 	printf("\nthe second position is A2");strcpy(Ap2,"A2");}

			else{

			printf("The first position is A2");strcpy(Ap1,"A2");

		 	printf("\nthe second position is A1");strcpy(Ap2,"A1");
        }
			}
    //AC same
    else if(pointA=pointC&&pointA>pointB&&pointA>pointD){
			if (overallA>overallC){

			printf("The first position is A1");strcpy(Ap1,"A1");

		 	printf("\nthe second position is A3");strcpy(Ap2,"A3");
			}
			else{

			printf("The first position is A3");strcpy(Ap1,"A3");

		 	printf("\nthe second position is A1");strcpy(Ap2,"A1");
			}
		}
	//AD	same

	else if(pointA=pointD&&pointA>pointB&&pointA>pointC){
			if (overallA>overallD){

			printf("The first position is A1");strcpy(Ap1,"A1");

		 	printf("\nthe second position is A4");strcpy(Ap2,"A4");
			}
			else{

			printf("The first position is A4");strcpy(Ap1,"A4");

		 	printf("\nthe second position is A1");strcpy(Ap2,"A1");
			}
		}
	//BC same
	else if(pointB=pointC&&pointA<pointB&&pointB>pointD){
			if (overallB>overallC){

			printf("The first position is A2");strcpy(Ap1,"A2");

		 	printf("\nthe second position is A3");strcpy(Ap2,"A3");
			}
			else{

			printf("The first position is A3");strcpy(Ap1,"A3");

		 	printf("\nthe second position is A2");strcpy(Ap2,"A2");
			}
		}
	//BD same
	else if(pointB=pointD&&pointB>pointA&&pointB>pointC){
			if (overallB>overallD){

			printf("The first position is A2");strcpy(Ap1,"A2");

		 	printf("\nthe second position is A4");strcpy(Ap2,"A4");
			}
			else{

			printf("The first position is A4");strcpy(Ap1,"A4");

		 	printf("\nthe second position is A2");strcpy(Ap2,"A2");
			}
		}
     //CD same
	else if(pointC=pointD&&pointC>pointB&&pointA<pointC){
			if (overallC>overallD){

			printf("The first position is A3");strcpy(Ap1,"A3");

		 	printf("\nthe second position is A4");strcpy(Ap2,"A4");
			}
			else{

			printf("The first position is A4");strcpy(Ap1,"A4");

		 	printf("\nthe second position is A3");strcpy(Ap2,"A3");
			}
		}
	//ABC same
	else if(pointA=pointB=pointC && pointA>pointD) {
			if (overallA>overallB && overallA>overallC && overallB>overallC) {

				printf("The first position is A1");strcpy(Ap1,"A1");

		 		printf("\nthe second position is A2");strcpy(Ap2,"A2");}
			else if (overallA>overallB && overallA>overallC && overallC>overallB) {

				printf("The first position is A1");strcpy(Ap1,"A1");

		 		printf("\nthe second position is A3");strcpy(Ap2,"A3");}
			else if (overallA>overallB && overallA>overallC && overallC==overallB) {

				printf("The first position is A1");strcpy(Ap1,"A1");

		 		printf("\nthe second position is A2");strcpy(Ap2,"A2");}
			else if (overallB>overallA && overallB>overallC && overallA>overallC) {

				printf("The first position is A2");strcpy(Ap1,"A2");

		 		printf("\nthe second position is A1");strcpy(Ap2,"A1");}
			else if (overallB>overallA && overallB>overallC && overallC>overallA) {

				printf("The first position is A2");strcpy(Ap1,"A2");

		 		printf("\nthe second position is A3");strcpy(Ap2,"A3");}
			else if (overallB>overallA && overallB>overallC && overallC==overallA) {

				printf("The first position is A2");strcpy(Ap1,"A2");

		 		printf("\nthe second position is A1");strcpy(Ap2,"A1");}
			else if	(overallC>overallB && overallC>overallA && overallB>overallA) {

				printf("The first position is A3");strcpy(Ap1,"A3");

		 		printf("\nthe second position is A2");strcpy(Ap2,"A2");}
			else if (overallC>overallB && overallC>overallA && overallA>overallB) {

				printf("The first position is A3");strcpy(Ap1,"A3");

		 		printf("\nthe second position is A1");strcpy(Ap2,"A1");}
			else if	(overallC>overallB && overallC>overallA && overallB==overallA) {

				printf("The first position is A3");strcpy(Ap1,"A3");

		 		printf("\nthe second position is A1");strcpy(Ap2,"A1");}
			}
	//ACD same
	else if (pointA=pointD=pointC && pointA>pointB) {
			if (overallA>overallD && overallA>overallC && overallD>overallC) {

				printf("The first position is A1");strcpy(Ap1,"A1");

		 		printf("\nthe second position is A4");strcpy(Ap2,"A4");}
			else if (overallA>overallD && overallA>overallC && overallC>overallD) {

				printf("The first position is A1");strcpy(Ap1,"A1");

		 		printf("\nthe second position is A3");strcpy(Ap2,"A3");}
			else if (overallA>overallD && overallA>overallC && overallC==overallD) {

				printf("The first position is A1");strcpy(Ap1,"A1");

		 		printf("\nthe second position is A3");strcpy(Ap2,"A3");}
			else if (overallD>overallA && overallD>overallC && overallA>overallC) {

				printf("The first position is A4");strcpy(Ap1,"A4");

		 		printf("\nthe second position is A1");strcpy(Ap2,"A1");}
			else if (overallD>overallA && overallD>overallC && overallC>overallA) {

				printf("The first position is A4");strcpy(Ap1,"A4");

		 		printf("\nthe second position is A3");strcpy(Ap2,"A3");}
			else if (overallD>overallA && overallD>overallC && overallC==overallA) {

				printf("The first position is A4");strcpy(Ap1,"A4");

		 		printf("\nthe second position is A1");strcpy(Ap2,"A1");}
			else if	(overallC>overallB && overallC>overallA && overallB>overallA) {

				printf("The first position is A3");strcpy(Ap1,"A3");

		 		printf("\nthe second position is ");strcpy(Ap2,"A2");}
			else if (overallC>overallD && overallC>overallA && overallA>overallD) {

				printf("The first position is A3");strcpy(Ap1,"A3");

		 		printf("\nthe second position is A1");strcpy(Ap2,"A1");}
			else if	(overallC>overallD && overallC>overallA && overallD==overallA) {

				printf("The first position is A3");strcpy(Ap1,"A3");

		 		printf("\nthe second position is A1");strcpy(Ap2,"A1");}
		 }
	//ABD same
	else if (pointA=pointB=pointD && pointA>pointC) {
			if (overallA>overallB && overallA>overallD && overallB>overallD) {

				printf("The first position is A1");strcpy(Ap1,"A1");

		 		printf("\nthe second position is A2");strcpy(Ap2,"A2");}
			else if (overallA>overallB && overallA>overallD && overallD>overallB) {

				printf("The first position is A1");strcpy(Ap1,"A1");

		 		printf("\nthe second position is A4");strcpy(Ap2,"A4");}
			else if (overallA>overallB && overallA>overallD && overallD==overallB) {

				printf("The first position is A1");strcpy(Ap1,"A1");

		 		printf("\nthe second position is A2");strcpy(Ap2,"A2");}
			else if (overallB>overallA && overallB>overallD && overallA>overallD) {

				printf("The first position is A2");strcpy(Ap1,"A2");

		 		printf("\nthe second position is A1");strcpy(Ap2,"A1");}
			else if (overallB>overallA && overallB>overallD && overallD>overallA) {

				printf("The first position is A2");strcpy(Ap1,"A2");

		 		printf("\nthe second position is A4");strcpy(Ap2,"A4");}
			else if (overallB>overallA && overallB>overallD && overallD==overallA) {

				printf("The first position is A2");strcpy(Ap1,"A2");

		 		printf("\nthe second position is A1");strcpy(Ap2,"A1");}
			else if	(overallD>overallB && overallD>overallA && overallB>overallA) {

				printf("The first position is A4");strcpy(Ap1,"A4");

		 		printf("\nthe second position is A2");strcpy(Ap2,"A2");}
			else if (overallD>overallB && overallD>overallA && overallA>overallB) {

				printf("The first position is A4");strcpy(Ap1,"A4");

		 		printf("\nthe second position is A1");strcpy(Ap2,"A1");}
			else if	(overallD>overallB && overallD>overallA && overallB==overallA) {

				printf("The first position is A4");strcpy(Ap1,"A4");

		 		printf("\nthe second position is ");strcpy(Ap2,"A1");}
	}
///BCD same
	else if (pointD=pointB=pointC && pointD>pointD) {
			if (overallD>overallB && overallD>overallC && overallB>overallC) {

				printf("The first position is A4");strcpy(Ap1,"A4");

		 		printf("\nthe second position is A2");strcpy(Ap2,"A2");}
			else if (overallD>overallB && overallD>overallC && overallC>overallB) {

				printf("The first position is A4");strcpy(Ap1,"A4");

		 		printf("\nthe second position is A3");strcpy(Ap2,"A3");}
			else if (overallD>overallB && overallD>overallC && overallC==overallB) {

				printf("The first position is A4");strcpy(Ap1,"A4");

		 		printf("\nthe second position is A2");strcpy(Ap2,"A2");}
			else if (overallB>overallD && overallB>overallC && overallD>overallC) {

				printf("The first position is A2");strcpy(Ap1,"A2");

		 		printf("\nthe second position is A4");strcpy(Ap2,"A4");}
			else if (overallB>overallD && overallB>overallC && overallC>overallD) {

				printf("The first position is A2");strcpy(Ap1,"A2");

		 		printf("\nthe second position is A3");strcpy(Ap2,"A3");}
			else if (overallB>overallD && overallB>overallC && overallC==overallD) {

				printf("The first position is A2");strcpy(Ap1,"A2");

		 		printf("\nthe second position is A4");strcpy(Ap2,"A4");}
			else if	(overallC>overallB && overallC>overallD && overallB>overallD) {

				printf("The first position is A3");strcpy(Ap1,"A3");

		 		printf("\nthe second position is A2");strcpy(Ap2,"A2");}
			else if (overallC>overallB && overallC>overallD && overallD>overallB) {

				printf("The first position is A3");strcpy(Ap1,"A3");

		 		printf("\nthe second position is A2");strcpy(Ap2,"A2");}
			else if	(overallC>overallB && overallC>overallD && overallB==overallD) {

				printf("The first position is A3");strcpy(Ap1,"A3");

		 		printf("\nthe second position is A2");strcpy(Ap2,"A2");}
		}
///ABCD same
	else if(pointA=pointB=pointC=pointD){
			if (overallA>overallB && overallA>overallC && overallA>overallD && overallB>overallC && overallB>overallD){

				printf("The first position is A1");strcpy(Ap1,"A1");

		 		printf("\nthe second position is A2");strcpy(Ap2,"A2");}
			else if (overallA>overallB && overallA>overallC && overallA>overallD && overallC>overallD && overallC>overallB){

				printf("The first position is A1");strcpy(Ap1,"A1");

		 		printf("\nthe second position is A3");strcpy(Ap2,"A3");}
			else if (overallA>overallB && overallA>overallC && overallA>overallD && overallD>overallC && overallD>overallB){

				printf("The first position is A1");strcpy(Ap1,"A1");

		 		printf("\nthe second position is A4");strcpy(Ap2,"A4");}
			else if (overallB>overallA && overallB>overallC && overallB>overallD && overallA>overallC && overallA>overallD){

				printf("The first position is A2");strcpy(Ap1,"A2");

		 		printf("\nthe second position is A1");strcpy(Ap2,"A1");}
			else if (overallB>overallA && overallB>overallC && overallB>overallD && overallC>overallD && overallC>overallA){

				printf("The first position is A2");strcpy(Ap1,"A2");

		 		printf("\nthe second position is A3");strcpy(Ap2,"A3");}
			else if (overallB>overallA && overallB>overallC && overallB>overallD && overallD>overallC && overallD>overallA){

				printf("The first position is A2");strcpy(Ap1,"A2");

		 		printf("\nthe second position is A4");strcpy(Ap2,"A4");}
			else if (overallC>overallB && overallC>overallA && overallC>overallD && overallB>overallA && overallB>overallD){

				printf("The first position is A3");strcpy(Ap1,"A3");

		 		printf("\nthe second position is A2");strcpy(Ap2,"A2");}
			else if (overallC>overallB && overallC>overallA && overallC>overallD && overallA>overallD && overallA>overallB){

				printf("The first position is A3");strcpy(Ap1,"A3");

		 		printf("\nthe second position is A1");strcpy(Ap2,"A1");}
			else if (overallC>overallB && overallC>overallA && overallC>overallD && overallD>overallA && overallD>overallB){

				printf("The first position is A3");strcpy(Ap1,"A3");

		 		printf("\nthe second position is A4");strcpy(Ap2,"A4");}
			else if (overallD>overallA && overallD>overallC && overallD>overallB && overallA>overallC && overallA>overallB){

				printf("The first position is A4");strcpy(Ap1,"A4");

		 		printf("\nthe second position is A1");strcpy(Ap2,"A1");}
			else if (overallD>overallA && overallD>overallC && overallD>overallB && overallC>overallB && overallC>overallA){

				printf("The first position is A4");strcpy(Ap1,"A4");

		 		printf("\nthe second position is A3");strcpy(Ap2,"A3");}
			else if (overallD>overallA && overallD>overallC && overallD>overallB && overallB>overallC && overallB>overallA){

				printf("The first position is A4");strcpy(Ap1,"A4");

		 		printf("\nthe second position is A2");strcpy(Ap2,"A2");}
			else if (overallA=overallB && overallA>overallC && overallA>overallD) {

				printf("The first position is A1");strcpy(Ap1,"A1");

		 		printf("\nthe second position is A2");strcpy(Ap2,"A2");}
			else if (overallA=overallC && overallA>overallB && overallA>overallD) {

				printf("The first position is A1");strcpy(Ap1,"A1");

		 		printf("\nthe second position is A3");strcpy(Ap2,"A3");}
			else if (overallA=overallD && overallA>overallC && overallA>overallD) {

				printf("The first position is A1");strcpy(Ap1,"A1");

		 		printf("\nthe second position is A4");strcpy(Ap2,"A4");}
			else if (overallC=overallB && overallB>overallD && overallB>overallA) {

				printf("The first position is A2");strcpy(Ap1,"A2");

		 		printf("\nthe second position is A3");strcpy(Ap2,"A3");}
			else if (overallC=overallD && overallC>overallA && overallC>overallB) {

				printf("The first position is A3");strcpy(Ap1,"A3");

		 		printf("\nthe second position is A4");strcpy(Ap2,"A4");}
			else if (overallB=overallD && overallB>overallA && overallB>overallC) {

				printf("The first position is ");strcpy(Ap1,"A1");

		 		printf("\nthe second position is ");strcpy(Ap2,"A3");}
			else if ("overaallA=overallB=overallC=overallD") {

				printf("The first position is A1");strcpy(Ap1,"A1");

		 		printf("\nthe second position is A2");strcpy(Ap2,"A2");}
			}printf("\n");
		system("pause");
		directCup:
		system("cls");

strcpy(Bp1,"B1");
strcpy(Bp2,"B2");
strcpy(Cp1,"C4");
strcpy(Cp2,"C2");
strcpy(Dp1,"D1");
strcpy(Dp2,"D3");
strcpy(Ep1,"E1");
strcpy(Ep2,"E2");
strcpy(Fp1,"F1");
strcpy(Fp2,"F2");
strcpy(Gp1,"G4");
strcpy(Gp2,"G2");
strcpy(Hp1,"H1");
strcpy(Hp2,"H3");
int y=0;
//Knock-out stage starts here
	printf("***********************************************************************************************\n");
	printf("||                                                                                           ||\n");
	printf("||                      The World Cup has now begun its true round                           ||\n");
	printf("||                               No more ties till the end                                   ||\n");
	printf("||                      The teams from other groups have gathered too                        ||\n");
	printf("||            The matched pairs are first position of each group, competing                  ||\n");
	printf("||                           with the second position of another                             ||\n");
	printf("||                                  Pairing round 1:                                         ||\n");
	printf("||        First position                               Second position                       ||\n");
	printf("||                                                                                           ||\n");
	printf("||      1.      %s                        vs.       %s                                       ||\n",Ap1,Ep2);
	printf("||      2.      %s                        vs.       %s                                       ||\n",Bp1,Fp2);
	printf("||      3.      %s                        vs.       %s                                       ||\n",Cp1,Gp2);
	printf("||      4.      %s                        vs.       %s                                       ||\n",Dp1,Hp2);
	printf("||      5.      %s                        vs.       %s                                       ||\n",Ep1,Ap2);
	printf("||      6.      %s                        vs.       %s                                       ||\n",Fp1,Bp2);
	printf("||      7.      %s                        vs.       %s                                       ||\n",Gp1,Cp2);
	printf("||      8.      %s                        vs.       %s                                       ||\n",Hp1,Dp2);
	printf("||                                                                                           ||\n");
	printf("||                                                                                           ||\n");
	printf("||                          Score comparison will begin shortly                              ||\n");
	printf("||                                                                                           ||\n");
	printf("||                                                                                           ||\n");
	printf("***********************************************************************************************\n");
	system("pause");
	system("cls");
	int player1;int player2;
	//scoring order is from 1 to 8
	printf("|||||------Match Starts------|||||\n%s vs %s, Enter their score!\n(score of team 1 (enter) score of team 2)\n",Ap1,Ep2);
	round1:
do {
     if (!fgets(u, sizeof u, stdin)){

        break;}
     u[strlen(u) - 1] = 0;

     player1 = strtol(u, &end, 10);
} while (end != u + strlen(u));
	do {
     if (!fgets(u, sizeof u, stdin)){

        break;}
     u[strlen(u) - 1] = 0;

     player1 = strtol(u, &end, 10);
} while (end != u + strlen(u));

do {
     if (!fgets(z, sizeof z, stdin)){

        break;}
     z[strlen(z) - 1] = 0;

     player2 = strtol(z, &end, 10);
} while (end != z+ strlen(z));
	if ( player1 > player2 ){
		printf("the winner of this round is %s!\n",Ap1);
		strcpy(A,Ap1);printf("%s shall advance to the next round!\n",A);
	}
	else if( player1 < player2 ){
		printf("the winner of this round is %s!\n",Ep2);
		strcpy(A,Ep2);printf("%s shall advance to the next round!\n",A);
	}
	else if(player1=player2){
		printf("ERROR. Inputs can't be similar. Please enter inputs with clear difference.\n");goto round1;
	}
	else{return 0;
	}
		system("pause");
		system("cls");
	printf("|||||------Match Starts------|||||\n%s vs %s, Enter their score!\n(score of team 1 (enter) score of team 2)\n",Bp1,Fp2);
	round2:
		do {
     if (!fgets(u, sizeof u, stdin)){

        break;}
     u[strlen(u) - 1] = 0;

     player1 = strtol(u, &end, 10);
} while (end != u + strlen(u));

do {
     if (!fgets(z, sizeof z, stdin)){

        break;}
     z[strlen(z) - 1] = 0;

     player2 = strtol(z, &end, 10);
} while (end != z+ strlen(z));
	if ( player1 > player2 ){
		printf("the winner of this round is %s!\n",Bp1);
		strcpy(B,Bp1);printf("%s shall advance to the next round!\n",B);
	}
	else if( player1 < player2 ){
		printf("the winner of this round is %s!\n",Fp2);
		strcpy(B,Fp2);printf("%s shall advance to the next round!\n",B);
	}
	else if(player1=player2){
		printf("ERROR. Inputs can't be similar. Please enter inputs with clear difference.\n");goto round2;}
	else{return 0;
	}
		system("pause");
		system("cls");
printf("|||||------Match Starts------|||||\n%s vs %s, Enter their score!\n(score of team 1 (enter) score of team 2)\n",Cp1,Gp2);
round3:
	do {
     if (!fgets(u, sizeof u, stdin)){

        break;}
     u[strlen(u) - 1] = 0;

     player1 = strtol(u, &end, 10);
} while (end != u + strlen(u));

do {
     if (!fgets(z, sizeof z, stdin)){

        break;}
     z[strlen(z) - 1] = 0;

     player2 = strtol(z, &end, 10);
} while (end != z+ strlen(z));
	if ( player1 > player2 ){
		printf("the winner of this round is %s!\n",Cp1);
		strcpy(C,Cp1);printf("%s shall advance to the next round!\n",C);
	}
	else if( player1 < player2 ){
		printf("the winner of this round is %s!\n",Gp2);
		strcpy(C,Gp2);printf("%s shall advance to the next round!\n",C);
	}
	else if(player1=player2){
		printf("ERROR. Inputs can't be similar. Please enter inputs with clear difference.\n");goto round3;}
	else{return 0;
	}
		system("pause");
		system("cls");
	printf("|||||------Match Starts------|||||\n%s vs %s, Enter their score!\n(score of team 1 (enter) score of team 2)\n",Dp1,Hp2);
	round4:
	do {
     if (!fgets(u, sizeof u, stdin)){

        break;}
     u[strlen(u) - 1] = 0;

     player1 = strtol(u, &end, 10);
} while (end != u + strlen(u));

do {
     if (!fgets(z, sizeof z, stdin)){

        break;}
     z[strlen(z) - 1] = 0;

     player2 = strtol(z, &end, 10);
} while (end != z+ strlen(z));
	if ( player1 > player2 ){
		printf("the winner of this round is %s!\n",Dp1);
		strcpy(D,Dp1);printf("%s shall advance to the next round!\n",D);
	}
	else if( player1 < player2 ){
		printf("the winner of this round is %s!\n",Hp2);
		strcpy(D,Hp2);printf("%s shall advance to the next round!\n",D);
	}
	else if(player1=player2){
		printf("ERROR. Inputs can't be similar. Please enter inputs with clear difference.\n");goto round4;}
	else{return 0;
	}
		system("pause");
		system("cls");
printf("|||||------Match Starts------|||||\n%s vs %s, Enter their score!\n(score of team 1 (enter) score of team 2)\n",Ep1,Ap2);
round5:
	do {
     if (!fgets(u, sizeof u, stdin)){

        break;}
     u[strlen(u) - 1] = 0;

     player1 = strtol(u, &end, 10);
} while (end != u + strlen(u));

do {
     if (!fgets(z, sizeof z, stdin)){

        break;}
     z[strlen(z) - 1] = 0;

     player2 = strtol(z, &end, 10);
} while (end != z+ strlen(z));
	if ( player1 > player2 ){
		printf("the winner of this round is %s!\n",Ep1);
		strcpy(E,Ep1);printf("%s shall advance to the next round!\n",E);
	}
	else if( player1 < player2 ){
		printf("the winner of this round is %s!\n",Ap2);
		strcpy(E,Ap2);printf("%s shall advance to the next round!\n",E);
	}
	else if(player1=player2){
		printf("ERROR. Inputs can't be similar. Please enter inputs with clear difference.\n");goto round5;}
	else{return 0;
	}
		system("pause");
		system("cls");
	printf("|||||------Match Starts------|||||\n%s vs %s, Enter their score!\n(score of team 1 (enter) score of team 2)\n",Fp1,Bp2);
	round6:
	do {
     if (!fgets(u, sizeof u, stdin)){

        break;}
     u[strlen(u) - 1] = 0;

     player1 = strtol(u, &end, 10);
} while (end != u + strlen(u));

do {
     if (!fgets(z, sizeof z, stdin)){

        break;}
     z[strlen(z) - 1] = 0;

     player2 = strtol(z, &end, 10);
} while (end != z+ strlen(z));
	if ( player1 > player2 ){
		printf("the winner of this round is %s!\n",Fp1);
		strcpy(F,Fp1);printf("%s shall advance to the next round!\n",F);
	}
	else if( player1 < player2 ){
		printf("the winner of this round is %s!\n",Bp2);
		strcpy(F,Bp2);printf("%s shall advance to the next round!\n",F);
	}
	else if(player1=player2){
		printf("ERROR. Inputs can't be similar. Please enter inputs with clear difference.\n");goto round6;}
	else{return 0;
	}
		system("pause");
		system("cls");
printf("|||||------Match Starts------|||||\n%s vs %s, Enter their score!\n(score of team 1 (enter) score of team 2)\n",Gp1,Cp2);
round7:
	do {
     if (!fgets(u, sizeof u, stdin)){

        break;}
     u[strlen(u) - 1] = 0;

     player1 = strtol(u, &end, 10);
} while (end != u + strlen(u));

do {
     if (!fgets(z, sizeof z, stdin)){

        break;}
     z[strlen(z) - 1] = 0;

     player2 = strtol(z, &end, 10);
} while (end != z+ strlen(z));
	if ( player1 > player2 ){
		printf("the winner of this round is %s!\n",Gp1);
		strcpy(G,Gp1);printf("%s shall advance to the next round!\n",G);
	}
	else if( player1 < player2 ){
		printf("the winner of this round is %s!\n",Cp2);
		strcpy(G,Cp2);printf("%s shall advance to the next round!\n",G);
	}
	else if(player1=player2){
		printf("ERROR. Inputs can't be similar. Please enter inputs with clear difference.\n");goto round7;}
	else{return 0;
	}
		system("pause");
		system("cls");
	printf("|||||------Match Starts------|||||\n%s vs %s, Enter their score!\n(score of team 1 (enter) score of team 2)\n",Hp1,Dp2);
	round8:
	do {
     if (!fgets(u, sizeof u, stdin)){

        break;}
     u[strlen(u) - 1] = 0;

     player1 = strtol(u, &end, 10);
} while (end != u + strlen(u));

do {
     if (!fgets(z, sizeof z, stdin)){

        break;}
     z[strlen(z) - 1] = 0;

     player2 = strtol(z, &end, 10);
} while (end != z+ strlen(z));
	if ( player1 > player2 ){
		printf("the winner of this round is %s!\n",Hp1);
		strcpy(H,Hp1);printf("%s shall advance to the next round!\n",H);
	}
	else if( player1 < player2 ){
		printf("the winner of this round is %s!\n",Dp2);
		strcpy(H,Dp2);printf("%s shall advance to the next round!\n",H);
	}
	else if(player1=player2){
		printf("ERROR. Inputs can't be similar. Please enter inputs with clear difference.\n");goto round8;}
	else{return 0;
	}
		system("pause");
		system("cls");
	printf("***********************************************************************************************\n");
	printf("||                                                                                           ||\n");
	printf("||                                  The secound round has begun!                             ||\n");
	printf("||                                    No more ties till the end                              ||\n");
	printf("||                                                                                           ||\n");
	printf("||                                                                                           ||\n");
	printf("||                                  Round 2 pairing:                                         ||\n");
	printf("||      1.      %s                        vs.       %s                                       ||\n",A,B);
	printf("||      2.      %s                        vs.       %s                                       ||\n",C,D);
	printf("||      3.      %s                        vs.       %s                                       ||\n",E,F);
	printf("||      4.      %s                        vs.       %s                                       ||\n",G,H);
	printf("||                                                                                           ||\n");
	printf("||                                                                                           ||\n");
	printf("||                                                                                           ||\n");
	printf("||                                                                                           ||\n");
	printf("||                          Score comparison will begin shortly                              ||\n");
	printf("||                                                                                           ||\n");
	printf("||                                                                                           ||\n");
	printf("***********************************************************************************************\n");
	system("pause");
	system("cls");
	//scoring order is 1-4
	printf("|||||------Match Starts------|||||\n%s vs %s, Enter their score!\n(score of team 1 (enter) score of team 2)\n",A,B);
	round9:

	do {
     if (!fgets(u, sizeof u, stdin)){

        break;}
     u[strlen(u) - 1] = 0;

     player1 = strtol(u, &end, 10);
} while (end != u + strlen(u));

do {
     if (!fgets(z, sizeof z, stdin)){

        break;}
     z[strlen(z) - 1] = 0;

     player2 = strtol(z, &end, 10);
} while (end != z+ strlen(z));
	if ( player1 > player2 ){
		printf("the winner of this round is %s!\n",A);
		strcpy(A,A);printf("%s shall advance to the next round!\n",A);
	}
	else if( player1 < player2 ){
		printf("the winner of this round is %s!\n",B);
		strcpy(A,B);printf("%s shall advance to the next round!\n",A);
	}
	else if(player1=player2){
		printf("ERROR. Inputs can't be similar. Please enter inputs with clear difference.\n");goto round9;}
	else{return 0;
	}
		system("pause");
		system("cls");
	printf("|||||------Match Starts------|||||\n%s vs %s, Enter their score!\n(score of team 1 (enter) score of team 2)\n",C,D);
	round10:
	do {
     if (!fgets(u, sizeof u, stdin)){

        break;}
     u[strlen(u) - 1] = 0;

     player1 = strtol(u, &end, 10);
} while (end != u + strlen(u));

do {
     if (!fgets(z, sizeof z, stdin)){

        break;}
     z[strlen(z) - 1] = 0;

     player2 = strtol(z, &end, 10);
} while (end != z+ strlen(z));
	if ( player1 > player2 ){
		printf("the winner of this round is %s!\n",C);
		strcpy(B,C);printf("%s shall advance to the next round!\n",B);
	}
	else if( player1 < player2 ){
		printf("the winner of this round is %s!\n",D);
		strcpy(B,D);printf("%s shall advance to the next round!\n",B);
	}
	else if(player1=player2){
		printf("ERROR. Inputs can't be similar. Please enter inputs with clear difference.\n");goto round10;}
	else{return 0;
	}
		system("pause");
		system("cls");
	printf("|||||------Match Starts------|||||\n%s vs %s, Enter their score!\n(score of team 1 (enter) score of team 2)\n",E,F);
	round11:
	do {
     if (!fgets(u, sizeof u, stdin)){

        break;}
     u[strlen(u) - 1] = 0;

     player1 = strtol(u, &end, 10);
} while (end != u + strlen(u));

do {
     if (!fgets(z, sizeof z, stdin)){

        break;}
     z[strlen(z) - 1] = 0;

     player2 = strtol(z, &end, 10);
} while (end != z+ strlen(z));
	if ( player1 > player2 ){
		printf("the winner of this round is %s!\n",E);
		strcpy(C,E);printf("%s shall advance to the next round!\n",C);
	}
	else if( player1 < player2 ){
		printf("the winner of this round is %s!\n",F);
		strcpy(C,F);printf("%s shall advance to the next round!\n",C);
	}
	else if(player1=player2){
		printf("ERROR. Inputs can't be similar. Please enter inputs with clear difference.\n");goto round11;}
	else{return 0;
	}
		system("pause");
		system("cls");
	printf("|||||------Match Starts------|||||\n%s vs %s, Enter their score!\n(score of team 1 (enter) score of team 2)\n",G,H);
	round12:
	do {
     if (!fgets(u, sizeof u, stdin)){

        break;}
     u[strlen(u) - 1] = 0;

     player1 = strtol(u, &end, 10);
} while (end != u + strlen(u));

do {
     if (!fgets(z, sizeof z, stdin)){

        break;}
     z[strlen(z) - 1] = 0;

     player2 = strtol(z, &end, 10);
} while (end != z+ strlen(z));
	if ( player1 > player2 ){
		printf("the winner of this round is %s!\n",G);
		strcpy(D,G);printf("%s shall advance to the next round!\n",D);
	}
	else if( player1 < player2 ){
		printf("the winner of this round is %s!\n",H);
		strcpy(D,H);printf("%s shall advance to the next round!\n",D);
	}
	else if(player1=player2){
		printf("ERROR. Inputs can't be similar. Please enter inputs with clear difference.\n");goto round12;}
	else{return 0;
	}
		system("pause");
		system("cls");
	printf("***********************************************************************************************\n");
	printf("||                                                                                           ||\n");
	printf("||                                  The semifinal has begun!                                 ||\n");
	printf("||                                   No more ties till the end                               ||\n");
	printf("||                                                                                           ||\n");
	printf("||                                                                                           ||\n");
	printf("||                                  Semifinal pairing:                                       ||\n");
	printf("||      1.      %s                        vs.       %s                                       ||\n",A,B);
	printf("||      2.      %s                        vs.       %s                                       ||\n",C,D);
	printf("||                                                                                           ||\n");
	printf("||                                                                                           ||\n");
	printf("||                          Score comparison will begin shortly                              ||\n");
	printf("||                                                                                           ||\n");
	printf("||                                                                                           ||\n");
	printf("***********************************************************************************************\n");
	system("pause");
	system("cls");
	//scoring order is 1-2
	printf("|||||------Match Starts------|||||\n%s vs %s, Enter their score!\n(score of team 1 (enter) score of team 2)\n",A,B);
	round13:

	do {
     if (!fgets(u, sizeof u, stdin)){

        break;}
     u[strlen(u) - 1] = 0;

     player1 = strtol(u, &end, 10);
} while (end != u + strlen(u));

do {
     if (!fgets(z, sizeof z, stdin)){

        break;}
     z[strlen(z) - 1] = 0;

     player2 = strtol(z, &end, 10);
} while (end != z+ strlen(z));
	if ( player1 > player2 ){
		printf("the winner of this round is %s!\n",A);
		strcpy(A,A);strcpy(G,B);printf("%s shall advance to the next round!\n",A);
	}
	else if( player1 < player2 ){
		printf("the winner of this round is %s!\n",B);
		strcpy(G,A);strcpy(A,B);printf("%s shall advance to the next round!\n",A);
	}
	else if(player1=player2){
		printf("ERROR. Inputs can't be similar. Please enter inputs with clear difference.\n");goto round13;}
	else{return 0;
	}
		system("pause");
		system("cls");
	printf("|||||------Match Starts------|||||\n%s vs %s, Enter their score!\n(score of team 1 (enter) score of team 2)\n",C,D);
	round14:
	do {
     if (!fgets(u, sizeof u, stdin)){

        break;}
     u[strlen(u) - 1] = 0;

     player1 = strtol(u, &end, 10);
} while (end != u + strlen(u));

do {
     if (!fgets(z, sizeof z, stdin)){

        break;}
     z[strlen(z) - 1] = 0;

     player2 = strtol(z, &end, 10);
} while (end != z+ strlen(z));
	if ( player1 > player2 ){
		printf("the winner of this round is %s!\n",C);
		strcpy(B,C);strcpy(H,D);printf("%s shall advance to the next round!\n",B);
	}
	else if( player1 < player2 ){
		printf("the winner of this round is %s!\n",D);
		strcpy(B,D);strcpy(H,C);printf("%s shall advance to the next round!\n",B);
	}
	else if(player1=player2){
		printf("ERROR. Inputs can't be similar. Please enter inputs with clear difference.\n");goto round14;}
	else{return 0;
	}
		system("pause");
		system("cls");
	printf("***********************************************************************************************\n");
	printf("||                                                                                           ||\n");
	printf("||          Before the Final, the match to decide the third place shall commence!            ||\n");
	printf("||                               Who shall win the third place?                              ||\n");
	printf("||                                                                                           ||\n");
	printf("||                                                                                           ||\n");
	printf("||                                 The competing teams:                                      ||\n");
	printf("||                                                                                           ||\n");
	printf("||                                                                                           ||\n");
	printf("||             %s                        vs.        %s                                       ||\n",G,H);
	printf("||                                                                                           ||\n");
	printf("||                                                                                           ||\n");
	printf("||                          Score comparison will begin shortly                              ||\n");
	printf("||                                                                                           ||\n");
	printf("||                                                                                           ||\n");
	printf("***********************************************************************************************\n");
	system("pause");
	system("cls");
	printf("|||||------Match Starts------|||||\n%s vs %s, Enter their score!\n(score of team 1 (enter) score of team 2)\n",G,H);
	round15:

	do {
     if (!fgets(u, sizeof u, stdin)){

        break;}
     u[strlen(u) - 1] = 0;

     player1 = strtol(u, &end, 10);
} while (end != u + strlen(u));

do {
     if (!fgets(z, sizeof z, stdin)){

        break;}
     z[strlen(z) - 1] = 0;

     player2 = strtol(z, &end, 10);
} while (end != z+ strlen(z));
	if ( player1 > player2 ){
		printf("the winner of this round is %s!\n",G);
		strcpy(C,G);
	}
	else if( player1 < player2 ){
		printf("the winner of this round is %s!\n",H);
		strcpy(C,H);
	}
	else if(player1=player2){
		printf("ERROR. Inputs can't be similar. Please enter inputs with clear difference.\n");goto round15;}
	else{return 0;
	}
	system("pause");
	system("cls");
	printf("***********************************************************************************************\n");
	printf("||                                                                                           ||\n");
	printf("||                                The final round has begun!                                 ||\n");
	printf("||                               Who shall win the first place?                              ||\n");
	printf("||                                                                                           ||\n");
	printf("||                                                                                           ||\n");
	printf("||                                  The battling teams:                                      ||\n");
	printf("||                                                                                           ||\n");
	printf("||                                                                                           ||\n");
	printf("||              %s                        vs.       %s                                       ||\n",A,B);
	printf("||                                                                                           ||\n");
	printf("||                                                                                           ||\n");
	printf("||                                                                                           ||\n");
	printf("||                          Score comparison will begin shortly                              ||\n");
	printf("||                                                                                           ||\n");
	printf("||                                                                                           ||\n");
	printf("***********************************************************************************************\n");
	system("pause");
	system("cls");
	printf("|||||------Match Starts------|||||\n%s vs %s, Enter their score!\n(score of team 1 (enter) score of team 2)\n",A,B);
	round16:

	do {
     if (!fgets(u, sizeof u, stdin)){

        break;}
     u[strlen(u) - 1] = 0;

     player1 = strtol(u, &end, 10);
} while (end != u + strlen(u));

do {
     if (!fgets(z, sizeof z, stdin)){

        break;}
     z[strlen(z) - 1] = 0;

     player2 = strtol(z, &end, 10);
} while (end != z+ strlen(z));
	if ( player1 > player2 ){
		printf("the winner of this round is %s!\n",A);
		strcpy(D,B);strcpy(A,A);
	}
	else if( player1 < player2 ){
		printf("the winner of this round is %s!\n",B);
		strcpy(D,A);strcpy(A,B);
	}
	else if(player1=player2){
		printf("ERROR. Inputs can't be similar. Please enter inputs with clear difference.\n");goto round16;}
	else{return 0;
	}
	exal:
	printf("***********************************************************************************************\n");
	printf("||                                                                                           ||\n");
	printf("||                               The Winners have been decided!                              ||\n");
	printf("||                                                                                           ||\n");
	printf("||                                                                                           ||\n");
	printf("||                                The first place goes to %s!                                ||\n",A);
	printf("||                                The second goes to %s	                                     ||\n",D);
	printf("||                                The third goes to %s                                       ||\n",C);
	printf("||                                                                                           ||\n");
	printf("||                                                                                           ||\n");
	printf("||      Would you like to return to the main menu, or close the program?                     ||\n");
	printf("||      Press (R) to return, or (C) to close the program                                     ||\n");
	printf("||                                                                                           ||\n");
	printf("||                                                                                           ||\n");
	printf("***********************************************************************************************\n");


	scanf("%c",&p);
	switch(p){
		case 'R':system("cls");printf("Returning to main menu.....\n");system("pause");return main();break;
		case 'C':system("cls");printf("Closing the program");return 0;break;
		default:printf("Please insert a proper input.");Sleep(500);system("cls");goto exal;break;
	}


	}
//help starts here

int help(){
		printf("|#|                         SIMULASI PERTANDINGAN WORLD CUP 2018                       |#|\n");
		printf("|#|________________________FAKULTAS TEKNIK UNIVERSITAS INDONESIA_______________________|#|\n");
		printf("|#|####################################################################################|#|\n");
		printf("|#| Purpose :   This program is designed to teach the user how a World Cup works       |#|\n");
		printf("|#|                                                                                    |#|\n");
		printf("|#|                                                                                    |#|\n");
		printf("|#|------------------------------------------------------------------------------------|#|\n");
		printf("|#|                                                                                    |#|\n");
		printf("|#| Direction: 1. This program only simulates one group elimination match.             |#|\n");
		printf("|#|            2. This program does not use any nation's name, only examples.          |#|\n");
        printf("|#|            3. When asked to input each team's scores, separate                     |#|\n");
        printf("|#|               their scores with (enter)                                            |#|\n");
        printf("|#|            4. Two winning teams will be chosen to enter the Knock Out Stage        |#|\n");
        printf("|#|               through compilations of if(s).                                       |#|\n");
        printf("|#|            5. During the World Cup Simulation, teams from other groups will already|#|\n");
        printf("|#|               be chosen, so the stage will resume to score comparison.             |#|\n");
		printf("|#|            6. During the Konck Out Stage, there is no equal in the score, so input |#|\n");
		printf("|#|               scores with clear difference.                                        |#|\n");
        printf("|#|            7. Repeat inputting scores for each team until the final of world cup.  |#|\n");
		printf("|#|------------------------------------------------------------------------------------|#|\n");
		printf("|#| Disclaimer: 1. This program is only designed to simulate how a World Cup runs.     |#|\n");
        printf("|#|                It does not simulate the entirety of it, however, simulating only   |#|\n");
		printf("|#|                Group A for group matching.                                         |#|\n");
		printf("|#|             2. This program is not perfect, as there were bugs that interfered     |#|\n");
        printf("|#|                with the coding, or the authors' lack of basic understanding of     |#|\n");
		printf("|#|                the C language.                                                     |#|\n");
		printf("|#|             3. If some parts of the program were found unused, those were the      |#|\n");
        printf("|#|                initial codes before the program got its final version.             |#|\n");
       	printf("|#|             4. No nation were used due to the fear of copyright infringement       |#|\n");
       	printf("|#|                                                                                    |#|\n");
		printf("|#| Press anything to return to main menu.                                             |#|\n");
		printf("|#|------------------------------------------------------------------------------------|#|\n");
		system("pause");
		system("cls");
		return main();
}
int credit(){
//credit starts here
        printf("|#|                         SIMULASI PERTANDINGAN WORLD CUP 2018                       |#|\n");
		printf("|#|________________________FAKULTAS TEKNIK UNIVERSITAS INDONESIA_______________________|#|\n");
		printf("|#|####################################################################################|#|\n");
		printf("|#| References : 1. A certain poster of 2018's World Cup                               |#|\n");
		printf("|#|              2. Presentations from class                                           |#|\n");
        printf("|#|              3. www.cplusplus.com, for research on strcpy() command.               |#|\n");
        printf("|#|              4. p2018.blogspot.co.id/, for a clear schematics on the World Cup     |#|\n");
        printf("|#|              5. tutorialpoint.com, for research on the goto command                |#|\n");
		printf("|#|------------------------------------------------------------------------------------|#|\n");
		printf("|#| Special thanks to: 1. Mr. Alfan, Mrs. Ratna, and Ms. Dhiyana for teaching us about |#|\n");
        printf("|#|                    C program.                                                      |#|\n");
		printf("|#|                    2. The lab assistants for giving us our tasks during practical  |#|\n");
		printf("|#|                    class.                                                          |#|\n");
        printf("|#|                    3. Our own parents for giving us birth.                         |#|\n");
		printf("|#|                    4. Allah as our god.                                            |#|\n");
		printf("|#|                    5. Our untrained brains                                         |#|\n");
		printf("|#| Press anything to return to main menu.                                             |#|\n");
		printf("|#|------------------------------------------------------------------------------------|#|\n");
		system("pause");
		system("cls");

		return main();
}
