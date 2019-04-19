/*
	Change logs :
	v1.0 :	- define fungsi dasar
			- switch untuk setiap fungsi
	v2.0 :	- membuat code untuk setiap fungsi
			- masukkan konsep user friendly
			- tambah data selain nama dan nomor(address)
	v2.1 :  - ganti warna font dan background
			- tambah comment untuk setiap line code
	v2.2 : 	- bug fixed (1)
	v3.0 :	- delete_contact() diperbaharui(no data and success)
			- tambah fungsi delete_all()
			- tambah data(email, website, socmed)
			- keep header untuk setiap eksekusi fungsi
			- tambah fungsi printd()
			- tambah pilihan Y/N untuk fungsi delete all
	v3.1 :  - tambah atribut data (email, home num)
	v3.2 :  - tambah firstname lastname
			- search bisa cari lastname juga
	v3.4 :  - delete harus input first dan last name
			- delete harus memakai konfrimasi
			- bug fixed(2)
			- help section(undone)
	v4.0 : 	- membuat help section
			- bugs fixed

	Bugs :
	(1) Search menampilkan data not found sejumlah data phonebook (fixed)
	(2) fungsi delete all masih menunjukkan Delete Success sementara file sudah kosong (fixed)
*/

//=====================================================================================// includes
#include <stdio.h> 											//header i/o
#include <windows.h> 										//header system(cls), getch(), etc

//=====================================================================================// prototype setiap fungsi
void header();
void header_help();
void header_menu();
void add_contact();
void search_contact();
void delete_contact();
void delete_all();
void view_all_contact();
void help();
void help_add_contact();
void help_search_contact();
void help_delete_contact();
void help_delete_all();
void help_view_all_contact();
void printd(char* x, int y);

//=====================================================================================// main
int main()
{
	system("COLOR 0A");
	Sleep(50);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("                                         ");
	printd("WELCOME TO DIGITAL PHONEBOOK v4.0",30);
	Sleep(1000);
	printf("\n\n\t\t\t\t\t ");
    system("pause");
	menu();

}

//=====================================================================================// void header
void header()
{
	printf("\t\t\t================================================================\n");
    printf("\t\t\t||                                                            ||\n");
    printf("\t\t\t||                                                            ||\n");
    printf("\t\t\t||                     DIGITAL PHONE BOOK                     ||\n");
    printf("\t\t\t||                                                            ||\n");
    printf("\t\t\t||                                                        v4.0||\n");
    printf("\t\t\t================================================================\n\n");
}

//=====================================================================================// void header_help
void header_menu()
{
	printf("\t\t\t\t      =================================\n");
    printf("\t\t\t\t      |           Main Menu           |\n");
    printf("\t\t\t\t      =================================\n\n");
}

//=====================================================================================// void header_help
void header_help()
{
	printf("\t\t\t\t================================\n");
    printf("\t\t\t\t|         Help Section         |\n");
    printf("\t\t\t\t================================\n\n");
}

//=====================================================================================// menu
int menu()
{
    system("cls");											//clear screen setiap pemanggilan fungsi menu
    header();												//memanggil fungsi header
	header_menu();											//memanggil fungsi header menu
    printf("\t\t\t\t\t==============================\n");
    printf("\t\t\t\t\t| 1. Add Contact             |\n");
    printf("\t\t\t\t\t| 2. Search Contact          |\n");
    printf("\t\t\t\t\t| 3. Delete Contact          |\n");
    printf("\t\t\t\t\t| 4. View All Contact        |\n");
    printf("\t\t\t\t\t| 5. Delete All Contact      |\n");
    printf("\t\t\t\t\t| 6. Help                    |\n");
    printf("\t\t\t\t\t| 7. Exit                    |\n");
    printf("\t\t\t\t\t==============================\n");
    printf("\t\t\t\t\tSelect Your Choice : ");
    switch(getch())											//switch case berdasarkan getch()
    {
    case '1':
        add_contact();										//masuk ke fungsi add_contact() jika ditekan 1
        break;
    case '2':
        search_contact();									//masuk ke fungsi search_contact() jika ditekan 2
        break;
    case '3':
        delete_contact();									//masuk ke fungsi delete_contact() jika ditekan 3
        break;
    case '4':
        view_all_contact();									//masuk ke fungsi view_all_contact() jika ditekan 4
        break;
    case '5':
        delete_all();										//masuk ke fungsi delete_all() jika ditekan 5
        break;
    case '6':
        help();												//keluar program jika user tekan 7
        break;
    case '7':
        exit(0);											//masuk ke fungsi delete_all() jika ditekan 6
    default:												//jika user menginput selain opsi
    	printf("\n\n\t\t\t\t\tWrong input!\n");
    	printf("\t\t\t\t\tPlease input choice between 1 to 7 only!\n\n");
    	printf("\t\t\t\t\t");
    	system("pause");
		menu();
    }
}

//=====================================================================================// void add_contact
void add_contact()
{
    FILE *fp;												//deklarasi sebuah pointer dari tipe file
    fp=fopen("contact.txt","a+");							//file open contact.txt dengan access mode a+
    system("cls");											//menghapus layar
    header();												//memanggil fungsi header
    char name_first[100];
	char name_last[100];
	char mob[100];
	char home[100];
	char address[100];
	char email[100];
    printf("\t\t\t\t==============================\n");		//judul
    printf("\t\t\t\t|         Add contact        |\n");
    printf("\t\t\t\t==============================\n\n");
    printf("\t\t\t\tFirst Name	: ");						//meminta data dari input user dan assign ke setiap variabel
    scanf("%s",name_first);
	printf("\t\t\t\tLast Name	: ");
    scanf("%s",name_last);
    printf("\t\t\t\tMobile No.	: ");
    scanf("%s",mob);
    printf("\t\t\t\tHome No. 	: ");
    scanf("%s",home);
    printf("\t\t\t\tAddress    	: ");
    scanf("%s",address);
    printf("\t\t\t\tEmail 		: ");
    scanf("%s",email);
    fprintf(fp,"%s %s %s %s %s %s\n",name_first,name_last,mob,home,address,email); 	//mencetak setiap variabel ke dalam contact.txt
    fclose(fp);
    printf("\n\t\t\t\tAdd success!");
    printf("\n\n\t\t\t\t");
    system("pause");
    menu();
}

//=====================================================================================// void search_contact
void search_contact()
{
    FILE *fp;
    fp=fopen("contact.txt","r");
    system("cls");
    header();
    printf("\t\t\t\t==============================\n");
    printf("\t\t\t\t|        Search contact       |\n");
    printf("\t\t\t\t==============================\n\n");
    printf("\t\t\t\tEnter full name : ");
    char name_in_first[100];
	char name_in_last[100];
    scanf("%s %s",name_in_first,name_in_last);
    int i, check = 0;
    for(i=0; i<5; i++)
    {
    	if (i==0)
    	{
    		printf("\t\t\t\t.");
		}
        else
        {
        	printf(".");
		}
        Sleep(100);
    }
    printf("\n\n");
    int count = 1;
    char name_first[100];
	char name_last[100];
	char mob[100];
	char home[100];
	char address[100];
	char email[100];
    while(fscanf(fp,"%s %s %s %s %s %s\n",name_first,name_last,mob,home,address,email)!=EOF)
    {
        if((strcmp(name_in_first,name_first)==0)&&(strcmp(name_in_last,name_last)==0))
        {
        	printf("\t\t\t\tNo. %d\n",count);
            printf("\t\t\t\tName  		: %s %s\n",name_first,name_last);
            printf("\t\t\t\tMobile no. 	: %s\n",mob);
            printf("\t\t\t\tHome no. 	: %s\n",home);
            printf("\t\t\t\tAddress    	: %s\n",address);
            printf("\t\t\t\tEmail		: %s\n",email);
            check = 1;
            count++;
        }
    }
    if (check == 0)
    {
    	printf("\t\t\t\tData not found!");
	}
    fclose(fp);
    printf("\n\n\t\t\t\t");
    system("pause");
    menu();
}

//=====================================================================================// void delete_contact
void delete_contact()
{
	int success = 0;
    FILE *fp,*fp1;
    fp=fopen("contact.txt","r+");
    fp1=fopen("temp.txt","w");
    system("cls");
    header();
    printf("\t\t\t\t==============================\n");
    printf("\t\t\t\t|        Delete contact      |\n");
    printf("\t\t\t\t==============================\n\n");
    printf("\t\t\t\tEnter full name : ");
    char name_in_first[100];
	char name_in_last[100];
    char name_first[100];
	char name_last[100];
	char mob[100];
	char home[100];
	char address[100];
	char email[100];
    scanf("%s %s",name_in_first,name_in_last);
    while(fscanf(fp,"%s %s %s %s %s %s\n",name_first,name_last,mob,home,address,email)!=EOF)
    {
        if((strcmp(name_in_first,name_first)==0)&&(strcmp(name_in_last,name_last)==0))
        {
        	success = 1;
        	printf("\n\t\t\t\tName		: %s %s\n",name_first,name_last);
	    	printf("\t\t\t\tMobile no. 	: %s\n",mob);
	    	printf("\t\t\t\tHome no. 	: %s\n",home);
	    	printf("\t\t\t\tAddress    	: %s\n",address);
	    	printf("\t\t\t\tEmail		: %s\n",email);
            continue;
        }
        fprintf(fp1,"%s %s %s %s %s %s\n",name_first,name_last,mob,home,address,email);
    }
    fclose(fp);
    fclose(fp1);
    if (success == 1)
    {
	    printf("\n\t\t\t\tAre you sure you want to delete?[Y/N]");
	    switch(getch())
	    {
	    	case 'Y':
	    	case 'y':
			    fp=fopen("contact.txt","w");
			    fp1=fopen("temp.txt","r");
			    while(fscanf(fp1,"%s %s %s %s %s %s\n",name_first,name_last,mob,home,address,email)!=EOF)
			    {
			        fprintf(fp,"%s %s %s %s %s %s\n",name_first,name_last,mob,home,address,email);
			    }
			    fclose(fp);
			    fclose(fp1);
			    printf("\n\t\t\t\tDelete success!");
			    printf("\n\t\t\t\t");
    			system("pause");
			    remove("temp.txt");
    			menu();
			case 'n':
			case 'N':
				menu();
			default:
				printf("\n\t\t\t\tWrong input!");
				printf("\n\t\t\t\t");
    			system("pause");
				menu();
		}
	}
	if (success == 0)
    {
    	printf("\n\t\t\t\tNo data found!\n");
    	remove("temp.txt");
	}
    printf("\n\t\t\t\t");
    system("pause");
    menu();
}

//=====================================================================================// void delete_all
void delete_all()
{
	int size;
    FILE *fp,*fp1;
    system("cls");
    header();
    printf("\t\t\t\t==============================\n");
    printf("\t\t\t\t|      Delete all contact    |\n");
    printf("\t\t\t\t==============================\n\n");
    char name_first[100];
	char name_last[100];
	char mob[100];
	char home[100];
	char address[100];
	char email[100];
    printf("\t\t\t\tAre you sure you want to delete all?[Y/N]");
    switch(getch())
    {
    	case 'Y':
    	case 'y':
    		fp=fopen("contact.txt","r+");
    		if (NULL != fp)
			{
			    fseek (fp, 0, SEEK_END);
			    size = ftell(fp);
			    if (0 == size)
				{
			        printf("\n\t\t\t\tNo data found!");
			        printf("\n\n\t\t\t\t");
    				system("pause");
			        menu();
			    }
			    else
			    {
					fp=fopen("contact.txt","w");
					fclose(fp);
					printf("\n\t\t\t\tDelete all success!");
				}
				fclose(fp);
			}
		    printf("\n\n\t\t\t\t");
    		system("pause");
		    menu();
		case 'n':
		case 'N':
			menu();
		default:
			printf("\n\t\t\t\tWrong input!");
			printf("\n\n\t\t\t\t");
    		system("pause");
			menu();
	}
}

//=====================================================================================// void view_all_contact
void view_all_contact()
{
    FILE *fp;
    fp=fopen("contact.txt","r");
    system("cls");
    header();
    printf("\t\t\t\t=============================\n");
    printf("\t\t\t\t|         All contact       |\n");
    printf("\t\t\t\t=============================\n\n");
    char name_first[100];
	char name_last[100];
	char mob[100];
	char home[100];
	char address[100];
	char email[100];
    int count=1;
    while(fscanf(fp,"%s %s %s %s %s %s\n",name_first,name_last,mob,home,address,email)!=EOF)
    {
    	printf("\n\t\t\t\tNo. %d",count);
        printf("\n\t\t\t\tName		: %s %s\n",name_first,name_last);
        printf("\t\t\t\tMobile no. 	: %s\n",mob);
        printf("\t\t\t\tHome no. 	: %s\n",home);
        printf("\t\t\t\tAddress    	: %s\n",address);
        printf("\t\t\t\tEmail		: %s\n",email);
        count++;
	}
    fclose(fp);
    printf("\n\t\t\t\t");
    system("pause");
    menu();
}

//=====================================================================================// void help
void help()
{
	system("cls");
	header();
	header_help();
    printf("\t\t\t\t");
    printd("Which section needs explaination?",20);
    printf("\n\t\t\t\t==============================\n");		//menu help section
    printf("\t\t\t\t| 1. Add Contact             |\n");
    printf("\t\t\t\t| 2. Search Contact          |\n");
    printf("\t\t\t\t| 3. Delete Contact          |\n");
    printf("\t\t\t\t| 4. View All Contact        |\n");
    printf("\t\t\t\t| 5. Delete All Contact      |\n");
    printf("\t\t\t\t| 6. Back to menu            |\n");
    printf("\t\t\t\t==============================\n");
    printf("\t\t\t\tSelect your choice : ");
    switch(getch())												//switch case berdasarkan getch()
    {
    case '1':
        help_add_contact();										//masuk ke fungsi help_add_contact() jika ditekan 1
        break;
    case '2':
        help_search_contact();									//masuk ke fungsi help_search_contact() jika ditekan 2
        break;
    case '3':
        help_delete_contact();									//masuk ke fungsi help_delete_contact() jika ditekan 3
        break;
    case '4':
        help_view_all_contact();								//masuk ke fungsi help_view_all_contact() jika ditekan 4
        break;
    case '5':
        help_delete_all();										//masuk ke fungsi help_delete_all() jika ditekan 5
        break;
    case '6':
        menu();													//masuk ke fungsi help() jika ditekan 6
        break;
    default:													//jika user menginput selain opsi
    	printf("\n\n\t\t\t\tWrong input!\n");
    	printf("\t\t\t\tPlease input choice between 1 to 6 only!");
    	printf("\n\n\t\t\t\t");
    	system("pause");
		help();
    }
}

void help_add_contact()
{
	system("cls");
	header();
	header_help();
	printf("\t\t\t\t");
	printd("In this option you can add contacts by inputing datas.",20);
	printf("\n\t\t\t\t");
	printd("Example : ",20);
	Sleep(200);
	printf("\n\t\t\t\t");
	printd("First name	: Jonathan",20);
	Sleep(200);
	printf("\n\t\t\t\t");
	printd("Last name	: Anderson",20);
	Sleep(200);
	printf("\n\t\t\t\t");
	printd("Mobile No.	: 0822020928390",20);
	Sleep(200);
	printf("\n\t\t\t\t");
	printd("Home No.	: 0219231321",20);
	Sleep(200);
	printf("\n\t\t\t\t");
	printd("Address		: Manggarai_Besar_no.2",20);
	Sleep(200);
	printf("\n\t\t\t\t");
	printd("Email		: jonathan.anderson@gmail.com",20);
	Sleep(2000);
	printf("\n\n\t\t\t\t");
	printd("Hint : To insert address, it's recommended to use underscore",20);
	printf("\n\t\t\t\t");
	printd("instead of space.",20);
	Sleep(500);
	printf("\n\n\t\t\t\t");
	printd("Note : You can only input single word with no spaces.",20);
	Sleep(500);
	printf("\n\n\t\t\t\t");
    system("pause");
	help();
}

void help_search_contact()
{
	system("cls");
	header();
	header_help();
	printf("\t\t\t\t");
	printd("In this option you can search saved contact.",20);
	Sleep(200);
	printf("\n\t\t\t\t");
	printd("You can do search by typing full name.",20);
	Sleep(200);
	printf("\n\t\t\t\t");
	printd("Example : ",20);
	Sleep(200);
	printf("\n\t\t\t\t");
	printd("Enter full name : Jonathan Anderson",20);
	Sleep(50);
	printf("\n");
	int i;
    for(i=0; i<5; i++)
    {
    	if (i==0)
    	{
    		printf("\t\t\t\t.");
		}
        else
        {
        	printf(".");
		}
        Sleep(10);
    }
	printf("\n\n\t\t\t\t");
	printf("Name		: Jonathan Anderson");
	printf("\n\t\t\t\t");
	printf("Mobile No.	: 082201928390");
	printf("\n\t\t\t\t");
	printf("Home No.	: 0219231321");
	printf("\n\t\t\t\t");
	printf("Address		: Manggarai_Besar_no.2");
	printf("\n\t\t\t\t");
	printf("Email		: jonathan.anderson@gmail.com");
	Sleep(100);
	printf("\n\n\t\t\t\t");
	printd("Note that you must input full name to delete the contact.",20);
	Sleep(500);
	printf("\n\n\t\t\t\t");
    system("pause");
	help();
}

void help_delete_contact()
{
	system("cls");
	header();
	header_help();
	printf("\t\t\t\t");
	printd("In this option you can delete contacts by",20);
	printf("\n\t\t\t\t");
	printd("typing full name(first and last name).",20);
	Sleep(200);
	printf("\n\t\t\t\t");
	printd("Example : ",20);
	Sleep(200);
	printf("\n\t\t\t\t");
	printd("Enter full name : Jonathan Anderson",20);
	Sleep(50);
	printf("\n\n\t\t\t\t");
	printf("Name		: Jonathan Anderson");
	printf("\n\t\t\t\t");
	printf("Mobile No.	: 082201928390");
	printf("\n\t\t\t\t");
	printf("Home No.	: 0219231321");
	printf("\n\t\t\t\t");
	printf("Address		: Manggarai_Besar_no.2");
	printf("\n\t\t\t\t");
	printf("Email		: jonathan.anderson@gmail.com");
	printf("\n\t\t\t\t");
	printd("Are you sure you want to delete contact?[Y/N]",20);
	Sleep(500);
	printf("Y");
	Sleep(200);
	printf("\n\t\t\t\t");
	printf("Delete Success!");
	Sleep(2000);
	printf("\n\n\t\t\t\t");
	printd("Note that you must enter full name to delete contacts.",20);
	Sleep(500);
	printf("\n\n\t\t\t\t");
    system("pause");
	help();
}

void help_view_all_contact()
{
	system("cls");
	header();
	header_help();
	printf("\t\t\t\t");
	printd("In this option you can view all contacts.",20);
	Sleep(200);
	printf("\n\t\t\t\t");
	printd("The contacts are sorted based on time input.",20);
	Sleep(500);
	printf("\n\n\t\t\t\t");
    system("pause");
	help();
}

void help_delete_all()
{
	system("cls");
	header();
	header_help();
	printf("\t\t\t\t");
	printd("In this option you can delete all contacts",20);
	printf("\n\t\t\t\t");
	printd("simply by confirming yes or no.",20);
	Sleep(500);
	printf("\n\n\t\t\t\t");
    system("pause");
	help();
}

//=====================================================================================// fungsi passing parameters
void printd(char* x, int y)
{
	int i;
	for(i=0;i<strlen(x);i++)
	{
		printf("%c",x[i]);
		Sleep(y);
	}
}

void sort(char* string)
{
   	char temp;

 	int i, j;
   	int n = strlen(string);

   	printf("String before sorting - %s \n", string);

   	for (i = 0; i < n-1; i++) {
      	for (j = i+1; j < n; j++) {
        	if (string[i] > string[j]) {
            	temp = string[i];
            	string[i] = string[j];
            	string[j] = temp;
         	}
      	}
   	}

   	printf("String after sorting  - %s \n", string);
   	return 0;
}
