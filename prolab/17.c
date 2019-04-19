#include <stdio.h>
#include <stdlib.h>

	int q,w,e,r,t,y,u,i,o,p; //Untuk menentukan skor setiap nomor dari nomor 1 hingga 10

	int play();//berisi 10 pertanyaan pilihan ganda
	int help();//menu bantuan
	int hasil; //skor total dari 10 pertanyaan yang telah dijawab

	int help() //menu help
{


	char pilihan;
		printf("\n-------------------------------------------------------------\n");
		printf("\nCara menjalankan aplikasi: \n");
		printf("\n1. Pilih START dengan mengetik '1' untuk memulai tes pada menu utama.\n");
		printf("2. Akan tersedia pertanyaan dan jawablah dengan opsi a/b/c/d.\n");
		printf("3. Jawablah sesuai kata hati Anda!\n");
		printf("4. Selamat mencoba.\n");

	kembali:
	printf("\n----------------------------------------------------------------------\n");
	printf("Apakah Anda ingin menggunakan program ini kembali? [Ketik 'o' untuk ke menu utama atau ketik 'x' untuk menutup program]\n");


	switch(getch())
	{
		case 'o': system("cls");
			main();
		case 'x': system("cls");
			printf("Terima Kasih telah mencoba! :)\n");
			return 0;
		case '1': system("cls");
			play();
		default : system("cls");
			printf("ERROR!! Silahkan memilih dengan mengetik 'o' untuk ke menu utama atau 'x' untuk mengakhiri program!");
			goto kembali;
	}

}

int main() //menu utama
{

    printf("\n=========================================================================\n");
	printf("||         SELAMAT DATANG DI PROGRAM TES ELEMEN KEPRIBADIAN            ||\n");
	printf("||             Oleh: AHMAD RAFIUL MAHDI    - 1706985861                ||\n");
	printf("||                   ALZY MAULANA BERMANTO - 1706985880                ||\n");
	printf("=========================================================================\n\n");

	printf("\n         Program ini dibuat berupa 10 pertanyaan pilihan ganda\n");
	printf("       dimana setiap pertanyaan terdapat masing-masing 4 pilihan.\n");
	printf("-------------------------------------------------------------------------\n");
	printf("                       S E L A M A T  M E N C O B A\n");
	printf("-------------------------------------------------------------------------\n");

	{
	input:
		printf("\n\nMain Menu :\n\n");
		printf("   1. START\n");
		printf("   2. HELP\n");
		printf("   3. EXIT\n\n");
		printf("Pilihan Anda (Ketik 1/2/3) : ");

}
	switch (getch())
	{
		case '1':
			system("cls");
			play();
			break;
		case '2':
			system("cls");
			help();
			break;
		case '3': system("cls");
			printf("Terima Kasih telah mencoba! :)\n");
			return 0;
		default: system("cls");
			printf("\nInput yang Anda masukkan salah!!! Silahkan ketik '1' atau '2' atau '3'!");
			goto input;
			break;
	}


}
	int play() //pertanyaan pilihan ganda (ada 10)

	{


	satu:

	printf ("\n1. Orang seperti apa kamu ?\n");
	printf ("  a. Menyenangkan, ramah, bergaul\n");
	printf ("  b. Kreatif, inovatif, smart\n");
	printf ("  c. Halus, easy going, rileks\n");
	printf ("  d. Bergairah, emosional, protektif\n");
	printf ("Pilih jawaban Anda : ");

	switch (getch())
		{
		case 'a': q=20;
			break;

		case 'b': q=40;
			break;

		case 'c': q=30;
			break;

		case 'd': q=10;
			break;

		default : system("cls");
		printf("\nERROR!! Silahkan ketik a,b,c atau d untuk memilih jawaban!!\n\n");
			goto satu;
			break;
	}
	system("cls");

	dua:

	printf ("\n2. Binatang yang Anda suka ?\n");
	printf ("  a. Kucing/Anjing\n");
	printf ("  b. Kupu-kupu\n");
	printf ("  c. Kuda\n");
	printf ("  d. Lumba-lumba\n");
	printf ("Pilih jawaban Anda : ");

	switch (getch())
		{
		case 'a': w=40;
			break;

		case 'b': w=20;
			break;

		case 'c': w=10;
			break;

		case 'd': w=30;
			break;

		default: system("cls");
			printf("\nERROR!! Silahkan ketik a,b,c atau d untuk memilih jawaban!!\n\n");
			goto dua;
			break;

		}
	system("cls");

	tiga:

	printf ("\n3. Warna pasangan yang Anda suka ?\n");
	printf ("  a. Hijau-Ungu\n");
	printf ("  b. Hitam-Coklat\n");
	printf ("  c. Biru-Hijau\n");
	printf ("  d. Merah-Orange\n");
	printf ("Pilih jawaban Anda : ");

	switch (getch())
		{
		case 'a': e=20;
			break;

		case 'b': e=40;
			break;

		case 'c': e=30;
			break;

		case 'd': e=10;
			break;

		default: system("cls");
			printf("\nERROR!! Silahkan ketik a,b,c atau d untuk memilih jawaban!!\n\n");
			goto tiga;
			break;

		}
	system("cls");

	empat:

	printf ("\n4. Genre Buku atau Film favorit Anda ?\n");
	printf ("  a. Kriminal/Horor\n");
	printf ("  b. Komedi/Action\n");
	printf ("  c. Petualangan/Romantis\n");
	printf ("  d. Drama/Dokumentasi\n");
	printf ("Pilih jawaban Anda : ");

	switch (getch())
		{
		case 'a': r=30;
			break;

		case 'b': r=20;
			break;

		case 'c': r=10;
			break;

		case 'd': r=40;
			break;

		default: system("cls");
			printf("\nERROR!! Silahkan ketik a,b,c atau d untuk memilih jawaban!!\n\n");
			goto empat;
			break;

		}
	system("cls");

	lima:

	printf ("\n5. Jumlah teman Anda ?\n");
	printf ("  a. Punya banyak grup dengan orang berpasangan\n");
	printf ("  b. 5-10 teman\n");
	printf ("  c. 2-3 teman\n");
	printf ("  d. Grup besar teman semua\n");
	printf ("Pilih jawaban Anda : ");

	switch (getch())
		{
		case 'a': t=10;
			break;

		case 'b': t=30;
			break;

		case 'c': t=40;
			break;

		case 'd': t=20;
			break;

		default: system("cls");
			printf("\nERROR!! Silahkan ketik a,b,c atau d untuk memilih jawaban!!\n\n");
			goto lima;
			break;

		}
	system("cls");

	enam:

	printf ("\n6. Genre musik favorit ?\n");
	printf ("  a. Rock\n");
	printf ("  b. Heavy Metal\n");
	printf ("  c. Pop/Klasik\n");
	printf ("  d. Yang sedang trend\n");
	printf ("Pilih jawaban Anda : ");

	switch (getch())
		{
		case 'a': y=20;
			break;

		case 'b': y=10;
			break;

		case 'c': y=40;
			break;

		case 'd': y=30;
			break;

		default: system("cls");
			printf("\nERROR!! Silahkan ketik a,b,c atau d untuk memilih jawaban!!\n\n");
			goto enam;
			break;

		}
	system("cls");

	tujuh:

	printf ("\n7. Jika Anda memiliki kekuatan sihir, kekuatan apa yang Anda ingin ?\n");
	printf ("  a. Perdamaian atau Kekuatan\n");
	printf ("  b. Kesehatan atau Keabadian\n");
	printf ("  c. Perhatian atau Cinta\n");
	printf ("  d. Kepintaran atau Ketrampilan\n");
	printf ("Pilih jawaban Anda : ");

	switch (getch())
		{
		case 'a': u=20;
			break;

		case 'b': u=30;
			break;

		case 'c': u=10;
			break;

		case 'd': u=40;
			break;

		default: system("cls");
			printf("\nERROR!! Silahkan ketik a,b,c atau d untuk memilih jawaban!!\n\n");
			goto tujuh;
			break;

		}
	system("cls");

	delapan:

	printf ("\n8. Jika Anda kehilangan orang yang Anda sayang, apa yang Anda lakukan ?\n");
	printf ("  a. Menangis dalam waktu yang lama\n");
	printf ("  b. Ikhlas\n");
	printf ("  c. Mencoba mengingat masa yang indah bersama dia\n");
	printf ("  d. Biarkan waktu berlalu\n");
	printf ("Pilih jawaban Anda : ");

	switch (getch())
		{
		case 'a': i=10;
			break;

		case 'b': i=40;
			break;

		case 'c': i=20;
			break;

		case 'd': i=30;
			break;

		default: system("cls");
		printf("\nERROR!! Silahkan ketik a,b,c atau d untuk memilih jawaban!!\n\n");
		goto delapan;
			break;

		}
	system("cls");

	sembilan:

	printf ("\n9. Jika Anda punya uang Rp1.000.000.000,00. Apa yang Anda akan lakukan?\n");
	printf ("  a. Beramal\n");
	printf ("  b. Simpan\n");
	printf ("  c. Habiskan\n");
	printf ("  d. Memberikan kepada orang tua\n");
	printf ("Pilih jawaban Anda : ");

	switch (getch())
		{
		case 'a': o=20;
			break;

		case 'b': o=40;
			break;

		case 'c': o=10;
			break;

		case 'd': o=30;
			break;

		default: system("cls");
			printf("\nERROR!! Silahkan ketik a,b,c atau d untuk memilih jawaban!!\n\n");
			goto sembilan;
			break;
		}
	system("cls");

	sepuluh:

	printf ("\n10. Seperti apa hidup Anda secara keseluruhan ?\n");
	printf ("  a. Menjadi pusat perhatian\n");
	printf ("  b. Optimis dan genit\n");
	printf ("  c. Berpengalaman walau emosional\n");
	printf ("  d. Pemalu dengan kasih sayang besar\n");
	printf ("Pilih jawaban Anda : ");

	switch (getch())
		{
		case 'a': p=40;
			break;

		case 'b': p=30;
			break;

		case 'c': p=10;
			break;

		case 'd': p=20;
			break;

		default: system("cls");
			printf("\nERROR!! Silahkan ketik a,b,c atau d untuk memilih jawaban!!\n\n");
			goto sepuluh;
			break;

		}

	//Hasil tes yang berupa total skor dan elemen kepribadian

	system("cls");

	hasil=q+w+e+r+t+y+u+i+o+p;

	printf ("\nTotal skor Anda adalah %d\n\n", hasil);


	if (hasil >=100 && hasil <=160)
	{
		printf ("Elemen Anda adalah API\n\n");
		printf ("Kamu seseorang yang sangat romantis dan bergairah.\nKadang Emosi kamu yang terbaik dari dirimu,\nkemudian kamu tidak pernah berhenti memukau dengan sensitivitas kamu.");
	}
	else if (hasil >=170 && hasil <=240)
	{
		printf ("Elemen Anda adalah UDARA\n\n");
		printf ("Kamu hidup seperti tersisih, sering membuat\nkeputusan tidak bertanggung jawab, tapi kamu selalu bikin\nyang terbaik dari hal tersebut. Kamu\nada kemungkinan jadi terkenal");
	}
	else if (hasil >=250 && hasil <=320)
	{
		printf ("Elemen Anda adalah AIR\n\n");
		printf ("Kamu seseorang yang easygoing dan selalu tidak\nterganggu dengan orang lain. Kamu sedikit malas walaupun\nterkadang kamu bisa menanganinya dan tidak mudah\nmenyerah pada tekanan");
	}
	else if (hasil >=330 && hasil <=400)
	{
		printf ("Elemen Anda adalah TANAH\n\n");
		printf ("Kamu selalu memikirkan segala hal. Kamu sedikit\nkeras kepala, tapi selalu membuat keputusan yang benar.\nKreativitas dan tanggung jawab kamu bikin kamu seseorang pemimpin\nyang baik");
	}
	ulang:
	printf("\n----------------------------------------------------------------------\n");
	printf("Apakah Anda ingin menggunakan program ini kembali? [Ketik 'o' untuk ke menu utama atau ketik 'x' untuk menutup program]\n");

	switch(getch())
	{
		case 'o': system ("cls");
			main();
		case 'x': system("cls");
			printf("Terima Kasih telah mencoba! :)\n");
			return 0;
		case '1': system("cls");
			play();
		default : system("cls");
			printf("ERROR!! Silahkan memilih dengan mengetik 'o' untuk ke menu utama atau 'x' untuk mengakhiri program!");
			goto ulang;

	}
	system("cls");
}
