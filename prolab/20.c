 #include <stdio.h>
 #include <stdlib.h>

int suhu(),help(), menu, pilih, panjang(), massa(), kembali, celcius(), reamur(), kelvin(), fahreinheit(), informasi();
int kilometer(), hektometer(), dekameter(), meter(), desimeter(), centimeter(), milimeter(), kilogram();
int hektogram(), dekagram(), gram(), desigram(), centigram(), miligram(), input;
float bil, cel_reamur, cel_kel, cel_fahrein;
float reamur_cel, reamur_kel, reamur_fahrein, fahrein_cel, fahrein_kel, fahrein_reamur, kel_cel, kel_reamur, kel_fahrein;
float kilo, hekto, deka, mete, desi, centi, mili;

int main()		//Tampilan utama dari program//
{
    printf("================================================================================================\n");
	printf("||                   SELAMAT DATANG DI PROGRAM KONVERSI SUHU, PANJANG, DAN MASSA              ||\n");
	printf("||                            Oleh: FAQIH AR - 1706042996                                     ||\n");
	printf("||                                  NICHOLAS - 1706043254                                     ||\n");
	printf("================================================================================================");

	printf("\n                        Program ini bertujuan untuk memudahkan Anda dalam mengoversikan\n");
	printf("                                       suhu, panjang, dan massa \n");
	printf("------------------------------------------------------------------------------------------------\n");

	printf("------------------------------------------------------------------------------------------------\n");

    menu:
    printf("\t\t===================================================================\n");
	printf("\t\t||                   Program konversi satuan                     ||\n");
	printf("\t\t||                   Oleh Nicholas dan Faqih                     ||\n");
	printf("\t\t===================================================================\n");
	printf("\t\t|| Masukkan nomor dari menu yang ingin ditampilkan               ||\n");
	printf("\t\t|| 1.Konversi suhu                                               ||\n");
	printf("\t\t|| 2.Konversi panjang                                            ||\n");
	printf("\t\t|| 3.Konversi massa                                              ||\n");
	printf("\t\t|| 4.Informasi                                                   ||\n");
	printf("\t\t|| 5.Help                                                        ||\n");
	printf("\t\t|| 6.Exit                                                        ||\n");
	printf("\t\t===================================================================\n");
	printf("\t\t||   Dimohon untuk tidak memasukkan input selain angka bulat :)  ||\n");
	printf("\t\t===================================================================\n");
   printf("\t\t\t\tAnda memilih menu : ");
   scanf("%d", &menu);
   system("cls");

	if(menu<7)		// Pilihan menu//
	{
		switch (menu)
		{
			case 1:
				suhu();
				break;
			case 2:
				panjang();
				break;
			case 3:
				massa();
				break;
			case 4:
		       	informasi();
		        break;
			case 5:
				help();
				break;
			case 6:
				return 0;
		}
	}
	else		//pesan kesalahan//
	{

		printf("\nInput yang Anda masukan tidak terdapat dalam pilihan!\nSilakan masukan kembali pilihan Anda!\n");
		system("pause");
		system("cls");
		goto menu;

	}
system("cls");		//menghapus apa yang ada di layar//
}

int informasi()		//menu informasi//
{
				printf("\t\t\t===================================================================\n");
			    printf("\t\t\t|| KONVERSI SATUAN v.1.0                                         ||\n");
			    printf("\t\t\t===================================================================\n");
			    printf("\t\t\t||                                                               ||\n");
			    printf("\t\t\t|| Oleh Nicholas dan Faqih Ahmad                                 ||\n");
			    printf("\t\t\t|| Untuk konversi massa, panjang, dan suhu                       ||\n");
			    printf("\t\t\t|| ALL RIGHTS RESERVED & COPYRIGHT 2018                          ||\n");
			    printf("\t\t\t||                                                               ||\n");
		    	printf("\t\t\t===================================================================\n");
		    	printf("\t\t\t|| 99.Kembali                                                    ||\n");
		    	printf("\t\t\t===================================================================\n\n");
		    	printf("\t\t\t\t\t\tPilihan menu : ");
		    	scanf("%d", &kembali);

		    	if(kembali == 99)
		    	{

					system("cls");
					return main();
				}
				else
				{
					printf("===================================================================\n");
					printf("||  Pilihan menu yang dimasukkan salah, silahkan masukkan lagi!  ||\n");
					printf("===================================================================\n");
				}

}

int help()		//menu untuk cara penggunaan//
{
				printf("\t\t\t===================================================================\n");
			    printf("\t\t\t|| CARA PENGGUNAAN PROGRAM                                       ||\n");
			    printf("\t\t\t===================================================================\n");
			    printf("\t\t\t|| Di dalam menu konversi, masukkan angka dari menu konversinya  ||\n");
			    printf("\t\t\t||                                                               ||\n");
			    printf("\t\t\t|| Di dalam sub-menu konversi, dimohon untuk memasukkan angka    ||\n");
			    printf("\t\t\t|| dari satuan awal lalu masukkan angka dari satuan tujuan       ||\n");
			    printf("\t\t\t||                                                               ||\n");
			    printf("\t\t\t|| Lalu memasukkan nilai yang ingin di konversikan               ||\n");
		    	printf("\t\t\t===================================================================\n");
		    	printf("\t\t\t|| 99.Kembali                                                    ||\n");
		    	printf("\t\t\t===================================================================\n\n");
		    	printf("\t\t\t\t\t\tPilihan menu : ");
				scanf("%d", &kembali);

		    	if(kembali == 99)
		    	{

					system("cls");
					return main();
				}
				else
				{
					printf("===================================================================\n");
					printf("||  Pilihan menu yang dimasukkan salah, silahkan masukkan lagi!  ||\n");
					printf("===================================================================\n");
				}

}

int suhu()		//konversi suhu//
{
    input:
    printf("===================================================================\n");
	printf("|| Masukkan nomor dari menu yang ingin dikonversi                ||\n");
	printf("|| 1.Celcius                                                     ||\n");
	printf("|| 2.Reamur                                                      ||\n");
	printf("|| 3.Fahreinheit                                                 ||\n");
	printf("|| 4.Kelvin                                                      ||\n");
	printf("|| 5.Kembali                                                     ||\n");
	printf("===================================================================\n");
   printf("Anda memilih menu : ");
   scanf("%d", &input);
   system("cls");

	if(input<6)
 {
   switch (input)
   {
   	case 1 :
   		celcius();
   		break;
   	case 2 :
   		reamur();
   		break;
   	case 3 :
   		fahreinheit();
   		break;
   	case 4 :
   		kelvin();
   		break;
   	case 5 :
   		return main();
   }

 }
	else
	{
		printf("\nInput yang Anda masukan tidak terdapat dalam pilihan!\nSilakan masukan kembali pilihan Anda!");
		system("pause");
		system("cls");
		goto input;
	}
}

int celcius()		//konversi dari celcius//
{
	pilih:
    printf("===================================================================\n");
	printf("|| Masukkan nomor untuk dikonversikan                            ||\n");
	printf("|| 1.Reamur                                                      ||\n");
	printf("|| 2.Fahreinheit                                                 ||\n");
	printf("|| 3.Kelvin                                                      ||\n");
    printf("|| 4.Kembali                                                     ||\n");
	printf("===================================================================\n");
	printf("||   Dimohon untuk tidak memasukkan input selain angka bulat :)  ||\n");
	printf("===================================================================\n");

    printf("Celcius Konversi ke : ");
    scanf("%d", &pilih);


  if (pilih == 1)
  {
   printf("Masukkan suhu awal anda: ");
   scanf("%f", &bil);
   cel_reamur = (bil * 4) / 5;
   printf("%.2f C = %.2f R ", bil, cel_reamur);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}

  }


  if (pilih == 2)
  {
   printf("Masukkan suhu awal anda: ");
   scanf("%f", &bil);
   cel_fahrein = ((9 * bil) / 5) + 32;
   printf("%.2f C = %.2f F ", bil, cel_fahrein);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 3)
  {
   printf("Masukkan suhu awal anda: ");
   scanf("%f", &bil);
   cel_kel = bil + 273;
   printf("%.2f C = %.2f K ", bil, cel_kel);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 4)
  {
  	return main();
  }

  else
	{
		printf("\nInput yang Anda masukan tidak terdapat dalam pilihan!\nSilakan masukan kembali pilihan Anda!");
		system("pause");
		system("cls");
		goto pilih;
	}


  system("PAUSE");
  system("cls");
}


int reamur()		//konversi dari reamur//
{
    pilih:
    printf("===================================================================\n");
	printf("|| Masukkan nomor untuk dikonversikan                            ||\n");
	printf("|| 1.Celcius                                                     ||\n");
	printf("|| 2.Fahreinheit                                                 ||\n");
	printf("|| 3.Kelvin                                                      ||\n");
	printf("|| 4.Kembali                                                     ||\n");
	printf("===================================================================\n");
	printf("||   Dimohon untuk tidak memasukkan input selain angka bulat :)  ||\n");
	printf("===================================================================\n");

    printf("Reamur Konversi ke : ");
    scanf("%d", &pilih);


  if (pilih == 1)
  {
   printf("Masukkan suhu awal anda: ");
   scanf("%f", &bil);
   reamur_cel = (5 * bil) / 4;
   printf("%.2f R = %.2f F ", bil, reamur_cel);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if (pilih == 2)
  {
   printf("Masukkan suhu awal anda: ");
   scanf("%f", &bil);
   reamur_fahrein = (bil * 9 / 4) + 32;
   printf("%.2f C = %.2f F ", bil, reamur_fahrein);
   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 3)
  {
   printf("Masukkan suhu awal anda: ");
   scanf("%f", &bil);
   reamur_kel = (5 * bil / 4) + 273;
   printf("%.2f C = %.2f K ", bil, reamur_kel);
   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 4)
  {
  	return main();
  }

   else
	{
		printf("\nInput yang Anda masukan tidak terdapat dalam pilihan!\nSilakan masukan kembali pilihan Anda!");
		system("pause");
		system("cls");
		goto pilih;
	}
  system("PAUSE");
  system("cls");
}

int fahreinheit()		//konversi dari fahrenheit//
{
    pilih:
    printf("===================================================================\n");
	printf("|| Masukkan nomor untuk dikonversi                              ||\n");
	printf("|| 1.Celcius                                                    ||\n");
	printf("|| 2.Reamur                                                     ||\n");
	printf("|| 3.Kelvin                                                     ||\n");
	printf("|| 4.Kembali                                                    ||\n");
	printf("===================================================================\n");
	printf("||   Dimohon untuk tidak memasukkan input selain angka bulat :) ||\n");
	printf("===================================================================\n");
  printf("Fahreinheit Konversi ke : ");
  scanf("%d", &pilih);


  if (pilih == 1)
  {
   printf("Masukkan suhu awal anda: ");
   scanf("%f", &bil);
   fahrein_cel = (5 / 9 * bil) - 32;
   printf("%.2f F = %.2f C ", bil, fahrein_cel);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if (pilih == 2)
  {
   printf("Masukkan suhu awal anda: ");
   scanf("%f", &bil);
   fahrein_reamur = (4 / 9 * bil) - 32;
   printf("%.2f F = %.2f R ", bil, fahrein_reamur);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 3)
  {
   printf("Masukkan suhu awal anda: ");
   scanf("%f", &bil);
   fahrein_kel = ((5 / 9 * bil) - 32) + 273;
   printf("%.2f F = %.2f K ", bil, fahrein_kel);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 4)
  {
  	return main();
  }

   else
	{
		printf("\nInput yang Anda masukan tidak terdapat dalam pilihan!\nSilakan masukan kembali pilihan Anda!");
		system("pause");
		system("cls");
		goto pilih;
	}

  system("PAUSE");
  system("cls");

 }

int kelvin()		//konversi dari kelvin//
{
    pilih:
    printf("===================================================================\n");
	printf("|| Masukkan nomor untuk dikonversi                               ||\n");
	printf("|| 1.Celcius                                                     ||\n");
	printf("|| 2.Reamur                                                      ||\n");
	printf("|| 3.Fahreinheit                                                 ||\n");
	printf("|| 4.Kembali                                                     ||\n");
	printf("===================================================================\n");
	printf("||   Dimohon untuk tidak memasukkan input selain angka bulat :)  ||\n");
	printf("===================================================================\n");
  printf("Kelvin Konversi ke : ");
  scanf("%d", &pilih);



  if (pilih == 1)
  {
   printf("Masukkan suhu awal anda: ");
   scanf("%f", &bil);
   kel_cel = 273 - bil;
   printf("%.2f K = %.2f C ", bil, kel_cel);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if (pilih == 2)
  {
   printf("Masukkan suhu awal anda: ");
   scanf("%f", &bil);
   kel_reamur = 4/5 * (bil - 273);
   printf("%.2f K = %.2f R ", bil, kel_reamur);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 3)
  {
   printf("Masukkan suhu awal anda: ");
   scanf("%f", &bil);
   kel_fahrein = (9 / 5 * (bil - 273)) + 32;
   printf("%.2f K = %.2f F ", bil, kel_fahrein);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 4)
  {
  	return main();
  }

 else
	{
		printf("\nInput yang Anda masukan tidak terdapat dalam pilihan!\nSilakan masukan kembali pilihan Anda!");
		system("pause");
		system("cls");
		goto pilih;
	}

  system("PAUSE");
  system("cls");

 }

int panjang()		//Konversi satuan panjang//
{
   input:
    printf("===================================================================\n");
	printf("|| Masukkan nomor dari menu yang ingin dikonversi                ||\n");
	printf("|| 1.Kilometer                                                   ||\n");
	printf("|| 2.Hektometer                                                  ||\n");
	printf("|| 3.Dekameter                                                   ||\n");
	printf("|| 4.Meter                                                       ||\n");
	printf("|| 5.Desimeter                                                   ||\n");
	printf("|| 6.Centimeter                                                  ||\n");
	printf("|| 7.Milimeter                                                   ||\n");
	printf("|| 8.Kembali                                                     ||\n");
	printf("===================================================================\n");
   printf("Anda memilih menu : ");
   scanf("%d", &input);
   system("cls");



	if(input<9)
 {
   switch (input)		//tempat pemilihan menu//
   {
   	case 1 :
   		kilometer();
   		break;
   	case 2 :
   		hektometer();
   		break;
   	case 3 :
   		dekameter();
   		break;
   	case 4 :
   		meter();
   		break;
   	case 5 :
	   desimeter();
	   break;
   	case 6 :
   		centimeter();
   		break;
   	case 7 :
   		milimeter();
   		break;
   	case 8 :
   		return main();
   }

 }
	else
	{

		printf("\nInput yang Anda masukan tidak terdapat dalam pilihan!\nSilakan masukan kembali pilihan Anda!\n");
		system("pause");
		system("cls");
		goto input;
	}
}

int kilometer()	//konversi dari kilometer//
{
	pilih:
    printf("===================================================================\n");
	printf("|| Masukkan nomor dari menu yang ingin dikonversi                ||\n");
	printf("|| 1.Hektometer                                                  ||\n");
	printf("|| 2.Dekameter                                                   ||\n");
	printf("|| 3.Meter                                                       ||\n");
	printf("|| 4.Desimeter                                                   ||\n");
	printf("|| 5.Centimeter                                                  ||\n");
	printf("|| 6.Milimeter                                                   ||\n");
	printf("|| 7.Kembali                                                     ||\n");
	printf("===================================================================\n");
  printf("Kilometer Konversi ke : ");
  scanf("%d", &pilih);


  if (pilih == 1)
  {
   printf("Masukkan panjang awal anda: ");
   scanf("%f", &bil);
   hekto = bil * 10;
   printf("%.2f KM = %.2f HM ", bil, hekto);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if (pilih == 2)
  {
   printf("Masukkan panjang awal anda: ");
   scanf("%f", &bil);
   deka = bil * 100;
   printf("%.2f KM = %.2f DM ", bil, deka);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 3)
  {
   printf("Masukkan panjang awal anda: ");
   scanf("%f", &bil);
   mete = bil * 1000;
   printf("%.2f KM = %.2f M ", bil, mete);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 4)
  {
   printf("Masukkan panjang awal anda: ");
   scanf("%f", &bil);
   desi = bil * 10000;
   printf("%.2f KM = %.2f dM ", bil, desi);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 5)
  {
   printf("Masukkan panjang awal anda: ");
   scanf("%f", &bil);
   centi = bil * 100000;
   printf("%.2f KM = %.2f CM ", bil, centi);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 6)
  {
   printf("Masukkan panjang awal anda: ");
   scanf("%f", &bil);
   mili = bil * 1000000;
   printf("%.2f KM = %.2f MM ", bil, mili);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 7)
  {
  	return main();
  }

  	else
	{
		printf("\nInput yang Anda masukan tidak terdapat dalam pilihan!\nSilakan masukan kembali pilihan Anda!\n");
		system("pause");
		system("cls");
		goto pilih;
	}

  system("PAUSE");
  system("cls");

 }

int hektometer()		//konversi dari hektometer//
{
    pilih:
    printf("===================================================================\n");
	printf("|| Masukkan nomor dari menu yang ingin dikonversi                ||\n");
	printf("|| 1.Kilometer                                                   ||\n");
	printf("|| 2.Dekameter                                                   ||\n");
	printf("|| 3.Meter                                                       ||\n");
	printf("|| 4.Desimeter                                                   ||\n");
	printf("|| 5.Centimeter                                                  ||\n");
	printf("|| 6.Milimeter                                                   ||\n");
	printf("|| 7.Kembali                                                     ||\n");
	printf("===================================================================\n");
  printf("Hektometer Konversi ke : ");
  scanf("%d", &pilih);

  if (pilih == 1)
  {
   printf("Masukkan panjang awal anda: ");
   scanf("%f", &bil);
   kilo = bil / 10;
   printf("%.2f HM = %.2f KM ", bil, kilo);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if (pilih == 2)
  {
   printf("Masukkan panjang awal anda: ");
   scanf("%f", &bil);
   deka = bil * 10;
   printf("%.2f HM = %.2f DM ", bil, deka);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 3)
  {
   printf("Masukkan panjang awal anda: ");
   scanf("%f", &bil);
   mete = bil * 100;
   printf("%.2f HM = %.2f M ", bil, mete);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 4)
  {
   printf("Masukkan panjang awal anda: ");
   scanf("%f", &bil);
   desi = bil * 1000;
   printf("%.2f HM = %.2f dM ", bil, desi);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 5)
  {
   printf("Masukkan panjang awal anda: ");
   scanf("%f", &bil);
   centi = bil * 10000;
   printf("%.2f HM = %.2f CM ", bil, centi);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 6)
  {
   printf("Masukkan panjang awal anda: ");
   scanf("%f", &bil);
   mili = bil * 100000;
   printf("%.2f HM = %.2f MM ", bil, mili);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 7)
  {
  	return main();
  }

  	else
	{
		printf("\nInput yang Anda masukan tidak terdapat dalam pilihan!\nSilakan masukan kembali pilihan Anda!\n");
		system("pause");
		system("cls");
		goto pilih;
	}


  system("PAUSE");
  system("cls");

 }

int dekameter()		//konversi dari dekameter//
{
    pilih:
    printf("===================================================================\n");
	printf("|| Masukkan nomor dari menu yang ingin dikonversi                ||\n");
	printf("|| 1.Kilometer                                                   ||\n");
	printf("|| 2.Hektometer                                                  ||\n");
	printf("|| 3.Meter                                                       ||\n");
	printf("|| 4.Desimeter                                                   ||\n");
	printf("|| 5.Centimeter                                                  ||\n");
	printf("|| 6.Milimeter                                                   ||\n");
	printf("|| 7.Kembali                                                     ||\n");
	printf("===================================================================\n");
  printf("Dekameter Konversi ke : ");
  scanf("%d", &pilih);

  if (pilih == 1)
  {
   printf("Masukkan panjang awal anda: ");
   scanf("%f", &bil);
   kilo = bil / 100;
   printf("%.2f DM = %.2f KM ", bil, kilo);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if (pilih == 2)
  {
   printf("Masukkan panjang awal anda: ");
   scanf("%f", &bil);
   hekto = bil / 10;
   printf("%.2f DM = %.2f HM ", bil, hekto);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 3)
  {
   printf("Masukkan panjang awal anda: ");
   scanf("%f", &bil);
   mete = bil * 10;
   printf("%.2f DM = %.2f M ", bil, mete);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 4)
  {
   printf("Masukkan panjang awal anda: ");
   scanf("%f", &bil);
   desi = bil * 100;
   printf("%.2f DM = %.2f dM ", bil, desi);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 5)
  {
   printf("Masukkan panjang awal anda: ");
   scanf("%f", &bil);
   centi = bil * 1000;
   printf("%.2f DM = %.2f CM ", bil, centi);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 6)
  {
   printf("Masukkan panjang awal anda: ");
   scanf("%f", &bil);
   mili = bil * 10000;
   printf("%.2f DM = %.2f MM ", bil, mili);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 7)
  {
  	return main();
  }


  	else
	{
		printf("\nInput yang Anda masukan tidak terdapat dalam pilihan!\nSilakan masukan kembali pilihan Anda!\n");
		system("pause");
		system("cls");
		goto pilih;
	}

  system("PAUSE");
  system("cls");

 }

int meter()		//konversi dari meter//
{
	pilih:
    printf("===================================================================\n");
	printf("|| Masukkan nomor dari menu yang ingin dikonversi                ||\n");
	printf("|| 1.Kilometer                                                   ||\n");
	printf("|| 2.Hektometer                                                  ||\n");
	printf("|| 3.Dekameter                                                   ||\n");
	printf("|| 4.Desimeter                                                   ||\n");
	printf("|| 5.Centimeter                                                  ||\n");
	printf("|| 6.Milimeter                                                   ||\n");
	printf("|| 7.Kembali                                                     ||\n");
	printf("===================================================================\n");
  printf("Meter Konversi ke : ");
  scanf("%d", &pilih);

  if (pilih == 1)
  {
   printf("Masukkan panjang awal anda: ");
   scanf("%f", &bil);
   kilo = bil / 1000;
   printf("%.2f M = %.2f KM ", bil, kilo);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if (pilih == 2)
  {
   printf("Masukkan panjang awal anda: ");
   scanf("%f", &bil);
   hekto = bil / 100;
   printf("%.2f M = %.2f HM ", bil, hekto);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 3)
  {
   printf("Masukkan panjang awal anda: ");
   scanf("%f", &bil);
   deka = bil / 10;
   printf("%.2f M = %.2f DM ", bil, deka);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 4)
  {
   printf("Masukkan panjang awal anda: ");
   scanf("%f", &bil);
   desi = bil * 10;
   printf("%.2f M = %.2f dM ", bil, desi);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 5)
  {
   printf("Masukkan panjang awal anda: ");
   scanf("%f", &bil);
   centi = bil * 100;
   printf("%.2f M = %.2f CM ", bil, centi);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 6)
  {
   printf("Masukkan panjang awal anda: ");
   scanf("%f", &bil);
   mili = bil * 1000;
   printf("%.2f M = %.2f MM ", bil, mili);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 7)
  {
  	return main();
  }

  	else
	{
		printf("\nInput yang Anda masukan tidak terdapat dalam pilihan!\nSilakan masukan kembali pilihan Anda!\n");
		system("pause");
		system("cls");
		goto pilih;
	}


  system("PAUSE");
  system("cls");

 }

int desimeter()		//konversi dari desimeter//
{
	pilih:
    printf("===================================================================\n");
	printf("|| Masukkan nomor dari menu yang ingin dikonversi                ||\n");
	printf("|| 1.Kilometer                                                   ||\n");
	printf("|| 2.Hektometer                                                  ||\n");
	printf("|| 3.Dekameter                                                   ||\n");
	printf("|| 4.Meter                                                       ||\n");
	printf("|| 5.Centimeter                                                  ||\n");
	printf("|| 6.Milimeter                                                   ||\n");
	printf("|| 7.Kembali                                                     ||\n");
	printf("===================================================================\n");
  printf("Desimeter Konversi ke : ");
  scanf("%d", &pilih);


  if (pilih == 1)
  {
   printf("Masukkan panjang awal anda: ");
   scanf("%f", &bil);
   kilo = bil / 10000;
   printf("%.2f dM = %.2f KM ", bil, kilo);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if (pilih == 2)
  {
   printf("Masukkan panjang awal anda: ");
   scanf("%f", &bil);
   hekto = bil / 1000;
   printf("%.2f dM = %.2f HM ", bil, hekto);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 3)
  {
   printf("Masukkan panjang awal anda: ");
   scanf("%f", &bil);
   deka = bil / 100;
   printf("%.2f dM = %.2f DM ", bil, deka);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 4)
  {
   printf("Masukkan panjang awal anda: ");
   scanf("%f", &bil);
   mete = bil / 10;
   printf("%.2f dM = %.2f M ", bil, mete);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 5)
  {
   printf("Masukkan panjang awal anda: ");
   scanf("%f", &bil);
   centi = bil * 10;
   printf("%.2f dM = %.2f CM ", bil, centi);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 6)
  {
   printf("Masukkan panjang awal anda: ");
   scanf("%f", &bil);
   mili = bil * 100;
   printf("%.2f dM = %.2f MM ", bil, mili);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 7)
  {
  	return main();
  }

  	else
	{
		printf("\nInput yang Anda masukan tidak terdapat dalam pilihan!\nSilakan masukan kembali pilihan Anda!\n");
		system("pause");
		system("cls");
		goto pilih;
	}


  system("PAUSE");
  system("cls");

 }
int centimeter()		//konversi dari centimeter//
{
	pilih:
    printf("===================================================================\n");
	printf("|| Masukkan nomor dari menu yang ingin dikonversi                ||\n");
	printf("|| 1.Kilometer                                                   ||\n");
	printf("|| 2.Hektometer                                                  ||\n");
	printf("|| 3.Dekameter                                                   ||\n");
	printf("|| 4.Meter                                                       ||\n");
	printf("|| 5.Desimeter                                                   ||\n");
	printf("|| 6.Milimeter                                                   ||\n");
	printf("|| 7.Kembali                                                     ||\n");
	printf("===================================================================\n");
  printf("Centimeter Konversi ke : ");
  scanf("%d", &pilih);

  if (pilih == 1)
  {
   printf("Masukkan panjang awal anda: ");
   scanf("%f", &bil);
   kilo = bil / 100000;
   printf("%.2f CM = %.2f KM ", bil, kilo);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if (pilih == 2)
  {
   printf("Masukkan panjang awal anda: ");
   scanf("%f", &bil);
   hekto = bil / 10000;
   printf("%.2f CM = %.2f HM ", bil, hekto);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 3)
  {
   printf("Masukkan panjang awal anda: ");
   scanf("%f", &bil);
   deka = bil / 1000;
   printf("%.2f CM = %.2f DM ", bil, deka);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 4)
  {
   printf("Masukkan panjang awal anda: ");
   scanf("%f", &bil);
   mete = bil / 100;
   printf("%.2f CM = %.2f M ", bil, mete);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 5)
  {
   printf("Masukkan panjang awal anda: ");
   scanf("%f", &bil);
   desi = bil / 10;
   printf("%.2f CM = %.2f dM ", bil, desi);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 6)
  {
   printf("Masukkan panjang awal anda: ");
   scanf("%f", &bil);
   mili = bil * 10;
   printf("%.2f CM = %.2f MM ", bil, mili);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 7)
  {
  	return main();
  }

  	else
	{
		printf("\nInput yang Anda masukan tidak terdapat dalam pilihan!\nSilakan masukan kembali pilihan Anda!\n");
		system("pause");
		system("cls");
		goto pilih;
	}

  system("PAUSE");
  system("cls");

 }

int milimeter()		//konversi dari milimeter//
{
	pilih:
    printf("===================================================================\n");
	printf("|| Masukkan nomor dari menu yang ingin dikonversi                ||\n");
	printf("|| 1.Kilometer                                                   ||\n");
	printf("|| 2.Hektometer                                                  ||\n");
	printf("|| 3.Dekameter                                                   ||\n");
	printf("|| 4.Meter                                                       ||\n");
	printf("|| 5.Desimeter                                                   ||\n");
	printf("|| 6.Centimeter                                                  ||\n");
	printf("|| 7.Kembali                                                     ||\n");
	printf("===================================================================\n");
  printf("Milimeter Konversi ke : ");
  scanf("%d", &pilih);

  if (pilih == 1)
  {
   printf("Masukkan panjang awal anda: ");
   scanf("%f", &bil);
   kilo = bil / 1000000;
   printf("%.2f MM = %.2f KM ", bil, kilo);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if (pilih == 2)
  {
   printf("Masukkan panjang awal anda: ");
   scanf("%f", &bil);
   hekto = bil / 100000;
   printf("%.2f MM = %.2f HM ", bil, hekto);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 3)
  {
   printf("Masukkan panjang awal anda: ");
   scanf("%f", &bil);
   deka = bil / 10000;
   printf("%.2f MM = %.2f DM ", bil, deka);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 4)
  {
   printf("Masukkan panjang awal anda: ");
   scanf("%f", &bil);
   mete = bil / 1000;
   printf("%.2f MM = %.2f M ", bil, meter);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 5)
  {
   printf("Masukkan panjang awal anda: ");
   scanf("%f", &bil);
   desi = bil / 100;
   printf("%.2f MM = %.2f dM ", bil, desi);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 6)
  {
   printf("Masukkan panjang awal anda: ");
   scanf("%f", &bil);
   centi = bil / 10;
   printf("%.2f MM = %.2f CM ", bil, centi);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }


  if(pilih == 7)
  {
  	return main();
  }

  	else
	{
		printf("\nInput yang Anda masukan tidak terdapat dalam pilihan!\nSilakan masukan kembali pilihan Anda!\n");
		system("pause");
		system("cls");
		goto pilih;
	}


  system("PAUSE");
  system("cls");

 }


int massa()		//konversi satuan massa//
{
   input:
    printf("===================================================================\n");
	printf("|| Masukkan nomor dari menu yang ingin dikonversi               ||\n");
	printf("|| 1.Kilogram                                                   ||\n");
	printf("|| 2.Hektogram                                                  ||\n");
	printf("|| 3.Dekagram                                                   ||\n");
	printf("|| 4.Gram                                                       ||\n");
	printf("|| 5.Desigram                                                   ||\n");
	printf("|| 6.Centigram                                                  ||\n");
	printf("|| 7.Miligram                                                   ||\n");
	printf("|| 8.Kembali                                                    ||\n");
	printf("===================================================================\n");
   printf("Anda memilih menu : ");
   scanf("%d", &input);
   system("cls");



	if(input<9)
 {
   switch (input)	//pemilihan menu konversi massa//
   {
   	case 1 :
   		kilogram();
   		break;
   	case 2 :
   		hektogram();
   		break;
   	case 3 :
   		dekagram();
   		break;
   	case 4 :
   		gram();
   		break;
   	case 5 :
	   desigram();
	   break;
   	case 6 :
   		centigram();
   		break;
   	case 7 :
   		miligram();
   		break;
   	case 8 :
   		return main();
   }

 }
	else
	{

		printf("\nInput yang Anda masukan tidak terdapat dalam pilihan!\nSilakan masukan kembali pilihan Anda!\n");
		system("pause");
		system("cls");
		goto input;
	}
}

int kilogram()		//konversi dari kilogram//
{
	pilih:
    printf("===================================================================\n");
	printf("|| Masukkan nomor dari menu yang ingin dikonversi               ||\n");
	printf("|| 1.Hektogram                                                  ||\n");
	printf("|| 2.Dekagram                                                   ||\n");
	printf("|| 3.Gram                                                       ||\n");
	printf("|| 4.Desigram                                                   ||\n");
	printf("|| 5.Centigram                                                  ||\n");
	printf("|| 6.Miligram                                                   ||\n");
	printf("|| 7.Kembali                                                    ||\n");
	printf("===================================================================\n");
  printf("Kilogram Konversi ke : ");
  scanf("%d", &pilih);


  if (pilih == 1)
  {
   printf("Masukkan massa awal anda: ");
   scanf("%f", &bil);
   hekto = bil * 10;
   printf("%.2f KG = %.2f HG ", bil, hekto);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if (pilih == 2)
  {
   printf("Masukkan massa awal anda: ");
   scanf("%f", &bil);
   deka = bil * 100;
   printf("%.2f KG = %.2f DG ", bil, deka);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 3)
  {
   printf("Masukkan massa awal anda: ");
   scanf("%f", &bil);
   mete = bil * 1000;
   printf("%.2f KG = %.2f G ", bil, mete);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 4)
  {
   printf("Masukkan massa awal anda: ");
   scanf("%f", &bil);
   desi = bil * 10000;
   printf("%.2f KG = %.2f dG ", bil, desi);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 5)
  {
   printf("Masukkan massa awal anda: ");
   scanf("%f", &bil);
   centi = bil * 100000;
   printf("%.2f KG = %.2f CG ", bil, centi);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 6)
  {
   printf("Masukkan massa awal anda: ");
   scanf("%f", &bil);
   mili = bil * 1000000;
   printf("%.2f KG = %.2f MG ", bil, mili);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 7)
  {
  	return main();
  }

  	else
	{
		printf("\nInput yang Anda masukan tidak terdapat dalam pilihan!\nSilakan masukan kembali pilihan Anda!\n");
		system("pause");
		system("cls");
		goto pilih;
	}

  system("PAUSE");
  system("cls");

 }

int hektogram()		//konversi dari hektogram//
{
    pilih:
    printf("===================================================================\n");
	printf("|| Masukkan nomor dari menu yang ingin dikonversi               ||\n");
	printf("|| 1.Kilogram                                                   ||\n");
	printf("|| 2.Dekagram                                                   ||\n");
	printf("|| 3.Gram                                                       ||\n");
	printf("|| 4.Desigram                                                   ||\n");
	printf("|| 5.Centigram                                                  ||\n");
	printf("|| 6.Miligram                                                   ||\n");
	printf("|| 7.Kembali                                                    ||\n");
	printf("===================================================================\n");
  printf("Hektogram Konversi ke : ");
  scanf("%d", &pilih);

  if (pilih == 1)
  {
   printf("Masukkan massa awal anda: ");
   scanf("%f", &bil);
   kilo = bil / 10;
   printf("%.2f HG = %.2f KG ", bil, kilo);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if (pilih == 2)
  {
   printf("Masukkan massa awal anda: ");
   scanf("%f", &bil);
   deka = bil * 10;
   printf("%.2f HG = %.2f DG ", bil, deka);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 3)
  {
   printf("Masukkan massa awal anda: ");
   scanf("%f", &bil);
   mete = bil * 100;
   printf("%.2f HG = %.2f G ", bil, mete);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 4)
  {
   printf("Masukkan massa awal anda: ");
   scanf("%f", &bil);
   desi = bil * 1000;
   printf("%.2f HG = %.2f dG ", bil, desi);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 5)
  {
   printf("Masukkan massa awal anda: ");
   scanf("%f", &bil);
   centi = bil * 10000;
   printf("%.2f HG = %.2f CG ", bil, centi);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 6)
  {
   printf("Masukkan massa awal anda: ");
   scanf("%f", &bil);
   mili = bil * 100000;
   printf("%.2f HG = %.2f MG ", bil, mili);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 7)
  {
  	return main();
  }

  	else
	{
		printf("\nInput yang Anda masukan tidak terdapat dalam pilihan!\nSilakan masukan kembali pilihan Anda!\n");
		system("pause");
		system("cls");
		goto pilih;
	}


  system("PAUSE");
  system("cls");

 }

int dekagram()		//konversi dari dekagram//
{
    pilih:
    printf("===================================================================\n");
	printf("|| Masukkan nomor dari menu yang ingin dikonversi               ||\n");
	printf("|| 1.Kilogram                                                   ||\n");
	printf("|| 2.Hektogram                                                  ||\n");
	printf("|| 3.Gram                                                       ||\n");
	printf("|| 4.Desigram                                                   ||\n");
	printf("|| 5.Centigram                                                  ||\n");
	printf("|| 6.Miligram                                                   ||\n");
	printf("|| 7.Kembali                                                    ||\n");
	printf("===================================================================\n");
  printf("Dekagram Konversi ke : ");
  scanf("%d", &pilih);

  if (pilih == 1)
  {
   printf("Masukkan massa awal anda: ");
   scanf("%f", &bil);
   kilo = bil / 100;
   printf("%.2f DG = %.2f KG ", bil, kilo);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if (pilih == 2)
  {
   printf("Masukkan massa awal anda: ");
   scanf("%f", &bil);
   hekto = bil / 10;
   printf("%.2f DG = %.2f HG ", bil, hekto);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 3)
  {
   printf("Masukkan massa awal anda: ");
   scanf("%f", &bil);
   mete = bil * 10;
   printf("%.2f DG = %.2f G ", bil, mete);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 4)
  {
   printf("Masukkan massa awal anda: ");
   scanf("%f", &bil);
   desi = bil * 100;
   printf("%.2f DG = %.2f dG ", bil, desi);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 5)
  {
   printf("Masukkan massa awal anda: ");
   scanf("%f", &bil);
   centi = bil * 1000;
   printf("%.2f DG = %.2f CG ", bil, centi);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 6)
  {
   printf("Masukkan massa awal anda: ");
   scanf("%f", &bil);
   mili = bil * 10000;
   printf("%.2f DG = %.2f MG ", bil, mili);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 7)
  {
  	return main();
  }


  	else
	{
		printf("\nInput yang Anda masukan tidak terdapat dalam pilihan!\nSilakan masukan kembali pilihan Anda!\n");
		system("pause");
		system("cls");
		goto pilih;
	}

  system("PAUSE");
  system("cls");

 }

int gram()		//konversi dari gram//
{
	pilih:
    printf("===================================================================\n");
	printf("|| Masukkan nomor dari menu yang ingin dikonversi               ||\n");
	printf("|| 1.Kilogram                                                   ||\n");
	printf("|| 2.Hektogram                                                  ||\n");
	printf("|| 3.Dekagram                                                   ||\n");
	printf("|| 4.Desigram                                                   ||\n");
	printf("|| 5.Centigram                                                  ||\n");
	printf("|| 6.Miligram                                                   ||\n");
	printf("|| 7.Kembali                                                    ||\n");
	printf("===================================================================\n");
  printf("Gram Konversi ke : ");
  scanf("%d", &pilih);

  if (pilih == 1)
  {
   printf("Masukkan massa awal anda: ");
   scanf("%f", &bil);
   kilo = bil / 1000;
   printf("%.2f G = %.2f KG ", bil, kilo);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if (pilih == 2)
  {
   printf("Masukkan massa awal anda: ");
   scanf("%f", &bil);
   hekto = bil / 100;
   printf("%.2f G = %.2f HG ", bil, hekto);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 3)
  {
   printf("Masukkan massa awal anda: ");
   scanf("%f", &bil);
   deka = bil / 10;
   printf("%.2f G = %.2f DG ", bil, deka);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 4)
  {
   printf("Masukkan massa awal anda: ");
   scanf("%f", &bil);
   desi = bil * 10;
   printf("%.2f G = %.2f dG ", bil, desi);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 5)
  {
   printf("Masukkan massa awal anda: ");
   scanf("%f", &bil);
   centi = bil * 100;
   printf("%.2f G = %.2f CG ", bil, centi);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 6)
  {
   printf("Masukkan massa awal anda: ");
   scanf("%f", &bil);
   mili = bil * 1000;
   printf("%.2f G = %.2f MG ", bil, mili);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 7)
  {
  	return main();
  }

  	else
	{
		printf("\nInput yang Anda masukan tidak terdapat dalam pilihan!\nSilakan masukan kembali pilihan Anda!\n");
		system("pause");
		system("cls");
		goto pilih;
	}


  system("PAUSE");
  system("cls");

 }

int desigram()		//konversi dari desigram//
{
	pilih:
    printf("===================================================================\n");
	printf("|| Masukkan nomor dari menu yang ingin dikonversi               ||\n");
	printf("|| 1.Kilogram                                                   ||\n");
	printf("|| 2.Hektogram                                                  ||\n");
	printf("|| 3.Dekagram                                                   ||\n");
	printf("|| 4.Gram                                                       ||\n");
	printf("|| 5.Centigram                                                  ||\n");
	printf("|| 6.Miligram                                                   ||\n");
	printf("|| 7.Kembali                                                    ||\n");
	printf("===================================================================\n");
  printf("Desigram Konversi ke : ");
  scanf("%d", &pilih);


  if (pilih == 1)
  {
   printf("Masukkan massa awal anda: ");
   scanf("%f", &bil);
   kilo = bil / 10000;
   printf("%.2f dG = %.2f KG ", bil, kilo);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if (pilih == 2)
  {
   printf("Masukkan massa awal anda: ");
   scanf("%f", &bil);
   hekto = bil / 1000;
   printf("%.2f dG = %.2f HG ", bil, hekto);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 3)
  {
   printf("Masukkan massa awal anda: ");
   scanf("%f", &bil);
   deka = bil / 100;
   printf("%.2f dG = %.2f DG ", bil, deka);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 4)
  {
   printf("Masukkan massa awal anda: ");
   scanf("%f", &bil);
   mete = bil / 10;
   printf("%.2f dG = %.2f G ", bil, mete);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 5)
  {
   printf("Masukkan massa awal anda: ");
   scanf("%f", &bil);
   centi = bil * 10;
   printf("%.2f dG = %.2f CG ", bil, centi);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 6)
  {
   printf("Masukkan massa awal anda: ");
   scanf("%f", &bil);
   mili = bil * 100;
   printf("%.2f dG = %.2f MG ", bil, mili);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 7)
  {
  	return main();
  }

  	else
	{
		printf("\nInput yang Anda masukan tidak terdapat dalam pilihan!\nSilakan masukan kembali pilihan Anda!\n");
		system("pause");
		system("cls");
		goto pilih;
	}


  system("PAUSE");
  system("cls");

 }
int centigram()		//konversi dari centigram//
{
	pilih:
    printf("===================================================================\n");
	printf("|| Masukkan nomor dari menu yang ingin dikonversi               ||\n");
	printf("|| 1.Kilogram                                                   ||\n");
	printf("|| 2.Hektogram                                                  ||\n");
	printf("|| 3.Dekagram                                                   ||\n");
	printf("|| 4.Gram                                                       ||\n");
	printf("|| 5.Desigram                                                   ||\n");
	printf("|| 6.Miligram                                                   ||\n");
	printf("|| 7.Kembali                                                    ||\n");
	printf("===================================================================\n");
  printf("Centigram Konversi ke : ");
  scanf("%d", &pilih);

  if (pilih == 1)
  {
   printf("Masukkan panjang awal anda: ");
   scanf("%f", &bil);
   kilo = bil / 100000;
   printf("%.2f CG = %.2f KG ", bil, kilo);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if (pilih == 2)
  {
   printf("Masukkan masssa awal anda: ");
   scanf("%f", &bil);
   hekto = bil / 10000;
   printf("%.2f CG = %.2f HG ", bil, hekto);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 3)
  {
   printf("Masukkan massa awal anda: ");
   scanf("%f", &bil);
   deka = bil / 1000;
   printf("%.2f CG = %.2f DG ", bil, deka);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 4)
  {
   printf("Masukkan massa awal anda: ");
   scanf("%f", &bil);
   mete = bil / 100;
   printf("%.2f CG = %.2f G ", bil, mete);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 5)
  {
   printf("Masukkan massa awal anda: ");
   scanf("%f", &bil);
   desi = bil / 10;
   printf("%.2f CG = %.2f dG ", bil, desi);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 6)
  {
   printf("Masukkan massa awal anda: ");
   scanf("%f", &bil);
   mili = bil * 10;
   printf("%.2f CG = %.2f MG ", bil, mili);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 7)
  {
  	return main();
  }

  	else
	{
		printf("\nInput yang Anda masukan tidak terdapat dalam pilihan!\nSilakan masukan kembali pilihan Anda!\n");
		system("pause");
		system("cls");
		goto pilih;
	}

  system("PAUSE");
  system("cls");

 }

int miligram()		//konversi dari miligram//
{
	pilih:
    printf("===================================================================\n");
	printf("|| Masukkan nomor dari menu yang ingin dikonversi                ||\n");
	printf("|| 1.Kilometer                                                   ||\n");
	printf("|| 2.Hektometer                                                  ||\n");
	printf("|| 3.Dekameter                                                   ||\n");
	printf("|| 4.Meter                                                       ||\n");
	printf("|| 5.Desimeter                                                   ||\n");
	printf("|| 6.Centimeter                                                  ||\n");
	printf("|| 7.Kembali                                                     ||\n");
	printf("===================================================================\n");
  printf("Miligram Konversi ke : ");
  scanf("%d", &pilih);

  if (pilih == 1)
  {
   printf("Masukkan massa awal anda: ");
   scanf("%f", &bil);
   kilo = bil / 1000000;
   printf("%.2f MG = %.2f KG ", bil, kilo);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if (pilih == 2)
  {
   printf("Masukkan massa awal anda: ");
   scanf("%f", &bil);
   hekto = bil / 100000;
   printf("%.2f MG = %.2f HG ", bil, hekto);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 3)
  {
   printf("Masukkan massa awal anda: ");
   scanf("%f", &bil);
   deka = bil / 10000;
   printf("%.2f MG = %.2f DG ", bil, deka);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 4)
  {
   printf("Masukkan massa awal anda: ");
   scanf("%f", &bil);
   mete = bil / 1000;
   printf("%.2f MG = %.2f G ", bil, meter);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 5)
  {
   printf("Masukkan massa awal anda: ");
   scanf("%f", &bil);
   desi = bil / 100;
   printf("%.2f MG = %.2f dG ", bil, desi);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }

  if(pilih == 6)
  {
   printf("Masukkan massa awal anda: ");
   scanf("%f", &bil);
   centi = bil / 10;
   printf("%.2f MG = %.2f CG ", bil, centi);

   printf("\n\n===================================================================\n");
	printf("|| Apakah anda ingin melakukan konversi lagi ?                   ||\n");
	printf("===================================================================\n");
	printf("|| 1. Iya                                                        ||\n");
	printf("|| 0. Tidak                                                      ||\n");
	printf("===================================================================\n");


		printf("Masukkan pilihan : ");
		scanf("%d", &kembali);
		system("cls");
			if (kembali==1)
		{
			return main();
		}
			else if(kembali==0)
		{
			return 0;
		}
  }


  if(pilih == 7)
  {
  	return main();
  }

  	else
	{
		printf("\nInput yang Anda masukan tidak terdapat dalam pilihan!\nSilakan masukan kembali pilihan Anda!\n");
		system("pause");
		system("cls");
		goto pilih;
	}


  system("PAUSE");
  system("cls");

 }
