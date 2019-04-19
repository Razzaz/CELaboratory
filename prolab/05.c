#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

float mtr (float b);//modular untuk menghitung biaya parkir motor
float mbl (float b);//modular untuk menghitung biaya parkir mobil
float bis (float b);//modular untuk menghitung biaya parkir bus
float trk (float b);//modular untuk menghitung biaya parkir truk
int back (int b, int c);//modular untuk menghitung kembalian
int menu(), system();//menu = modular menu utama; system = fungsi untuk memerintah system;
int main(){
int motor=0,mobil=0,bus=0,truk=0;//jumlah kendaraan di tempat parkir
menu(motor, mobil, bus, truk);

}
int x,y,jenis,nominal,bayar;//x = uang yang ditambahkan (jika pembayaran kurang); y= kembalian; bayar = biaya yang harus dibayar; nominal = uang yang telah dibayar;
float parkir;//parkir = lama parkir (dalam jam)
char tanya,a[20];//tanya = pilihan iya/tidak (y/n); a = nomor kendaraan;
int menu(int motor, int mobil, int bus, int truk)

{
int pil;
printf("=====================================================================\n");
printf("|                                                                   |\n");
printf("|                           APLIKASI PARKIR                         |\n");
printf("|                                                                   |\n");
printf("=====================================================================\n");
printf("Berikut adalah menu yang tersedia: \n");
printf("[1]     Menambahkan Sepeda Motor\n");
printf("[2]     Menambahkan Mobil\n");
printf("[3]     Menambahkan Bus\n");
printf("[4]     Menambahkan Truk\n");
printf("[5]     Menampilkan Jumlah dan Kapasitas Kendaraan Parkir\n");
printf("[6]     Kendaraan Keluar\n");
printf("[7]     Help\n");
printf("[0]     Keluar\n");
printf("Masukkan tombol menu yang sesuai: ");
scanf("%d", &pil);
switch (pil){
case 1 :
    if(motor<25){
        motor++;
        printf("Sekarang, jumlah motor menjadi %d\n", motor);
    }
    else{
        printf("Maaf, tidak bisa parkir motor di sini\n");
    }
    printf("\n");
    system("pause");
    system("cls");
    return menu(motor, mobil, bus, truk);
    break;
case 2 :
    if(mobil<10){
        mobil++;
        printf("Sekarang, jumlah mobil menjadi %d\n", mobil);
    }
    else{
        printf("Maaf, tidak bisa parkir mobil di sini\n");
    }
    printf("\n");
    system("pause");
    system("cls");
    return menu(motor, mobil, bus, truk);
    break;
case 3 :
    if(bus<5){
        bus++;
        printf("Sekarang, jumlah bus menjadi %d\n", bus);
    }
    else{
        printf("Maaf, tidak bisa parkir bus di sini\n");
    }
    printf("\n");
    system("pause");
    system("cls");
    return menu(motor, mobil, bus, truk);
    break;
case 4 :
    if(truk<3){
        truk++;
        printf("Sekarang, jumlah truk menjadi %d\n", truk);
    }
    else{
        printf("Maaf, tidak bisa parkir truk di sini\n");
    }
    printf("\n");
    system("pause");
    system("cls");
    return menu(motor, mobil, bus, truk);
    break;
case 5 :
    printf("\n");
    printf("List Kendaraan di tempat parkir\n");
    printf("Sepeda motor    : %d\n", motor);
    printf("Kapasitas       : 25\n");
    printf("\n");
    printf("Mobil           : %d\n", mobil);
    printf("Kapasitas       : 10\n");
    printf("\n");
    printf("Bus             : %d\n", bus);
    printf("Kapasitas       : 5\n");
    printf("\n");
    printf("Truk            : %d\n", truk);
    printf("Kapasitas       : 3\n");
    printf("\n");
    system("pause");
    system("cls");
    return menu(motor, mobil, bus, truk);
    break;
case 6 :
	if ( motor !=0 || mobil !=0 || bus !=0 || truk !=0)
	{

	printf ("\t\t\t=========================================================================\n");
	printf ("\n					Kategori Kendaraan dan Tarifnya :");
	printf ("\n						1.Motor : 2000/jam ");
	printf ("\n						2.Mobil : 5000/jam ");
	printf ("\n						3.Bus   : 7000/jam ");
	printf ("\n						4.Truk  : 10000/jam ");
	printf ("\n				Masukkan Jenis Kendaraan Anda (Pilih Berdasarkan Nomor) :");
	scanf  ("%d", &jenis);
	printf ("\t\t\t=========================================================================\n");
	switch (jenis)
	{
		case 1 :
			if (motor<=25 && motor!=0)
				{
					printf ("\nMasukkan Plat Nomor Anda (tulis tanpa spasi)    : ");
					scanf("%s", &a);
					printf ("\nBarapa lama Anda parkir /jam                    : ");
					scanf  ("%f", &parkir);
					printf ("\nKendaraan berplat nomor                         : %s", a);
					bayar = mtr(parkir);
					printf ("\nTotal pembayaran anda adalah                    : %d", bayar);
					printf ("\nMasukkan nominal pembayaran                     : " );
					scanf  ("%d", &nominal);
					y=back(nominal,bayar);
					printf ("\n");
					while (y<0){
						printf ("Uang yang Anda bayarkan                         : %d \n", nominal);
						printf ("\n---------------------Maaf, uang Anda kurang------------------------\n");
						printf ("\nSilahkan tambahkan nominal pembayaran           : " );
					    scanf  ("%d", &x);
					    nominal=nominal+x;
					    y=back(nominal,bayar);
					    printf ("\n");
					}
					printf ("\nKembalian Anda                                  : %d", y);
					printf("\n===========================================");
					printf ("\nApakah Anda Ingin Mencetak Struknya? (Y?N)");
					scanf ("%s", &tanya);
						if (tanya=='Y' || tanya=='y')
						{
							system("cls");
							printf ("--------------------------------------------------------------------------\n");
							printf ("                         Kendaraan berplat nomor        : %s              \n", a);
							printf ("                         Jenis kendaraan Anda           : Motor           \n");
							printf ("                         Durasi parkir/jam              : %.2f            \n", parkir);
							printf ("                         Total yang harus dibayarkan    : %d              \n", bayar);
							printf ("                         Nominal pembayaran anda        : %d              \n", nominal);
							printf ("                         Kembalian anda                 : %d              \n", y);
							printf ("\n--------------------------------------------------------------------------\n");
							printf ("                         Terimakasih atas pembayarannya");
							printf ("\n--------------------------------------------------------------------------\n");
							system("pause");
							system("cls");
						}
						else
						{
							system("cls");
							printf ("\n--------------------------------------------------------------------------\n");
							printf ("                         Terimakasih atas pembayarannya");
							printf ("\n--------------------------------------------------------------------------\n");
							system("pause");
							system("cls");
						}
				}
			else
			{
				system("cls");
				printf ("\n\t\t\t--------------------------------------------------------------------------\n");
				printf ("\t\t\t                Maaf, Tidak Ada Motor yang Parkir");
				printf ("\n\t\t\t--------------------------------------------------------------------------\n");
				system("pause");
				system("cls");
			}
			motor=motor-1;
			if (motor<0)
				motor=0;
			break;
		case 2 :
			if (mobil<=10 && mobil!=0)
				{
					printf ("\nMasukkan Plat Nomor Anda (tulis tanpa spasi)    : ");
					scanf("%s", &a);
					printf ("\nBarapa lama Anda parkir /jam                    : ");
					scanf  ("%f", &parkir);
					printf ("\nKendaraan berplat nomor                         : %s", a);
					bayar = mbl (parkir);
					printf ("\nTotal pembayaran Anda adalah                    : %d", bayar);
					printf ("\nMasukkan nominal pembayaran                     : " );
					scanf (" %d",&nominal);
					y=back(nominal,bayar);
					printf ("\n");
					while (y<0){
						printf ("Uang yang Anda bayarkan                         : %d \n", nominal);
						printf ("\n---------------------Maaf, uang Anda kurang------------------------\n");
						printf ("\nSilahkan tambahkan nominal pembayaran           : " );
					    scanf  ("%d", &x);
					    nominal=nominal+x;
					    y=back(nominal,bayar);
					    printf ("\n");
					}
					printf ("\nKembalian Anda                                  : %d", y);
					printf("\n===========================================");
					printf ("\nApakah Anda ingin mencetak struknya? (Y?N) ");
					scanf ("%s", &tanya);
						if (tanya=='Y' || tanya=='y')
						{
							system("cls");
							printf ("--------------------------------------------------------------------------\n");
							printf ("                         Kendaraan berplat nomor        : %s              \n", a);
							printf ("                         Jenis kendaraan Anda           : Mobil           \n");
							printf ("                         Durasi parkir/jam              : %.2f            \n", parkir);
							printf ("                         Total yang harus dibayarkan    : %d              \n", bayar);
							printf ("                         Nominal pembayaran anda        : %d              \n", nominal);
							printf ("                         Kembalian anda                 : %d              \n", y);
							printf ("\n--------------------------------------------------------------------------\n");
							printf ("                         Terimakasih atas pembayarannya");
							printf ("\n--------------------------------------------------------------------------\n");
							system("pause");
							system("cls");
						}
						else
						{
							system("cls");
							printf ("\n--------------------------------------------------------------------------\n");
							printf ("                         Terimakasih atas pembayarannya");
							printf ("\n--------------------------------------------------------------------------\n");
							system("pause");
							system("cls");
						}
				}
			else
				{
					system("cls");
					printf ("\n\t\t\t--------------------------------------------------------------------------\n");
					printf ("\t\t\t                Maaf, Tidak Ada Mobil yang Parkir");
					printf ("\n\t\t\t--------------------------------------------------------------------------\n");
					system("pause");
					system("cls");
				}

			mobil=mobil-1;
			if (mobil<0)
				mobil=0;
			break;
		case 3 :
			if (bus<=5 && bus!=0)
				{
					printf ("\nMasukkan Plat Nomor Anda (tulis tanpa spasi)    : ");
					scanf("%s", &a);
					printf ("\nBarapa lama Anda parkir /jam                    : ");
					scanf  ("%f", &parkir);
					printf ("\nKendaraan berplat nomor                         : %s", a);
					bayar = bis(parkir);
					printf ("\nTotal pembayaran Anda Adalah                    : %d", bayar);
					printf ("\nMasukkan nominal pembayaran                     : " );
					scanf (" %d",&nominal);
					y=back(nominal,bayar);
					printf ("\n");
					while (y<0){
						printf ("Uang yang Anda bayarkan                         : %d \n", nominal);
						printf ("\n---------------------Maaf, uang Anda kurang------------------------\n");
						printf ("\nSilahkan tambahkan nominal pembayaran           : " );
					    scanf  ("%d", &x);
					    nominal=nominal+x;
					    y=back(nominal,bayar);
					    printf ("\n");
					}
					printf ("\nKembalian Anda                                  : %d", y);
					printf("\n===========================================");
					printf ("\nApakah Anda ingin mencetak struknya? (Y/N)");
					scanf ("%s", &tanya);
						if (tanya=='Y' || tanya=='y')
						{
							system("cls");
							printf ("--------------------------------------------------------------------------\n");
							printf ("                         Kendaraan berplat nomor        : %s              \n", a);
							printf ("                         Jenis kendaraan Anda           : Bus             \n");
							printf ("                         Durasi parkir/jam              : %.2f            \n", parkir);
							printf ("                         Total yang harus dibayarkan    : %d              \n", bayar);
							printf ("                         Nominal pembayaran anda        : %d              \n", nominal);
							printf ("                         Kembalian anda                 : %d              \n", y);
							printf ("\n--------------------------------------------------------------------------\n");
							printf ("                         Terimakasih atas pembayarannya");
							printf ("\n--------------------------------------------------------------------------\n");
							system("pause");
							system("cls");
						}
						else
						{
							system("cls");
							printf ("\n--------------------------------------------------------------------------\n");
							printf ("                         Terimakasih atas pembayarannya");
							printf ("\n--------------------------------------------------------------------------\n");
							system("pause");
							system("cls");
						}
				}
			else
				{
					system("cls");
					printf ("\n\t\t\t--------------------------------------------------------------------------\n");
					printf ("\t\t\t                Maaf, Tidak Ada Bus yang Parkir");
					printf ("\n\t\t\t--------------------------------------------------------------------------\n");
					system("pause");
					system("cls");
				}
			bus=bus-1;
			if (bus<0)
				bus=0;
			break;
		case 4 :
			if (truk<=3 && truk!=0)
				{
					printf ("\nMasukkan Plat Nomor Anda (tulis tanpa spasi)    : ");
					scanf("%s", &a);
					printf ("\nBarapa lama Anda parkir /jam                    : ");
					scanf  ("%f", &parkir);
					printf ("\nKendaraan berplat nomor                         : %s", a);
					bayar = trk(parkir);
					printf ("\nTotal pembayaran Anda Adalah                    : %d", bayar);
					printf ("\nMasukkan nominal pembayaran                     : " );
					scanf (" %d",&nominal);
					y=back(nominal,bayar);
					printf ("\n");
					while (y<0){
						printf ("Uang yang Anda bayarkan                         : %d \n", nominal);
						printf ("\n---------------------Maaf, uang Anda kurang------------------------\n");
						printf ("\nSilahkan tambahkan nominal pembayaran           : " );
					    scanf  ("%d", &x);
					    nominal=nominal+x;
					    y=back(nominal,bayar);
					    printf ("\n");
					}
					printf ("\nKembalian Anda                                  : %d", y);
					printf("\n===========================================");
					printf ("\nApakah Anda ingin mencetak struknya? (Y/N)");
					scanf ("%s", &tanya);
					if (tanya=='Y' || tanya=='y')
						{
							system("cls");
							printf ("--------------------------------------------------------------------------\n");
							printf ("                         Kendaraan berplat nomor        : %s              \n", a);
							printf ("                         Jenis kendaraan Anda           : Truk            \n");
							printf ("                         Durasi parkir/jam              : %.2f            \n", parkir);
							printf ("                         Total yang harus dibayarkan    : %d              \n", bayar);
							printf ("                         Nominal pembayaran anda        : %d              \n", nominal);
							printf ("                         Kembalian anda                 : %d              \n", y);
							printf ("\n--------------------------------------------------------------------------\n");
							printf ("                         Terimakasih atas pembayarannya");
							printf ("\n--------------------------------------------------------------------------\n");
							system("pause");
							system("cls");
						}
					else
						{
							system("cls");
							printf ("\n--------------------------------------------------------------------------\n");
							printf ("                         Terimakasih atas pembayarannya");
							printf ("\n--------------------------------------------------------------------------\n");
							system("pause");
							system("cls");
						}

				}
			else
				{
					system("cls");
					printf ("\n\t\t\t--------------------------------------------------------------------------\n");
					printf ("\t\t\t                Maaf, Tidak Ada Truk yang Parkir");
					printf ("\n\t\t\t--------------------------------------------------------------------------\n");
					system("pause");
					system("cls");
				}

			truk=truk-1;
			if (truk<0)
				truk=0;
			break;

		default :
				system("cls");
				printf ("\n\t\t\t--------------------------------------------------------------------------\n");
				printf ("\t\t\t          Maaf, Kode Jenis Kendaraan Yang Anda Masukkan Salah");
				printf ("\n\t\t\t--------------------------------------------------------------------------\n");
				system("pause");
				system("cls");
	}
	}
	else
	{
		system("cls");
		printf ("\n\t\t\t--------------------------------------------------------------------------\n");
		printf ("\t\t\t                Maaf, Tidak Ada Kendaraan yang Parkir");
		printf ("\n\t\t\t--------------------------------------------------------------------------\n");
		system("pause");
		system("cls");

	}
	return menu(motor, mobil, bus, truk);
	break;
case 7 :
	system("cls");
	printf (" ----------------------------------------------------------------------------------------------------------------------\n");
	printf ("|          1. Program ini adalah untuk menghitung jumlah kendaraan di tempat parkir dan menghitung biaya parkir        |\n");
	printf ("|          2. Program hanya dapat menyimpan data ketika program masih dalam keadaan ON                                 |\n");
	printf ("|          3. Apabila program telah exit maka data yang tersimpan akan hilang                                          |\n");
	printf ("|          4. Pada awalnya semua jenis kendaraan dalam keadaan 0                                                       |\n");
	printf ("|          5. Durasi waktu parkir dalam program ini dalam satuan jam                                                   |\n");
	printf ("|          6. Contoh waktu parkir yang dapat ditulis dalam jam : 1 , 1.5 , 1.2                                         |\n");
	printf (" ----------------------------------------------------------------------------------------------------------------------\n");
	system("pause");
	system("cls");
	return menu(motor, mobil, bus, truk);
	break;
case 0:
	exit (0);
	break;
default :
	printf ("Maaf, Kode yang Anda Masukkan Salah");
	printf ("\n");
	system ("pause");
	system ("cls");
	getchar ();
	return menu(motor, mobil, bus, truk);
	break;
}

}

int back (int b, int c)
{
	return b-c;
}
float mtr (float b)
{
	return b*2000;
}
float mbl (float b)
{
	return b*5000;
}
float bis (float b)
{
	return b*7000;
}
float trk (float b)
{
	return b*10000;
}
