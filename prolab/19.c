#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int Total_Belanja=0,i,k,Uang_Pembeli=0,l;

char j[4];
		/*



		Total_Belanja adalah variabel untuk menampung jumlah harga barang yang dibeli
		i untuk mengidentifikasi apakah akan melanjutkan program atau memberhentikan program
		j barcode yang digunakan pada list harga barang
		k variabel untuk mengidentifikasi pembeli seorang member atau bukan
		Uang_Pembeli adalah jumlah uang yang digunakan untuk membayar belanjaan
		l varibel yang digunakan untuk masuk ke menu daftar atau kasir

		*/

void daftar(){ 															//fungsi yang berisi daftar barcode
 	printf("1001    Chupacaps       			Rp10.199,00\n");
	printf("1002    Oura            			Rp20.399,00\n");
	printf("1003    Bang-bing       			Rp15.598,00\n");
	printf("1004    Malaymie kari ayam   		        Rp50.000,00\n");
	printf("1005  	Sarden CDF       			Rp10.000,00\n");
	printf("2001    Vet					Rp11.000,00\n");
	printf("2002    Fantol		       			Rp8.000,00\n");
	printf("2003    BlueBull         			Rp13.500,00\n");
	printf("2004    Mili		       			Rp6.000,00\n");
	printf("2005    Dancuk		       			Rp8.500,00\n");
	printf("2006    Ponari Swet		       		Rp17.000,00\n");
	printf("2007    E Men		       			Rp11.000,00\n");
	printf("2008    Fitrisari Rasa Lemon                   Rp13.000,00\n");


}


int pembayaran(){															//berfungsi untuk menghitung kembalian dari suatu belanjaan

	printf("Masukan uang pembeli\n");
	scanf("%d",&Uang_Pembeli);


	printf("Apakah pembeli seorang member?\n  Iya masukan 1\n  Tidak masukan 0\n");
	scanf("%d",&k);

	if(k==1){
	Total_Belanja=(Total_Belanja*90)/100;
	if(Uang_Pembeli<Total_Belanja){
		printf("uang kurang mohon masukan ulang\n jika pembeli tidak ada uang masukan 3 untuk membatalkan transaksi\n");
		return pembayaran();
	}
	printf("Kembalian = Rp %d\n",Uang_Pembeli-Total_Belanja);
	return akhir();
	}
	else if(k==0){
		if(Uang_Pembeli<Total_Belanja){
		printf("uang kurang mohon masukan ulang\n jika pembeli tidak ada uang masukan 3 untuk membatalkan transaksi\n");

		return pembayaran();
	}
	printf("kembalian = Rp %d\n",Uang_Pembeli-Total_Belanja);
	return akhir();
	}
	else if(k==3){
		printf("transaksi dibatalkan\n");
		Uang_Pembeli=0;
		Total_Belanja=0;
		system("pause");
		system("cls");
			 main();
	}
	else {
		printf("input tidak sesuai");
		return pembayaran();
	}





}





int kasir(){						//untuk mengidentifikasi barang apa saja yang  dibeli


scanf("%s",&j);

if(strcmp(j,"0000")==0){
	pembayaran();
	}


else if(strcmp(j, "1001")==0){
	printf("    Chupacaps       			Rp10.199,00\n");
	Total_Belanja=Total_Belanja+10199;
	return kasir();

	}
else if(strcmp(j, "1002")==0){
	printf("    Oura            			Rp20.399,00\n");
	Total_Belanja=Total_Belanja+20399;
	return kasir();

	}
else if(strcmp(j, "1003")==0){
	printf("    Bang-bing       			Rp15.598,00\n");
	Total_Belanja=Total_Belanja+15598;
	return kasir();
	}
else if(strcmp(j, "1004")==0){
	printf("    Malaymie kari ayam                  Rp50.000,00\n");
	Total_Belanja=Total_Belanja+50000;
	return kasir();
	}
else if(strcmp(j, "1005")==0){

	printf("    Sarden CDF      			Rp10.000,00\n");
	Total_Belanja=Total_Belanja+10000;

	return kasir();
	}

else if(strcmp(j, "2001")==0){
	Total_Belanja=Total_Belanja+11000;
	printf("    Vet					Rp11.000,00\n");
	return kasir();
	}
else if(strcmp(j, "2002")==0){
	Total_Belanja=Total_Belanja+8000;
	printf("    Fantol		       		Rp8.000,00\n");
	return kasir();
	}
else if(strcmp(j, "2003")==0){
	printf("    BlueBull         			Rp13.500,00\n");
	Total_Belanja=Total_Belanja+13500;
	return kasir();
	}
else if(strcmp(j, "2004")==0){
	Total_Belanja=Total_Belanja+6000;
	printf("    Mili	       			Rp6.000,00\n");
	return kasir();
	}
else if(strcmp(j, "2005")==0){
	Total_Belanja=Total_Belanja+6000;
	printf("    Dancuk		  		Rp8.500,00\n");
	return kasir();
	}
else if(strcmp(j, "2006")==0){
	Total_Belanja=Total_Belanja+17000;
	printf("    Ponari Swet		       		Rp17.000,00\n");
	return kasir();
	}
else if(strcmp(j, "2007")==0){
	printf("    E Men		     		Rp11.000,00\n");
	Total_Belanja=Total_Belanja+11000;
	return kasir();
	}
else if(strcmp(j, "2008")==0){
	printf("    Fitrisari Rasa Lemon                  Rp13.000,00\n");
	Total_Belanja=Total_Belanja+13000;
	return kasir();
	}
else{
	printf("Input tidak sesuai, silahkan input ulang\n");
	Total_Belanja=0;
	system("pause");
	system("cls");
	return main();
	}
}


int menu(){														// fungsi ini berisi tentang tampilan menu utama
	printf("[1]Daftar barcode\n[2]Aplikasi kasir\n[3]Help\n");

scanf("%d",&l);
if(l==1){
		daftar();
			return menu();
	}
else if (l==2){
	printf("Masukan barcode untuk memilih barang dan 0000 untuk menghitung jumlah harga barang\n");
			kasir();


	}
else if (l==3){
	printf("Program ini terdiri dari 3 menu sekarang anda berada pada Menu[3] yaitu help\n Menu [1] akan menampilkan daftar barcode barang serta harganya\n Menu [2] berfungsi untuk menghitung pembelanjaan pembeli, silakan masuk ke menu [2] untuk mendapat instruksi untuk menggunakan menu ini\n");
	system("pause");
	system("cls");
	return main();
	}
else{
	printf("Input tidak sesuai, silakan masukan input lagi\n");
			system("pause");
			system("cls");
			 main();

	}
}


int akhir(){						//fungsi ini berguna untuk menentukan apakah ada transaksi lain atau untuk mengakhiri program
	printf("Transaksi selanjutnya masukan 1\nKeluar dari program masukan 0\n");
	scanf("%d",&i);
	if (i==1){
		system("cls");
		Total_Belanja=0;
		Uang_Pembeli=0;
		return main();


	}
	else if(i==0){
		printf("Program berhenti\nTERIMAKASIH TELAH MENGGUNAKAN APLIKASI KAMI");
		return 0;
	}
	else{
		printf ("Input tidak sesuai\n");
		getch();
		system("cls");

		return main();
	}
}

int main(){
	printf("========================================================================\n");
	printf("                            Aplikasi kasir\n");
	printf("                     Created by : Samuel n Titus\n");
	printf("========================================================================\n");

	menu();



}
