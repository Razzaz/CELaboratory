#include <stdio.h>
#include <math.h>
#include <windows.h>

int op(), vo(), kon(), kobil(), poldet(), Help1();
float per(), peng(), pek(), pem();
float kub(), bal(), bol();
float cel(),fah(),kel(),rom(),del(),new();
float pol(),der();

int main (){

	int menu;
	printf("\n\n--------------------------------------------------------------------------------\n				SUPER KALKULATOR 	v1.0\n-------------------------------------------------------------------------------\n");
	printf("\n!!!Kesalahan Input akan mengembalikan ke Menu awal!!!\n");
	printf("\nPilih Operasi yang Ingin Dilakukan:\n");
	printf("\n1. Operasi Dasar\n  (+,-,*,/)\n");
	printf("\n2. Volume Bangun Ruang\n  (Balok, Kubus, Bola)\n");
	printf("\n3. Konverter Suhu\n  (Celcius, Fahrenheit, Kelvin, Reamur, Romer, Newton, Romer, Delisle)\n");
	printf("\n4. Konverter Bilangan\n  (Biner menjadi Desimal)\n");
	printf("\n5. Pola dan Deret\n  (Deret: Fibonacci, Plus Minus, Ganjil, Genap)\n  (Pola: Diamond, Hati, Persegi, Piramida)\n");
	printf("																							Untuk bantuan masukkan (9)\n");
	printf("\nPilih Opsi: ");
	scanf("%d", &menu);
	system ("cls");

	if(menu==9){
		help1();
	}
			else{
				switch(menu){
					case 1:
						op();

					case 2:
						vo();

					case 3:
						kon();

					case 4:
						kobil();

					case 5:
						poldet();

					default:
					printf("Opsi tidak ada\n");
					printf("Kembali ke Menu awal");
					return main();
				}
			}
		}

int op(){
	int submenu,men;

printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
printf("!!!Kesalahan Input akan mengaktifkan Peringatan!!!\n");
printf("Pilih operasi dasar yang ingin anda lakukan \n");
printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
printf("1. Pertambahan\n");
printf("2. Pengurangan\n");
printf("3. Perkalian\n");
printf("4. Pembagian\n");
printf("(Untuk Help tekan 9)");
printf("\nPilih Operator: ");
scanf("%d", &submenu);

	if(submenu==9){
		help1();
	}
	else{
		switch(submenu){
			case 1:
			per();
			case 2:
			peng();
			case 3:
			pek();
			case 4:
			pem();
			default:
				printf("Opsi tidak ada\n");
				printf("\n!!!Kesalahan Input akan mengakibatkan system error!!!\n");
				printf("Lanjutkan program?\n1.Y(menu Utama)\n2.Y(menu Pilih Operator)\n3.N\n");
				scanf("%d", &men);
				while(men>3){
					if(men==1){
						return main();
					}
					else{
						if(men==2){
							return op();
						}
						else{
							if(men==3){
								printf("\n Thankyou for using our Calculator\n");
							}
							else{
							printf("\nA\n");
							}
						}
						}
					}
				}
	}
}

	float per(){
		float bil1,bil2;
		int men;
		printf("\nMasukkan Angka Pertama: ");
		scanf("%f", &bil1);
		printf("Masukkan Angka Kedua: ");
		scanf("%f", &bil2);
        printf("\n%f + %f = %f\n",bil1, bil2, bil1 + bil2);
				printf("Lanjutkan program?\n1.Y(menu utama)\n2.Y(menu Pilih Operator)\n3.Y(menu input nilai)\n4.Berhenti\n");
				scanf("%d", &men);
				while(men>3){
					if(men==1){
						return main();
					}
					else{
						if(men==2){
							return op();
						}
						else{
							if(men==3){
								return per();
							}
							else{
								if(men==4){
								printf("\n Thankyou for using our Calculator\n");
								}
								else{
									printf("\nA\n");
								}
							}
						}
						}
					}
	}
	float peng(){
		float bil1,bil2;
		int men;
		printf("\nMasukkan Angka Pertama: ");
		scanf("%f", &bil1);
		printf("Masukkan Angka Kedua: ");
		scanf("%f", &bil2);
        printf("\n%f - %f = %f\n",bil1, bil2, bil1 - bil2);
				printf("Lanjutkan program?\n1.Y(menu utama)\n2.Y(menu Pilih Operator)\n3.Y(menu input nilai)\n4.Berhenti\n");
				scanf("%d", &men);
				while(men>3){
					if(men==1){
						return main();
					}
					else{
						if(men==2){
							return op();
						}
						else{
							if(men==3){
								return peng();
							}
							else{
								if(men==4){
								printf("\n Thankyou for using our Calculator\n");

								}
								else{
									printf("\nA\n");
								}
							}
						}
						}
					}
	}
	float pek(){
		float bil1,bil2;
		int men;
		printf("\nMasukkan Angka Pertama: ");
		scanf("%f", &bil1);
		printf("Masukkan Angka Kedua: ");
		scanf("%f", &bil2);
        printf("\n%f * %f = %f\n",bil1, bil2, bil1 * bil2);
				printf("Lanjutkan program?\n1.Y(menu utama)\n2.Y(menu Pilih Operator)\n3.Y(menu input nilai)\n4.Berhenti\n");
				scanf("%d", &men);
				while(men>3){
					if(men==1){
						return main();
					}
					else{
						if(men==2){
							return op();
						}
						else{
							if(men==3){
								return pek();
							}
							else{
								if(men==4){
								printf("\n Thankyou for using our Calculator\n");
								}
								else{
									printf("\nA\n");
								}
							}
						}
						}
					}
	}
	float pem(){
		float bil1,bil2;
		int men;
		printf("\nMasukkan Angka Pertama: ");
		scanf("%f", &bil1);
		printf("Masukkan Angka Kedua: ");
		scanf("%f", &bil2);
        printf("\n%f / %f = %f\n",bil1, bil2, bil1 / bil2);
				printf("Lanjutkan program?\n1.Y(menu utama)\n2.Y(menu Pilih Operator)\n3.Y(menu input nilai)\n4.Berhenti\n");
				scanf("%d", &men);
				while(men>3){
					if(men==1){
						return main();
					}
					else{
						if(men==2){
							return op();
						}
						else{
							if(men==3){
								return pem();
							}
							else{
								if(men==4){
								printf("\n Thankyou for using our Calculator\n");
								}
								else{
									printf("\nA\n");
								}
							}
						}
						}
					}
	}

int vo(){
	int submenu,men;
	printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Pilih bangun ruang yang ingin dihitung volumenya \n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
	printf("\n1. Kubus\n");
	printf("2. Balok\n");
	printf("3. Bola\n");
	printf("\nPilih bangun ruang: ");
	scanf("%d", &submenu);
	if(submenu==9){
		help1();
}
	else
		switch(submenu){
			case 1:
			kub();
			case 2:
			bal();
			case 3:
			bol();
			default:
				printf("Opsi tidak ada\n");
				printf("\n!!!Kesalahan Input akan mengakibatkan system error!!!\n");
				printf("Lanjutkan program?\n1.Y(menu Utama)\n2.Y(menu Pilih Operator)\n3.N\n");
				scanf("%d", &men);
				while(men>3){
					if(men==1){
						return main();
					}
					else{
						if(men==2){
							return op();
						}
						else{
							if(men==3){
								printf("\n Thankyou for using our Calculator\n");
							}
							else{
							printf("\nA\n");
							}
						}
						}
					}
				}
	}

	float kub(){
		float r;
		int men;
	printf("\nMasukkan panjang rusuk: ");
	scanf("%1f", &r);
	printf("\n%f * %f * %f = %f\n",r,r,r,r*r*r);
			printf("Lanjutkan program?\n1.Y(menu utama)\n2.Y(menu Pilih Operator)\n3.Y(menu input nilai)4.N\n");
				scanf("%d", &men);
				while(men>3){
					if(men==1){
						return main();
					}
					else{
						if(men==2){
							return op();
						}
						else{
							if(men==3){
								return kub();
							}
							else{
								if(men==4){
								printf("\n Thankyou for using our Calculator\n");
								}
								else{
									printf("\nA\n");
								}
							}
						}
						}
					}
	}
	float bal(){
		float p,l,t;
		int men;
	printf("\nMasukkan panjang balok	: ");
	scanf("%f", &p);
	printf("Masukkan lebar Balok	: ");
	scanf("%f", &l);
	printf("Masukkan tinggi Balok	: ");
	scanf("%f", &t);
	printf("\n%f * %f * %f = %f\n",p,l,t,p*l*t);
			printf("Lanjutkan program?\n1.Y(menu utama)\n2.Y(menu Pilih Operator)\n3.Y(menu input nilai)4.N\n");
				scanf("%d", &men);
				while(men>3){
					if(men==1){
						return main();
					}
					else{
						if(men==2){
							return op();
						}
						else{
							if(men==3){
								return bal();
							}
							else{
								if(men==4){
								printf("\n Thankyou for using our Calculator\n");
								}
								else{
									printf("\nA\n");
								}
							}
						}
						}
					}
	}
	float bol(){
		float r;
		int men;
	printf("\nMasukkan radius bola: ");
	scanf("%f", &r);
	printf("\n4/3 * 3.14 * %f * %f * %f = %f\n",r,r,r,4/3*3.14*r*r*r);
			printf("Lanjutkan program?\n1.Y(menu utama)\n2.Y(menu Pilih Operator)\n3.Y(menu input nilai)4.N\n");
				scanf("%d", &men);
				while(men>3){
					if(men==1){
						return main();
					}
					else{
						if(men==2){
							return op();
						}
						else{
							if(men==3){
								return bol();
							}
							else{
								if(men==4){
								printf("\n Thankyou for using our Calculator\n");
								}
								else{
									printf("\nA\n");
								}
							}
						}
						}
					}
	}

int kon(){
	int submenu,men;
	printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Pilih satuan suhu yang ingin anda konversikan \n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("\n1. Celcius\n");
   	printf("2. Fahrenheit\n");
    printf("3. Kelvin\n");
    printf("4. Romer\n");
    printf("5. Delisle\n");
    printf("6. Newton\n");
    printf("\nSilahkan anda pilih : ");
    scanf("%d", &submenu);
	if(submenu==9){
		help1();
}
	else
		switch(submenu){
			case 1:
			cel();
			case 2:
			fah();
			case 3:
			kel();
			case 4:
			rom();
			case 5:
			del();
			case 6:
			new();
			default:
				printf("Opsi tidak ada\n");
				printf("\n!!!Kesalahan Input akan mengakibatkan system error!!!\n");
				printf("Lanjutkan program?\n1.Y(menu Utama)\n2.Y(menu Pilih Operator)\n3.N\n");
				scanf("%d", &men);
				while(men>3){
					if(men==1){
						return main();
					}
					else{
						if(men==2){
							return kon();
						}
						else{
							if(men==3){
								printf("\n Thankyou for using our Calculator\n");
							}
							else{
							printf("\nA\n");
							}
						}
						}
					}
				}
				}

	float cel(){
		float a,b;
		int men;
	printf("\nMasukkan besar suhu : ");
	scanf("%f", &a);
	b=(a*1.8)+32;
	printf("\nFahrenheit 	: %.2f Fahrenheit\n", b);
	b=a+273.15;
	printf("Kelvin		: %.2f Kelvin\n", b);
	b= a*21/40 + 7,5;
	printf("Romer		: %.2f Romer\n", b);
	b = (100 - a)*1,5;
	printf("Delisle		: %.2f Delisle\n", b);
	b = a*33/100;
	printf("Newton 		: %.2f Newton\n\n", b);
			printf("Lanjutkan program?\n1.Y(menu utama)\n2.Y(menu Pilih Operator)\n3.Y(menu input nilai)4.N\n");
				scanf("%d", &men);
				while(men>3){
					if(men==1){
						return main();
					}
					else{
						if(men==2){
							return kon();
						}
						else{
							if(men==3){
								return cel();
							}
							else{
								if(men==4){
								printf("\n Thankyou for using our Calculator\n");
								}
								else{
									printf("\nA\n");
								}
							}
						}
						}
					}

	}
	float fah(){
		float a,b;
		int men;
	printf("\nMasukkan besar suhu : ");
	scanf("%f", &a);
	b= (a + 459,67) / 1,8;
	printf("\nKelvin 		: %.2f Kelvin\n", b);
	b = (a - 32) / 1,8;
	printf("Celcius		: %.2f Celcius\n", b);
	b = (212 - a) * 5/6;
	printf("Delisle		: %.2f Delisle\n", b);
	b = (a - 32) * 11/60;
	printf("Newton 		: %.2f Newton\n", b);
	b = (a - 32) * 7/24 + 7,5;
	printf("Romer 		: %.2f Romer\n\n", b);
			printf("Lanjutkan program?\n1.Y(menu utama)\n2.Y(menu Pilih Operator)\n3.Y(menu input nilai)4.N\n");
				scanf("%d", &men);
				while(men>3){
					if(men==1){
						return main();
					}
					else{
						if(men==2){
							return kon();
						}
						else{
							if(men==3){
								return fah();
							}
							else{
								if(men==4){
								printf("\n Thankyou for using our Calculator\n");
								}
								else{
									printf("\nA\n");
								}
							}
						}
						}
					}
	}
	float kel(){
		float a,b;
		int men;
	printf("\nMasukkan besar suhu : ");
	scanf("%f", &a);
	b = a - 273,15;
	printf("\nCelcius		: %.2f Celcius\n", b);
	b = a* 1,8 - 459,67;
	printf("Fahrenheit	: %.2f Fahrenheit\n", b);
	b = (373,15 - a) * 1,5;
	printf("Delisle		: %.2f Delisle\n", b);
	b = (a - 273,15) * 33/100;
	printf("Newton 		: %.2f Newton\n", b);
	b = (a - 273,15) * 21/40 + 7,5;
	printf("Romer 		: %.2f Romer\n\n", b);
			printf("Lanjutkan program?\n1.Y(menu utama)\n2.Y(menu Pilih Operator)\n3.Y(menu input nilai)4.N\n");
				scanf("%d", &men);
				while(men>3){
					if(men==1){
						return main();
					}
					else{
						if(men==2){
							return kon();
						}
						else{
							if(men==3){
								return kel();
							}
							else{
								if(men==4){
								printf("\n Thankyou for using our Calculator\n");
								}
								else{
									printf("\nA\n");
								}
							}
						}
						}
					}
	}
	float rom(){
		float a,b;
		int men;
	printf("\nMasukkan besar suhu : ");
	scanf("%f", &a);
	b = (a - 7,5) * 40/21 + 273.15;
	printf("\nKelvin 		: %.2f Kelvin\n", b);
	b = (a - 7,5) * 40/21;
	printf("Celcius		: %.2f Celcius\n", b);
	b = (a - 7,5) * 24/7 + 32;
	printf("Fahrenheit 	: %.2f Fahrenheit\n", b);
	b = (60 - a) * 20/7;
	printf("Delisle		: %.2f Delisle\n", b);
	b = (a - 7,5) * 22/35;
	printf("Newton 		: %.2f Newton\n", b);
			printf("Lanjutkan program?\n1.Y(menu utama)\n2.Y(menu Pilih Operator)\n3.Y(menu input nilai)4.N\n");
				scanf("%d", &men);
				while(men>3){
					if(men==1){
						return main();
					}
					else{
						if(men==2){
							return kon();
						}
						else{
							if(men==3){
								return rom();
							}
							else{
								if(men==4){
								printf("\n Thankyou for using our Calculator\n");
								}
								else{
									printf("\nA\n");
								}
							}
						}
						}
					}
	}
	float del(){
		float a,b;
		int men;
	printf("\nMasukkan besar suhu : ");
	scanf("%f", &a);
	b = 373,15 - b * 2/3;
	printf("\nKelvin 		: %.2f Kelvin\n", b);
	b = 100 - a * 2/3;
	printf("Celcius		: %.2f Celcius\n", b);
	b = 212 - a * 1,2;
	printf("Fahrenheit 	: %.2f Fahrenheit\n", b);
	b = 33 - a * 0,22;
	printf("Newton 		: %.2f Newton\n", b);
	b = 60 - a * 0,35;
	printf("Romer 		: %.2f Romer\n\n", b);
			printf("Lanjutkan program?\n1.Y(menu utama)\n2.Y(menu Pilih Operator)\n3.Y(menu input nilai)4.N\n");
				scanf("%d", &men);
				while(men>3){
					if(men==1){
						return main();
					}
					else{
						if(men==2){
							return kon();
						}
						else{
							if(men==3){
								return del();
							}
							else{
								if(men==4){
								printf("\n Thankyou for using our Calculator\n");
								}
								else{
									printf("\nA\n");
								}
							}
						}
						}
					}
	}
	float new(){
		float a,b;
		int men;
	printf("\nMasukkan besar suhu : ");
	scanf("%f", &a);
	b = a * 100/33 + 273,15;
	printf("\nKelvin 		: %.2f Kelvin\n", b);
	b = a * 100/33;
	printf("Celcius		: %.2f Celcius\n", b);
	b = a * 60/11 + 32;
	printf("Fahrenheit 	: %.2f Fahrenheit\n", b);
	b = (33 - a) * 50/11;
	printf("Delisle		: %.2f Delisle\n", b);
	b = a * 35/22 + 7,5;
	printf("Romer ; %.2f Romer\n\n", b);
			printf("Lanjutkan program?\n1.Y(menu utama)\n2.Y(menu Pilih Operator)\n3.Y(menu input nilai)4.N\n");
				scanf("%d", &men);
				while(men>3){
					if(men==1){
						return main();
					}
					else{
						if(men==2){
							return kon();
						}
						else{
							if(men==3){
								return new();
							}
							else{
								if(men==4){
								printf("\n Thankyou for using our Calculator\n");
								}
								else{
									printf("\nA\n");
								}
							}
						}
						}
					}
	}

int kobil(){
	int submenu,men;
	long desimal;
	float a,b;
	printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Masukkan bilangan biner yang ingin diubah menjadi desimal \n");
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("\nBilangan biner: ");
	scanf("%ld", &submenu);
	while (submenu!=0){
	b = submenu % 10;
	desimal+=b*pow(2,a);
	a++;
	submenu/=10;
	}
	printf("Bilangan desimalnya = %ld",desimal);
	printf("\n");
		printf("Lanjutkan program?\n1.Y(menu utama)\n2.Y(menu Pilih Operator)\n3.Y(menu input nilai)4.N\n");
				scanf("%d", &men);
				while(men>3){
					if(men==1){
						return main();
					}
					else{
						if(men==2){
							return op();
						}
						else{
							if(men==3){
								return kobil();
							}
							else{
								if(men==4){
								printf("\n Thankyou for using our Calculator\n");
								}
								else{
									printf("\nA\n");
								}
							}
						}
						}
					}
}
int poldet(){
	int submenu,men;
	printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Pilih opsi deret atau pola yang diinginkan \n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
	printf("\n1. Deret\n");
	printf("2. Pola\n");
	printf("\nPilih Opsi: ");
	scanf("%d", &submenu);
	system ("cls");
		switch(submenu){
			case 1:
			pol();
			case 2:
			der();
			default:
			printf("Opsi tidak ada\n");
				printf("\n!!!Kesalahan Input akan mengakibatkan system error!!!\n");
				printf("Lanjutkan program?\n1.Y(menu Utama)\n2.Y(menu Pilih Operator)\n3.N\n");
				scanf("%d", &men);
				while(men>3){
					if(men==1){
						return main();
					}
					else{
						if(men==2){
							return poldet();
						}
						else{
							if(men==3){
								printf("\n Thankyou for using our Calculator\n");
							}
							else{
							printf("\nA\n");
							}
						}
						}
					}
				}
		}

	float der(){
		int f,g,h,i,x,submenu,men;
	printf("\n[Deret]\n");
	printf("\n1. Fibonacci\n");
	printf("2. Ganjil\n");
	printf("3. Genap\n");
	printf("\nDeret apa yang anda inginkan: ");
	scanf("%d", &submenu);
		switch(submenu){
			case 1:
			h=0;
			i=1;
			printf("\nMasukan jumlah angka fibonacci yang akan ditampilkan: ");
			scanf("%d", &g);
			printf ("\nDeret anda: ");
			for(f=1;f<=g;f++){
			printf ("\n%d\n", h);
			x=h+i;
			h=i;
			i=x;
			}
			printf("Lanjutkan program?\n1.Y(menu utama)\n2.Y(menu Pilih Operator)\n3.Y(menu input nilai)4.N\n");
				scanf("%d", &men);
				while(men>3){
					if(men==1){
						return main();
					}
					else{
						if(men==2){
							return poldet();
						}
						else{
							if(men==3){
								return pol();
							}
							else{
								if(men==4){
								printf("\n Thankyou for using our Calculator\n");
								}
								else{
									printf("\nA\n");
								}
							}
						}
						}
					}


			case 2:
			printf("\nMasukkan Batas Angka yang ingin Ditampilkan: ");
			scanf("%d", &f);
  			g = 1;
    		while (g <= f) {
        	printf("%d\n", g);
        	g = g + 2;
    		}
    		printf("Lanjutkan program?\n1.Y(menu utama)\n2.Y(menu Pilih Operator)\n3.Y(menu input nilai)4.N\n");
				scanf("%d", &men);
				while(men>3){
					if(men==1){
						return main();
					}
					else{
						if(men==2){
							return poldet();
						}
						else{
							if(men==3){
								return pol();
							}
							else{
								if(men==4){
								printf("\n Thankyou for using our Calculator\n");
								}
								else{
									printf("\nA\n");
								}
							}
						}
						}
					}


    		case 3:
			printf("\nMasukkan Batas Angka yang ingin Ditampilkan: ");
			scanf("%d", &f);
  			g = 0;
    		while (g <= f) {
        	printf("%d\n", g);
        	g = g + 2;
    		}
			printf("Lanjutkan program?\n1.Y(menu utama)\n2.Y(menu Pilih Operator)\n3.Y(menu input nilai)4.N\n");
				scanf("%d", &men);
				while(men>3){
					if(men==1){
						return main();
					}
					else{
						if(men==2){
							return poldet();
						}
						else{
							if(men==3){
								return pol();
							}
							else{
								if(men==4){
								printf("\n Thankyou for using our Calculator\n");
								}
								else{
									printf("\nA\n");
								}
							}
						}
						}
					}

		}
	}
	float pol(){
		int f,g,h,i,x,submenu,men,pola,pira;
	printf("\n[Pola]\n");
	printf("\n1. Piramida\n");
	printf("2. Diamond\n");
	printf("3. Persegi\n");
	printf("4. Hati\n");
	printf("\nPilih Pola: ");
	scanf("%d", &submenu);
	system ("cls");
	switch(submenu){
		case 1:
		printf("\nPiramida\n");
		printf("\n1. Normal\n");
		printf("2. Rata Kiri\n");
		printf("\nPilih Pola Piramida: ");
		scanf("%d", &pola);
		system ("cls");
			switch(pola){
			case 1:
			printf("\nNormal\n");
			printf("\n1. Lancip ke Atas\n");
			printf("2. Lancip kebawah\n");
			printf("\nPilih Modelnya: ");
			scanf("%d", &pira);
			switch(pira){
				case 1:
				printf("\nMasukkan Jumlah Baris: ");
    			scanf("%d",&h);
    			for(f=1; f<=h; ++f, i=0)
	    		{
	        	for(g=1; g<=h-f; ++g)
        		{
            	printf("  ");
        		}
        		while(i != 2*f-1)
        		{
            	printf("* ");
           	 	++i;
        		}
        		printf("\n");
        		printf("\nApakah anda ingin melanjutkan?\n(1) untuk ya, (2) untuk tidak\n");
            	scanf("%d", &x);
            	if (x==2){
            	return 0;
				}
				else if (x==1){
				system ("cls");
				return main();
			}
			}
			case 2:
				printf("\nMasukkan Jumlah Baris: ");
    			scanf("%d",&f);
    			for(g=f; g>=1; --g)
    			{
        		for(i=0; i < f-g; ++i)
           		printf("  ");
        		for(h=g; h <= 2*g-1; ++h)
            	printf("* ");
        		for(h=0; h < g-1; ++h)
            	printf("* ");
        		printf("\n");
    			}
    			printf("\nApakah anda ingin melanjutkan?\n(1) untuk ya, (2) untuk tidak\n");
            	scanf("%d", &x);
            	if (x==2){
            	return 0;
				}
				else if (x==1){
				system ("cls");
				return main();
		}
			default:
				printf("Perintah tidak ada");
				printf("Kembali ke menu awal");
				system("cls");
				return main();
	}
			case 2:
				printf("\nRata Kiri\n");
				printf("\n1. Rata Kiri Menaik\n");
				printf("2. Rata Kiri Menurun\n");
				printf("\nPilih Pola: ");
				scanf("%d", &pira);
				switch(pira){
					case 1:
						printf("\nMasukkan Jumlah Baris: ");
    					scanf("%d",&h);
    					for(f=1; f<=h; ++f)
    					{
        				for(g=1; g<=f; ++g)
        				{
            			printf("* ");
        				}
        				printf("\n");
    					}
   						printf("\nApakah anda ingin melanjutkan?\n(1) untuk ya, (2) untuk tidak\n");
            			scanf("%d", &x);
            			if (x==2){
            			return 0;
						}
						else if (x==1){
						system ("cls");
						return main();
						}

					case 2:
						printf("\nMasukkan Jumlah Baris: ");
    					scanf("%d",&h);

    					for(f=h; f>=1; f--)
    					{
       					for(g=1; g<=f; ++g)
        				{
            			printf("* ");
        				}
        				printf("\n");
    					}

   						printf("\nApakah anda ingin melanjutkan?\n(1) untuk ya, (2) untuk tidak\n");
            			scanf("%d", &x);
            			if (x==2){
            			return 0;
						}
						else if (x==1){
						system ("cls");
						return main();
						}
					}
}
		case 2:
		printf("\nDiamond\n");
		printf("\n1. Normal\n");
		printf("2. Bolong Tengah\n");
		printf("\nPilih Pola: ");
		scanf("%d", &pola);
			switch(pola){
												case 1:
													printf("\nMasukkan Jumlah Baris: ");
    												scanf("%d", &h);
    												for(f=1; f<=h; f++)
    												{
        											for(g=f; g<h; g++)
        											{
            										printf(" ");
        											}
        											for(g=1; g<=f; g++)
        											{
            										printf("*");
        											}
        											for(g=1; g<f; g++)
        											{
            										printf("*");
        											}
        											printf("\n");
    												}
    												for(f=h; f>=1; f--)
    												{
        											for(g=f; g<=h; g++)
        											{
            										printf(" ");
        											}
        											for(g=1; g<f; g++)
        											{
            										printf("*");
        											}
        											for(g=1; g<f-1; g++)
        											{
            										printf("*");
        											}
        											printf("\n");
    												}
    												printf("\nApakah anda ingin melanjutkan?\n(1) untuk ya, (2) untuk tidak\n");
            													scanf("%d", &x);
            													if (x==2){
            													return 0;
																	}
																else if (x==1){
																	system ("cls");
																	return main();
																	}
    											case 2:
    											    printf("\nMasukkan Jumlah Baris: ");
    												scanf("%d", &h);

    												for(f=1; f<=h; f++)
    												{
        											for(g=f; g<=h; g++)
        											{
           										 	printf("*");
        											}
        											for(g=1; g<f; g++)
        											{
            										printf(" ");
        											}
        											for(g=1; g<f; g++)
        											{
            										printf(" ");
        											}
        											for(g=f; g<=h; g++)
        											{
            										printf("*");
        											}
        											printf("\n");
    												}

    												for(f=2; f<=h; f++)
    												{
        											for(g=1; g<=f; g++)
        											{
            										printf("*");
        											}
        											for(g=f; g<h; g++)
        											{
            										printf(" ");
       	 											}
        											for(g=f; g<h; g++)
        											{
            										printf(" ");
       	 											}
        											for(g=1; g<=f; g++)
        											{
        										    printf("*");
        											}
        											printf("\n");
    												}
    												printf("\nApakah anda ingin melanjutkan?\n(1) untuk ya, (2) untuk tidak\n");
            													scanf("%d", &x);
            													if (x==2){
            													return 0;
																	}
																else if (x==1){
																	system ("cls");
																	return main();
																	}

												default:
													printf("\nOpsi tidak ada\n");
													printf("Kembali ke menu awal");
													system ("cls");
													return main();
											}
		case 3:
		printf("\nMasukan Berapa Ukuran Sisinya: ");
 		scanf("%d",&f);
 		for(g=1; f>=g; g++)
 		{
  		for(h=1; h<=f; h++)
     	printf(" * ");
  		printf("\n");
 		}
    	printf("\nApakah anda ingin melanjutkan?\n(1) untuk ya, (2) untuk tidak\n");
            													scanf("%d", &x);
            													if (x==2){
            													return 0;
																	}
																else if (x==1){
																	system ("cls");
																	return  main();
																	}
		case 4:
 		printf("\nMasukkan seberapa besar anda inginkan besar hatinya: ");
   		scanf("%d", &h);
    									for(f=h/2; f<=h; f+=2)
    									{
        								for(g=1; g<h-f; g+=2)
        								{
            							printf(" ");
        								}
        								for(g=1; g<=f; g++)
        								{
            							printf("*");
        								}
        								for(g=1; g<=h-f; g++)
        								{
            							printf(" ");
        								}
        								for(g=1; g<=f; g++)
        								{
           							 	printf("*");
        								}
        								printf("\n");
    									}
    									for(f=h; f>=1; f--)
    									{
        								for(g=f; g<h; g++)
        								{
            							printf(" ");
        								}
        								for(g=1; g<=(f*2)-1; g++)
        								{
            							printf("*");
        								}
        								printf("\n");
    									}
    									printf("\nApakah anda ingin melanjutkan?\n(1) untuk ya, (2) untuk tidak\n");
            													scanf("%d", &x);
            													if (x==2){
            													return 0;
																	}
																else if (x==1){
																	system ("cls");
																	return main();
																	}
}
}

int help1(){
	printf("1.Cara penggunaan\n");
	printf("Masukan input sesuai dengan apa yang tertera di menu opsi\n");
	printf("\n2.Error");
	printf("\nError akan terjadi ketika user memasukan input yang tidak sesuai\ndengan pilihan yang ada secara berurutan");
	return main();
}
