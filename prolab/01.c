#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void delay(int number_of_seconds)
{
    int milli_seconds = 50 * number_of_seconds;
    //faster your delay by increasing number_of_seconds multiplier
    clock_t start_time = clock();
    while (clock() < start_time + milli_seconds);
}
//delay function

int growthmenus()
{
	char optionsub211;
	int optionsub21,t,A;
	printf("\n\nEnter 1 for 1 day");
	printf("\nEnter 2 for 2 days");
	printf("\nEnter 3 for 3 days");
	while(t=1)
	{
	printf("\nHow many days do you wanted? ");
	optionsub21 = getche();
	if(optionsub21=='1')
		{
			system("cls");
			printf("***********************\n");
			printf("\tDay 1\t\n");
			printf("***********************\n");
			printf("| Breakfast | Cereal with Fruit, 1 hard-cooked egg, 1 Cup fat-free chocolate milk.");
			printf("\n");
			printf("|   Lunch   | Green Salad with Honey Lemon Chicken, 1 slice whole-wheat bread, A cup of Water.");
			printf("\n");
			printf("|   Dinner  | Daily Supplement, 1 Cup fat-free milk.");
			printf("\n");
			while(A=1)
			{
				printf("\n");
				printf("\nPress E to Exit");
				printf("\nPress M to Return to Main Menu");
				printf("\nPress D to Return to Digital Personal Trainer");
				printf("\nWhat you like to do then? ");
				optionsub211 = getche();
				if (optionsub211=='E' || optionsub211=='e' )
				{
					keluar();
					break;
				}
				else if (optionsub211=='M' || optionsub211=='m')
				{
					main();
					break;
				}
				else if (optionsub211=='D' || optionsub211=='d')
				{
					startanew();
					break;
				}
				else
				{
					printf(" Wrong mode, Please Re-Enter the input");
					A=1;
				}
			}break;
		}
	//if respondent choose for 1 day
	else if(optionsub21=='2')
		{
		system("cls");
			printf("***********************\n");
			printf("\tDay 1\t\n");
			printf("***********************\n");
			printf("| Breakfast | Cereal with Fruit, 1 hard-cooked egg, 1 Cup fat-free chocolate milk.");
			printf("\n");
			printf("|   Lunch   | Green Salad with Honey Lemon Chicken, 1 slice whole-wheat bread, A cup of Water.");
			printf("\n");
			printf("|   Dinner  | Daily Supplement, 1 Cup fat-free milk.");
			printf("\n***********************\n");
			printf("\tDay 2\t\n");
			printf("***********************\n");
			printf("| Breakfast | Peanut Butter Raisin Oatmeal, 1 Cup Orange Juice.");
			printf("\n");
			printf("|   Lunch   | Tuna-Cucumber Wrap,1/4 cup lowfat vanilla yoghurt, 1 Cup fat-free milk.");
			printf("\n");
			printf("|   Dinner  | Daily Supplemen, A cup of water, coffee or tea.");
			printf("\n");
			while(A=1)
			{
				printf("\n");
				printf("\nPress E to Exit");
				printf("\nPress M to Return to Main Menu");
				printf("\nPress D to Return to Digital Personal Trainer");
				printf("\nWhat you like to do then? ");
				optionsub211 = getche();
				if (optionsub211=='E' || optionsub211=='e')
				{
					keluar();
					break;
				}
				else if (optionsub211=='M' || optionsub211=='m')
				{
					main();
					break;
				}
				else if (optionsub211=='D' || optionsub211=='d')
				{
					startanew();
					break;
				}
				else
				{
					printf(" Wrong mode, Please Re-Enter the input");
					A=1;
				}
			}
	 break;
	}
	//if respondent choose for 2 days
	else if(optionsub21='3')
		{
		system("cls");
		printf("***********************\n");
		printf("\tDay 1\t\n");
		printf("***********************\n");
		printf("| Breakfast | Cereal with Fruit, 1 hard-cooked egg, 1 Cup fat-free chocolate milk.");
		printf("\n");
		printf("|   Lunch   | Green Salad with Honey Lemon Chicken, 1 slice whole-wheat bread, A cup of Water.");
		printf("\n");
		printf("|   Dinner  | Daily Supplement, 1 Cup fat-free milk.");
		printf("\n***********************\n");
		printf("\tDay 2\t\n");
		printf("***********************\n");
		printf("| Breakfast | Peanut Butter Raisin Oatmeal, 1 Cup Orange Juice.");
		printf("\n");
		printf("|   Lunch   | Tuna-Cucumber Wrap,1/4 cup lowfat vanilla yoghurt, 1 Cup fat-free milk.");
		printf("\n");
		printf("|   Dinner  | Daily Supplement, A cup of water, coffee or tea.");
		printf("\n***********************\n");
		printf("\tDay 3\t\n");
		printf("***********************\n");
		printf("| Breakfast | Ripe Mango, Fried Hotdog, A cup of water, coffee or tea.");
		printf("\n");
		printf("|   Lunch   | Chopsuey, Chicken Adobo, Sweetened White Kidney.");
		printf("\n");
		printf("|   Dinner  | Daily Supplement, 1 Cup fat-free milk.\n");
			printf("\n");
			while(A=1)
			{
				printf("\n");
				printf("\nPress E to Exit");
				printf("\nPress M to Return to Main Menu");
				printf("\nPress D to Return to Digital Personal Trainer");
				printf("\nWhat you like to do then? ");
				optionsub211 = getche();
				if (optionsub211=='E' || optionsub211=='e')
				{
					keluar();
					break;
				}
				else if (optionsub211=='M' || optionsub211=='m')
				{
					main();
					break;
				}
				else if (optionsub211=='D' || optionsub211=='d')
				{
					startanew();
					break;
				}
				else
				{
					printf(" Wrong mode, Please Re-Enter the input");
					A=1;
				}
			}
	 break;
	}
	//if respondent choose for 3 days
	else
	{
			printf(" Wrong mode, Please Re-Enter the input");
			t=1;
	}
	//if respondent wrong input
	}

}
//menus for growth

int growthactivites()
{
	char optionsub222;
	int B,optionsub22,C;
	printf("\n\nEnter 1 for 1 day");
	printf("\nEnter 2 for 2 days");
	printf("\nEnter 3 for 3 days");
	while(B=1)
	{
printf("\nHow many days do you wanted? ");
optionsub22 = getche();
	if(optionsub22=='1')
	{
		system("cls");
		printf("***********************\n");
		printf("\tDay 1\t\n");
		printf("***********************\n");
		printf("|  Morning  | Walking/Cycling for 30 minutes/20 km.");
		printf("\n");
		printf("| Afternoon | Knee to Chest Stretch & Lying Quad Stretch each 5 minutes.");
		printf("\n");
		printf("|   Night   | Eyes Exercise 10 minutes.");
		printf("\n");
		while(C=1)
		{
			printf("\n");
			printf("\nPress E to Exit");
			printf("\nPress M to Return to Main Menu");
			printf("\nPress D to Return to Digital Personal Trainer");
			printf("\nWhat you like to do then? ");
			optionsub222 = getche();
			if (optionsub222=='E' || optionsub222=='e')
			{
				keluar();
				break;
			}
			else if (optionsub222=='M' || optionsub222=='m')
			{
				main();
				break;
			}
			else if (optionsub222=='D' || optionsub222=='d')
			{
				startanew();
				break;
			}
			else
			{
				printf(" Wrong mode, Please Re-Enter the input");
				C=1;
			}
		}break;
	}
	//if respondent choose for 1 day
	else if (optionsub22=='2')
	{
		system("cls");
		printf("***********************\n");
		printf("\tDay 1\t\n");
		printf("***********************\n");
		printf("|  Morning  | Walking/Cycling for 30 minutes/20 km.");
		printf("\n");
		printf("| Afternoon | Knee to Chest Stretch & Lying Quad Stretch each 5 minutes.");
		printf("\n");
		printf("|   Night   | Eyes Exercise 10 minutes.");
		printf("\n***********************\n");
		printf("\tDay 2\t\n");
		printf("***********************\n");
		printf("|  Morning  | Fast Walking for 30 minutes/20 km.");
		printf("\n");
		printf("| Afternoon | Push Up and Sit Up each 5 minutes.");
		printf("\n");
		printf("|   Night   | Eye Exercise for 10 minutes.");
		printf("\n");
		while(C=1)
		{
			printf("\n");
			printf("\nPress E to Exit");
			printf("\nPress M to Return to Main Menu");
			printf("\nPress D to Return to Digital Personal Trainer");
			printf("\nWhat you like to do then? ");
			optionsub222 = getche();
			if (optionsub222=='E' || optionsub222=='e')
			{
				keluar();
				break;
			}
			else if (optionsub222=='M' || optionsub222=='m')
			{
				main();
				break;
			}
			else if (optionsub222=='D' || optionsub222=='d')
			{
				startanew();
				break;
			}
			else
			{
				printf(" Wrong mode, Please Re-Enter the input");
				C=1;
			}
		}break;
	}
	//if respondent choose for 2 day
	else if (optionsub22=='3')
	{
		system("cls");
		printf("***********************\n");
		printf("\tDay 1\t\n");
		printf("***********************\n");
		printf("|  Morning  | Walking/Cycling for 30 minutes/20 km.");
		printf("\n");
		printf("| Afternoon | Knee to Chest Stretch & Lying Quad Stretch each 5 minutes.");
		printf("\n");
		printf("|   Night   | Eyes Exercise 10 minutes.");
		printf("\n***********************\n");
		printf("\tDay 2\t\n");
		printf("***********************\n");
		printf("|  Morning  | Fast Walking for 30 minutes/20 km.");
		printf("\n");
		printf("| Afternoon | Push Up and Sit Up each 5 minutes.");
		printf("\n");
		printf("|   Night   | Eye Exercise for 10 minutes.");
		printf("\n***********************\n");
		printf("\tDay 3\t\n");
		printf("***********************\n");
		printf("|  Morning  | Running for 45 minutes/10 km.");
		printf("\n");
		printf("| Afternoon | Pull up and Squat each 5 minutes.");
		printf("\n");
		printf("|   Night   | Eye Exercise for 10 minutes");
		printf("\n");
		while(C=1)
		{
			printf("\n");
			printf("\nPress E to Exit");
			printf("\nPress M to Return to Main Menu");
			printf("\nPress D to Return to Digital Personal Trainer");
			printf("\nWhat you like to do then? ");
			optionsub222 = getche();
			if (optionsub222=='E' || optionsub222=='e')
			{
				keluar();
				break;
			}
			else if (optionsub222=='M' || optionsub222=='m')
			{
				main();
				break;
			}
			else if (optionsub222=='D' || optionsub222=='D')
			{
				startanew();
				break;
			}
			else
			{
				printf(" Wrong mode, Please Re-Enter the input");
				C=1;
			}
		}break;
	}
	//if respondent choose for 3 day
	else
	{
		printf(" Wrong mode, Please Re-Enter the input");
		B=1;
}
	//if respondent wrong input
	}
}
//activities for growth

int adultmenus()
{
	char optionsub211;
	int optionsub21,t,A;
	printf("\n\nEnter 1 for 1 day");
	printf("\nEnter 2 for 2 day");
	printf("\nEnter 3 for 3 day");
	while(t=1)
	{
	printf("\nHow many days do you wanted? ");
	optionsub21 = getche();
	if(optionsub21=='1')
	{
			system("cls");
			printf("***********************\n");
			printf("\tDay 1\t\n");
			printf("***********************\n");
			printf("| Breakfast | Oat Cereal and Milk.");
			printf("\n");
			printf("|   Lunch   | Any Fruits for appetizer, Sandwich or Potato Wedges.");
			printf("\n");
			printf("|   Dinner  | Baked Salmon, Quinoa with almonds, A cup of fat free milk.");
			printf("\n");
			while(A=1)
			{
				printf("\n");
				printf("\nPress E to Exit");
				printf("\nPress M to Return to Main Menu");
				printf("\nPress D to Return to Digital Personal Trainer");
				printf("\nWhat you like to do then? ");
				optionsub211 = getche();
				if (optionsub211=='E' || optionsub211=='e')
				{
					keluar();
					break;
				}
				else if (optionsub211=='M' || optionsub211=='m')
				{
					main();
					break;
				}
				else if (optionsub211=='D' || optionsub211=='d')
				{
					startanew();
					break;
				}
				else
				{
					printf(" Wrong mode, Please Re-Enter the input");
					A=1;
				}
			}break;
		}
	//if respondent choose for 1 day
	else if(optionsub21=='2')
	{
		system("cls");
			printf("***********************\n");
			printf("\tDay 1\t\n");
			printf("***********************\n");
			printf("| Breakfast | Oat Cereal and Milk.");
			printf("\n");
			printf("|   Lunch   | Any Fruits for appetizer, Sandwich or Potato Wedges.");
			printf("\n");
			printf("|   Dinner  | Baked Salmon, Quinoa with almonds, A cup of fat free milk.");
			printf("\n***********************\n");
			printf("\tDay 2\t\n");
			printf("***********************\n");
			printf("| Breakfast | Wheat French toast, grapefruit, A cup of fat-free milk.");
			printf("\n");
			printf("|   Lunch   | 3-bean vegetarian chili on baked potato, cantaloupe, 1 cup water, coffe or tea.");
			printf("\n");
			printf("|   Dinner  | Hawaiian pizza, Green Salad, A cup of fat free milk.");
			printf("\n");
			while(A=1)
			{
				printf("\n");
				printf("\nPress E to Exit");
				printf("\nPress M to Return to Main Menu");
				printf("\nPress D to Return to Digital Personal Trainer");
				printf("\nWhat you like to do then? ");
				optionsub211 = getche();
				if (optionsub211=='E' || optionsub211=='e')
				{
					keluar();
					break;
				}
				else if (optionsub211=='M' || optionsub211=='m')
				{
					main();
					break;
				}
				else if (optionsub211=='D' || optionsub211=='d')
				{
					startanew();
					break;
				}
				else
				{
					printf(" Wrong mode, Please Re-Enter the input");
					A=1;
				}
			}
	 break;
	}
	//if respondent choose for 2 days
	else if(optionsub21='3')
	{
		system("cls");
			printf("***********************\n");
			printf("\tDay 1\t\n");
			printf("***********************\n");
			printf("| Breakfast | Oat Cereal and Milk.");
			printf("\n");
			printf("|   Lunch   | Any Fruits for appetizer, Sandwich or Potato Wedges.");
			printf("\n");
			printf("|   Dinner  | Baked Salmon, Quinoa with almonds, A cup of fat free milk.");
			printf("\n***********************\n");
			printf("\tDay 2\t\n");
			printf("***********************\n");
			printf("| Breakfast | Wheat French toast, grapefruit, A cup of fat-free milk.");
			printf("\n");
			printf("|   Lunch   | 3-bean vegetarian chili on baked potato, cantaloupe, 1 cup water, coffe or tea.");
			printf("\n");
			printf("|   Dinner  | Hawaiian pizza, Green Salad, A cup of fat free milk.");
			printf("\n***********************\n");
			printf("\tDay 3\t\n");
			printf("***********************\n");
			printf("| Breakfast | Burrito, Grapefruit, A cup of water, coffe or tea");
			printf("\n");
			printf("|   Lunch   | Tuna Salad Sandwich, Medium Peach.");
			printf("\n");
			printf("|   Dinner  | Roasted Chicken, Roasted sweet Potato, Wheat roll, A  cup of water.");
			printf("\n");
			while(A=1)
			{
				printf("\n");
				printf("\nPress E to Exit");
				printf("\nPress M to Return to Main Menu");
				printf("\nPress D to Return to Digital Personal Trainer");
				printf("\nWhat you like to do then? ");
				optionsub211 = getche();
				if (optionsub211=='E' || optionsub211=='e')
				{
					keluar();
					break;
				}
				else if (optionsub211=='M' || optionsub211=='m')
				{
					main();
					break;
				}
				else if (optionsub211=='D' || optionsub211=='d')
				{
					startanew();
					break;
				}
				else
				{
					printf(" Wrong mode, Please Re-Enter the input");
					A=1;
				}
			}
	 break;
	}
	//if respondent choose for 3 days
	else
	{
			printf(" Wrong mode, Please Re-Enter the input");
			t=1;
	}
	//if respondent wrong input
	}

}
//menus for adult

int adultactivites()
{
	char optionsub222;
	int B,optionsub22,C;
	printf("\n\nEnter 1 for 1 day");
	printf("\nEnter 2 for 2 day");
	printf("\nEnter 3 for 3 day");
	while(B=1)
	{
	printf("\nHow many days do you wanted? ");
	optionsub22 = getche();
	if(optionsub22=='1')
	{
		system("cls");
		printf("***********************\n");
		printf("\tDay 1\t\n");
		printf("***********************\n");
		printf("|  Morning  | Walking for 10 minutes/2 km.");
		printf("\n");
		printf("| Afternoon | Butterfly Stretch & Arms Wide each 5 minutes.");
		printf("\n");
		printf("|   Night   | Eyes Exercise 5 minutes.");
		printf("\n");
		while(C=1)
		{
			printf("\n");
			printf("\nPress E to Exit");
			printf("\nPress M to Return to Main Menu");
			printf("\nPress D to Return to Digital Personal Trainer");
			printf("\nWhat you like to do then? ");
			optionsub222 = getche();
			if (optionsub222=='E' || optionsub222=='e')
			{
				keluar();
				break;
			}
			else if (optionsub222=='M' || optionsub222=='m')
			{
				main();
				break;
			}
			else if (optionsub222=='D' || optionsub222=='d')
			{
				startanew();
				break;
			}
			else
			{
				printf(" Wrong mode, Please Re-Enter the input");
				C=1;
			}
		}break;
	}
	//if respondent choose for 1 day
	else if (optionsub22=='2')
	{
		system("cls");
		printf("***********************\n");
		printf("\tDay 1\t\n");
		printf("***********************\n");
		printf("|  Morning  | Walking for 10 minutes/2 km.");
		printf("\n");
		printf("| Afternoon | Butterfly Stretch & Arms Wide each 5 minutes.");
		printf("\n");
		printf("|   Night   | Eyes Exercise for 5 minutes.");
		printf("\n***********************\n");
		printf("\tDay 2\t\n");
		printf("***********************\n");
		printf("|  Morning  | Walking for 10 minutes/2 km.");
		printf("\n");
		printf("| Afternoon | Child's Pose & Hamstring Stretch each 5 minutes.");
		printf("\n");
		printf("|   Night   | Eye Exercise for 5 minutes.");
		printf("\n");
		while(C=1)
		{
			printf("\n");
			printf("\nPress E to Exit");
			printf("\nPress M to Return to Main Menu");
			printf("\nPress D to Return to Digital Personal Trainer");
			printf("\nWhat you like to do then? ");
			optionsub222 = getche();
			if (optionsub222=='E' || optionsub222=='e')
			{
				keluar();
				break;
			}
			else if (optionsub222=='M' || optionsub222=='m' )
			{
				main();
				break;
			}
			else if (optionsub222=='D' || optionsub222=='d')
			{
				startanew();
				break;
			}
			else
			{
				printf(" Wrong mode, Please Re-Enter the input");
				C=1;
			}
		}break;
	}
	//if respondent choose for 2 days
	else if (optionsub22=='3')
	{
		system("cls");
		printf("***********************\n");
		printf("\tDay 1\t\n");
		printf("***********************\n");
		printf("|  Morning  | Walking for 10 minutes/2 km.");
		printf("\n");
		printf("| Afternoon | Butterfly Stretch & Arms Wide each 5 minutes.");
		printf("\n");
		printf("|   Night   | Eyes Exercise for 5 minutes.");
		printf("\n***********************\n");
		printf("\tDay 2\t\n");
		printf("***********************\n");
		printf("|  Morning  | Walking for 10 minutes/2 km.");
		printf("\n");
		printf("| Afternoon | Child's Pose & Hamstring Stretch each 5 minutes.");
		printf("\n");
		printf("|   Night   | Eye Exercise for 5 minutes.");
		printf("\n***********************\n");
		printf("\tDay 3\t\n");
		printf("***********************\n");
		printf("|  Morning  | Fast walk for 10 minutes/5 km.");
		printf("\n");
		printf("| Afternoon | Piriformis Stretch & Figure Four Stretch each 5 minutes.");
		printf("\n");
		printf("|   Night   | Eye Exercise for 5 minutes");
		printf("\n");
		while(C=1)
		{
			printf("\n");
			printf("\nPress E to Exit");
			printf("\nPress M to Return to Main Menu");
			printf("\nPress D to Return to Digital Personal Trainer");
			printf("\nWhat you like to do then? ");
			optionsub222 = getche();
			if (optionsub222=='E' || optionsub222=='e')
			{
				keluar();
				break;
			}
			else if (optionsub222=='M' || optionsub222=='m')
			{
				main();
				break;
			}
			else if (optionsub222=='D' || optionsub222=='d')
			{
				startanew();
				break;
			}
			else
			{
				printf(" Wrong mode, Please Re-Enter the input");
				C=1;
			}
		}break;
	}
	//if respondent choose for 3 days
	else
	{
		printf(" Wrong mode, Please Re-Enter the input");
		B=1;
}
	//if respondent wrong input
	}
}
//activities for adult

int keluar()
{
	system("cls");
	int p;
	for(p=0;p<33;p++)
	{
		printf("*");
		delay(1);
	}
	//animation
	printf("\a\nThank you for using this program\n");
	for(p=0;p<33;p++)
	{
		printf("*");
		delay(1);
	}
	//animation
	exit(EXIT_SUCCESS);
}
//exit function

void help()
{
	int n,x;
	char optionsub1;
	//declaration variable
	system("cls");
	for(n=0;n<20;n++)
	{
		printf("=");
		delay(1);
	}
	//animation
	printf("\n|\tHELP\t   |\n");
	for(n=0;n<20;n++)
	{
		printf("=");
		delay(1);
	}
	//animation
	//title
	printf("\n- If you never use this program choose 1");
	printf("\n\tFirst this program will asking for your personal information.");
	printf("\n\tThen this program will save you BMI Value and your Health Risk also Daily menus recommendation.");
	printf("\n- If you already use this program before and wanted to track your progress choose 2");
	printf("\n\tThis program will track your Progress");
	printf("\n\t1. Enter your BMI Point Before");
	printf("\n\t2. Enter your Height after");
	printf("\n\t3. Enter your Weight after");
	printf("\n\tThen computing your BMI Progress.");
	printf("\n- Input Format :");
	printf("\n\t1. Example : Enter your Height after (in Meter)= 1.75");
	printf("\n\t2. Example : Enter your Weight after (in Kilogram): 75");
	printf("\n\t3. Example : Enter your BMI before : 20.1");
	printf("\n\t4. Example : Enter your Age before : 18");
	printf("\n\nIf program going to Error try to go to Main Menu then Press R or relaunch the program or Relaunch the program by Given Source Codes.");
	//description
	while(x=1)//exit function
	{
		printf("\n Do you want to continue? (y/n) ");
		optionsub1 = getche();
		if(optionsub1=='y'|| optionsub1=='Y')
		{
			main();
		}
		else if (optionsub1=='n' || optionsub1=='N')
		{
			keluar();
		}
		else
		{
			printf("\nWrong input, Please re-enter the input");
			x = 1;
		}
	}
	//option if you want to continue
}
//help function

int Advices()
{
	int d,e,option2,r,optionsub21,u,f;
	char gender,age;
	while(u=1)
	{
	system("cls");
		for(d=0;d<34;d++)
		{
			printf("+");
			delay(1);
		}
		//animation
		printf("\n| 	Life Style Trainer	 |\n");
		printf("| 		v2.0		 |\n");
		for(d=0;d<34;d++)
		{
			printf("+");
			delay(1);
		}
		//animation
		printf("\nHello! in this section i will guide you into Healthy Lifestyle.");
		delay(10);
		printf("\nBut first, let me know more about you.");
		delay(10);
		while (f=1)
		{
			printf("\nWhat is your gender ? \nEnter M for male or F for Female ");
			gender = getche();
			printf("\nHow old are you? ");
			scanf("%d",&age);
			printf("Processing\n");
				for(e=0;e<26;e++)
				{
					printf(".");
					delay(1);
				}
			printf("\n");
			//animation
			if(gender=='m'||gender=='M')
			{
				if(age>=25)
				{
				system("cls");
				printf("Here are our recommendation option for your healthier Lifestyle");
				printf("\n1. Healthy daily menus");
				printf("\n2. Recommended activites");
				printf("\nPress 3 to Return to Main Menu");
				printf("\nPress 4 to Return to Digital Personal Trainer");
				printf("\nPress 9 to Exit the Program");
					while (r=1)
					{
						printf("\nWhat do you want to do? ");
						optionsub21 = getche();
						if(optionsub21=='1')
						{
							adultmenus();
						}
						//if respondent choose the healthy daily menus
						else if(optionsub21=='2')
						{
							adultactivites();
						}
						//if respondent choose the Recommended activities
						else if(optionsub21=='3')
						{
							main();
							break;
						}
						//if respondent want to go back to main menu
						else if(optionsub21=='4')
						{
							startanew();
							break;
						}
						//if respondent want to go back to Digital personal Trainer
						else if(optionsub21=='9')
						{
							keluar();
							break;
						}
						//if respondent want to exit the programs
						else
						{
							printf(" Wrong mode, Please Re-Enter the input");
							r=1;
						}
						//if respondent entered the wrong input
					}
				}
				//if datas gender age more than equal to 25 (adult)
				if (age<25)
				{
				system("cls");
				printf("Here are our recommendation option for your healthier Lifestyle");
				printf("\n1. Healthy daily menus");
				printf("\n2. Recommended activites");
				printf("\nPress 3 to Return to Main Menu");
				printf("\nPress 4 to Return to Digital Personal Trainer");
				printf("\nPress 9 to Exit the Program");
					while (r=1)
					{
						printf("\nWhat do you want to do? ");
						optionsub21 = getche();
						if(optionsub21=='1')
						{
							growthmenus();
						}
						//if respondent choose the healthy daily menus
						else if(optionsub21=='2')
						{
							growthactivites();
						}
						//if respondent choose the Recommended activities
						else if(optionsub21=='3')
						{
							main();
							break;
						}
						//if respondent want to go back to main menu
						else if(optionsub21=='4')
						{
							startanew();
							break;
						}
						//if respondent want to go back to Digital personal Trainer
						else if(optionsub21=='9')
						{
							keluar();
							break;
						}
						//if respondent want to exit the programs
						else
						{
							printf(" Wrong mode, Please Re-Enter the input");
							r=1;
						}
						//if respondent entered the wrong input
					}
				}
				//if datas gender age less than 25 (Growth Periode)

			}
			//if datas gender is Male
			else if(gender=='f'||gender=='F')
			{
				if(age>=25)
				{
				system("cls");
				printf("Here are our recommendation option for your healthier Lifestyle");
				printf("\n1. Healthy daily menus");
				printf("\n2. Recommended activites");
				printf("\nPress 3 to Return to Main Menu");
				printf("\nPress 4 to Return to Digital Personal Trainer");
				printf("\nPress 9 to Exit the Program");
					while (r=1)
					{
						printf("\nWhat do you want to do? ");
						optionsub21 = getche();
						if(optionsub21=='1')
						{
							adultmenus();
						}
						//if respondent choose the healthy daily menus
						else if(optionsub21=='2')
						{
							adultactivites();
						}
						//if respondent choose the Recommended activities
						else if(optionsub21=='3')
						{
							main();
							break;
						}
						//if respondent want to go back to main menu
						else if(optionsub21=='4')
						{
							startanew();
							break;
						}
						//if respondent want to go back to Digital personal Trainer
						else if(optionsub21=='9')
						{
							keluar();
							break;
						}
						//if respondent want to exit the programs
						else
						{
							printf(" Wrong mode, Please Re-Enter the input");
							r=1;
						}
						//if respondent entered the wrong input
					}
				}
				//if datas gender age more than equal to 25 (adult)
				if (age<25)
				{
				system("cls");
				printf("Here are our recommendation option for your healthier Lifestyle");
				printf("\n1. Healthy daily menus");
				printf("\n2. Recommended activites");
				printf("\nPress 3 to Return to Main Menu");
				printf("\nPress 4 to Return to Digital Personal Trainer");
				printf("\nPress 9 to Exit the Program");
					while (r=1)
					{
						printf("\nWhat do you want to do? ");
						optionsub21 = getche();
						if(optionsub21=='1')
						{
							growthmenus();
						}
						//if respondent choose the healthy daily menus
						else if(optionsub21=='2')
						{
							growthactivites();
						}
						//if respondent choose the Recommended activities
						else if(optionsub21=='3')
						{
							main();
							break;
						}
						//if respondent want to go back to main menu
						else if(optionsub21=='4')
						{
							startanew();
							break;
						}
						//if respondent want to go back to Digital personal Trainer
						else if(optionsub21=='9')
						{
							keluar();
							break;
						}
						//if respondent want to exit the programs
						else
						{
							printf(" Wrong mode, Please Re-Enter the input");
							r=1;
						}
						//if respondent entered the wrong input
					}
				}
				//if datas gender age less than 25 (Growth Periode)

			}
			//if datas gender is female
			else
			{
				printf("Wrong input, Please re-enter the input");
				f=1;
			}
			//if user input wrong datas
		}
	}
}
//advices function

int startanew()
{
	char name[100],advices,p,back2;
	int c,d,o;
	float h,w,BMI;
	system("cls");
	for(c=0;c<49;c++)
	{
		printf("+");
		delay(1);
	}
	//animation
	printf("\n|	Welcome to Digital Personal Trainer	|\n");
	printf("|			v2.0			|\n");
	for(c=0;c<49;c++)
	{
		printf("+");
		delay(1);
	}
	//animation
	printf("\n");
	printf("\nHey, i'm WolfDroid. I'm your Digital Personal Trainer.\n");
	delay(10);
	printf("I will help you to make your body healthier than before.\n");
	delay(10);
	do//exit function
	{
		printf("\nFirst what is your nickname? ");
		scanf("%s",&name);
		printf("How tall are you (in Meter)? ");
		scanf("%f",&h);
		printf("How much your weight(in Kilogram)? ");
		scanf("%f",&w);
		BMI = w / (h*h);
		printf("\nNow wait a minute, i will computing your BMI Ratio\n");
		for(c=0;c<51;c++)
		{
			printf(".");
			delay(1);
		}
		printf("\n\aYour BMI Ratio : %f ",BMI);
		system("cls");
		if(BMI >= 30)
		{
			printf("***********************************");
			printf("\n| Oh no %s your body is Obese!!! |\a",name);
			printf("\n***********************************");
			printf("\n\nPossible health risk u might get");
			printf("\n-Gout");
			printf("\n-Diabetes");
			printf("\n-Heart disease");
			printf("\n-High blood pressure");
			break;
		}
		else if(25 <= BMI && BMI <=29.9)
		{
			printf("***************************************");
			printf("\n| Oh no %s, your body is Overweight |\a",name);
			printf("\n***************************************");
			printf("\n\nPossible health risk u might get");
			printf("\n-Sleep apnea");
			printf("\n-Kidney disease");
			printf("\n-Type 2 diabetes");
			printf("\n-High blood pressure");
			break;
		}
		else if(18.5 <= BMI && BMI<= 24.99)
		{
			printf("******************************************");
			printf("\n| Yay! %s, your body is at Normal Ratio |\a",name);
			printf("\n******************************************");
			printf("\n\nKeep it up so you will be always healthy!!");
			break;
		}
		else if(18.5 > BMI)
		{
			printf("*****************************************");
			printf("\n| Oh no %s, your body is Under Weight! |\a",name);
			printf("\n*****************************************");
			printf("\n\nPossible health risk u might get");
			printf("\n-Decreased in immune function");
			printf("\n-Osteoporosis");
			printf("\n-Infertility");
			printf("\n-Developmental delays");

			break;
		}
		else
		{
			d = 1;
			printf("\nWrong input, Please re-enter the input");
		}
	}while(d=1);
	//BMI Categorization
	printf("\n");
	printf("\n");
	do//exit function
	{
	printf("Do you want us to giving some advices to make you healthier? (y/n)? ");
	advices = getche();
		if (advices == 'y' || advices == 'Y')
		{
			Advices();
			break;
		}
		else if (advices =='n' || advices =='N')
		{
			do{
					printf("\nPress M/m to go to main menu, Press E/e to Exit the program ");
					back2 = getche();
					if (back2 == 'M' || back2 == 'm')
					{
						main();
						break;
					}
					else if (back2 == 'E' || back2 == 'e')
					{
						return keluar();
						break;
					}
					else
					{
						printf("\nWrong input, please re-input again");
						p=1;
						break;
					}
				}while(p=1);
		}
		else
		{
			printf("\nWrong input, please re-input again\n");
			o=1;
		}
	}while(o=1);
}

//start a new function

void startexisting()
{
	int a,x,y,z;
	char back1,optionminorsub;
	float BMI1, height1, weight1,BMIafter,Difference,Difference1,Differencesub1,Differencesub;
	//declaration var
	system("cls");
	for(a=0;a<41;a++)
	{
		printf("*");
		delay(1);
	}
	//animation
	printf("\n|\tPERSONAL PROGRESS TRACKER\t|");
	printf("\n");
	for(a=0;a<41;a++)
	{
		printf("*");
		delay(1);
	}
	//animation
	do
	{
		printf("\n");
		printf("Enter your BMI before : ");
		scanf("%f",&BMI1);
		printf("Enter your Height after (in Meter): ");
		scanf("%f",&height1);
		printf("Enter your Weight after (in Kilogram): ");
		scanf("%f",&weight1);
		BMIafter = weight1/ (height1 * height1);
		printf("\nYour BMI now %f",BMIafter);
		if (BMIafter<18.5)
		{
			Differencesub = BMIafter - BMI1;
			printf("\n===============================");
			printf("\nYou've lost %f ratio", Differencesub);
			printf("\n===============================");
			Difference = 18.5 - BMIafter;
			printf("\n===============================");
			printf("\nYou need to increase %f for the Normal Ratio", Difference);
			printf("\n===============================");
			break;
		}
		else if (BMIafter > 24.9)
		{
			Differencesub1 = BMI1 - BMIafter;
			printf("\n===============================");
			printf("\nYou've gained %f ratio", Differencesub1);
			printf("\n===============================");
			Difference1 = BMIafter - 24.9;
			printf("\n================================");
			printf("\nYou need to decrease %f for the Normal Ratio", Difference1);
			printf("\n================================");
			break;
		}
		else if (BMIafter >= 18.5 && BMIafter <= 24.9)
		{
			printf("\n==================================================================");
			printf("\n%f is your BMI now. You're at normal ratio, Keep it up !!!'", BMIafter);
			printf("\n==================================================================");
			break;
		}
		else
		{
			printf("Wrong input, please re-input again");
			x=1;
		}
	}while(x=1);
	//do while for BMI computation 2
	do
	{
		printf("\nDo you want to continue(y/n)? ");
		optionminorsub = getche();
		if (optionminorsub == 'y' || optionminorsub == 'Y')
		{
			do{
				printf("\nPress M to go to main menu, Press R to compute BMI Progress again ");
				back1 = getche();
				if (back1 == 'M' || back1 == 'm')
				{
					main();
					break;
				}
				else if (back1 == 'R' || back1 == 'r')
				{
					return startexisting();
				}
				else
				{
					printf("\nWrong input, please re-input again");
					y=1;
					break;
				}
			}while(y=1);
		}
		else if (optionminorsub == 'n' || optionminorsub == 'N')
		{
			keluar();
		}
		else
		{
			printf("\nWrong input, please re-input again");
			z=1;
		}
	}while(z=1);
	//option if you wish to continue
}
//start a existing function

main()
{
	int i,b;
	char option1;
	//declaration var
	system("cls");
	system("COLOR 2E");
	for(i=0;i<49;i++)
	{
		printf("*");
		delay(1);
	}//animation
		printf("\n|\t\tMEDICARE Program\t\t|");
		printf("\n|\t\t\tv2.0\t\t\t|");
		printf("\n");
	for(i=0;i<49;i++)
	{
		printf("*");
		delay(1);
	}//animation
	//Title
	printf("\n");
	printf("\n");
	printf("OPTION\n");
	printf("1. Start a New Set\n");
	printf("2. Track your progress\n");
	printf("3. Help\n");
	printf("Press R to Refresh Program\n");
	printf("Enter e to Exit\n");
	//description
	do
	{
		printf("\nEnter your mode ");
		option1 = getche();
		if(option1=='1')
		{
			startanew();
			break;
		}
		else if(option1=='2')
		{
			startexisting();
			break;
		}
		else if(option1=='3')
		{
			help();
			break;
		}
		else if (option1=='E' || option1=='e')
		{
			keluar();
			break;
		}
		else if (option1=='R' || option1=='r')
		{
			return main();
		}
		else
		{
			b = 1;
			printf("\nWrong input, Please re-enter the input");
		}
	}while(b=1);
	//mode option
}
//main function
