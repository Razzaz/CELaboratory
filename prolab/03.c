#include <stdio.h>



int x, lezat, uang, sisa, info(), budget(), menu(), daftar(), help();
int harga1=10000, harga9=12000, harga2=15000, harga3=20000, harga4=32000, harga5=55000, harga6=50000, harga7=35000, harga8=42000, harga10=47000, harga11=33000, harga12=21000;
char penutup;

int main()
{
	system("COLOR 3F");
	printf("========================================================================================================================\n");
	printf("||\t\t\t\t\tSELAMAT DATANG DI PROGRAM RESEP MASAKAN\t                                      ||\n");
	printf("||\t\t\t\t\t    Oleh: DEDE KOSASIH - 1706985930                                           ||\n");
	printf("||\t\t\t\t\t      HILMAN MAULANA - 1706985975                                             ||\n");
	printf("========================================================================================================================\n");

	printf("\n                               Program ini bertujuan untuk memudahkan Anda dalam mencari\n");
	printf("                             resep masakan yang sedang Anda inginkan untuk dimasak dengan\n");
	printf("                                            budget uang yang tersedia\n\n");
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("                                           S E L A M A T  M E M A S A K\n");
	printf("------------------------------------------------------------------------------------------------------------------------\n");


	printf("\nMenu:\n");  //menu utama
	printf("\t1. Info\n");
	printf("\t2. Masukan budget uang Anda dan cari menu masakan yang tersedia!\n");
	printf("\t3. Lihat seluruh daftar menu masakan\n");
	printf("\t4. Bantuan\n");
	printf("\t5. Exit\n");

	printf("	Pilihan Anda : ");

	switch (getch())
		{
			case '1':
				system("cls");
				info();
				break;
			case '2':
				system("cls");
				budget();
				break;
			case '3':
				system("cls");
				daftar();
				break;
			case '4':
				system("cls");
				help();
				break;
			case '5':
				printf("\n\nTerima kasih telah menggunakan program ini!\nSampai jumpa\n");
				return 0;
				break;
			default:
				printf("\n\nInput yang Anda masukan tidak terdapat dalam pilihan!\nSilakan masukan kembali pilihan Anda!\n");
				system("pause");
				system("cls");
				main();
				break;
		}

	penutup:
	printf("\nApakah Anda ingin menggunakan program ini kembali? [ketik y atau n]\n");
		switch(getch())
		{
		case 'y':
			system("cls");
			main();
		case 'n':
			printf("Terima kasih telah menggunakan program ini!");
			printf("\n");
			return 0;
		default:
			printf("\nInput yang Anda masukan tidak terdapat dalam pilihan!\nSilakan masukan kembali pilihan Anda!\n");
			system("pause");
			goto penutup;
		}
}

int info()     //menampilkan info tentang program
{
	loading();
	printf("\n1. Info\n");
	printf("\n                                               RESEP MASAKAN\n");
	printf("                                               PROJECT AKHIR\n");
	printf("                                  MATA KULIAH PENGANTAR TEKNIK KOMPUTER A\n");
	printf("                                              TEKNIK KOMPUTER\n");
	printf("					 DEPARTEMEN TEKNIK ELEKTRO\n");
	printf("                                           UNIVERSITAS INDONESIA\n");
	printf("\n                                      DEDE KOSASIH - HILMAN MAULANA\n");
	printf("\n                                            Copyright HD 2018\n");
}

int help()     //menampilkan tampilan bantuan untuk menggunakan program
{
	loading();
	printf("\n4. Bantuan\n");
	printf("\nCara menjalankan aplikasi: \n");
	printf(" 1. Pilih menu yang tersedia\n 2. Ikuti instruksi yang tertera di monitor\n 3. Jika bermasalah silahkan ulangi dari awal\n");
}

int budget()   //untuk memasukan dan mengecek jumlah uang yang dimiliki
{
	if (uang==0)
	{
		printf("\n2. Masukan budget uang Anda dan cari menu masakan yang tersedia!\n");
		printf("\nMasukan budget Anda: ");
		scanf("%d", &uang);

		if(uang<10000)
		{
			printf("\nMaaf, Anda tidak memiliki cukup uang untuk membeli makanan!\nSilakan menabung terlebih dahulu :)");
		}
		else
		{
			menu();
		}
	}

	else if(sisa<10000)
	{
		printf("\n2. Uang Anda tersisa Rp %d", sisa);
		printf("\n\nMaaf, sisa uang Anda tidak cukup untuk membeli makanan!\nSilakan menabung terlebih dahulu :)");
	}

	else if(sisa>=10000)
	{
		uang=sisa;
		printf("\n2. Uang Anda tersisa Rp %d", sisa);
		menu();
	}
}

int menu()     //Untuk menampilkan menu yang tersedia di bawah budget yang dimiliki
{
	loading();
	lezat:
	{
		printf("\nDaftar menu masakan di bawah Rp %d", uang);
			if(uang>=harga1)
			{
				printf("\n(1) Mie goreng/rebus 		Rp %d\n", harga1);
			}
			if(uang>=harga9)
			{
				printf("(2) Nasi goreng varian rasa	Rp %d\n", harga9);
			}
			if(uang>=harga2)
			{
				printf("(3) Sayur bening bayam		Rp %d\n", harga2);
				printf("(4) Sayur sop			Rp %d\n", harga2);
			}
			if(uang>=harga3)
			{
				printf("(5) Sop ayam 			Rp %d\n", harga3);
			}
			if(uang>=harga12)
			{
				printf("(6) Ayam Geprek Kemangi 	Rp %d\n", harga12);
				printf("(7) Martabak Unyil 		Rp %d\n", harga12);
			}
			if(uang>=harga4)
			{
				printf("(8) Ayam KFC 			Rp %d\n", harga4);
			}
			if(uang>=harga11)
			{
				printf("(9) Banana Split 		Rp %d\n", harga11);
			}
			if(uang>=harga7)
			{
				printf("(10) Oreo Cheese Cake 		Rp %d\n", harga7);
			}
			if(uang>=harga8)
			{
				printf("(11) Club Sandwich	 	Rp %d\n", harga8);
			}
			if(uang>=harga10)
			{
				printf("(12) Fondue Starwberry 		Rp %d\n", harga10);
			}
			if(uang>=harga6)
			{
				printf("(13) Steak 			Rp %d\n", harga6);
			}
			if(uang>=harga5)
			{
				printf("(14) Pizza			Rp %d\n", harga5);
			}
		printf("\nPilih Makanan : ");
		scanf("%d", &lezat);
	}

	if(lezat>0 && lezat<20)
	//untuk menampilkan resep masakan
	{
		switch (lezat)
		{
			case 1:
				system("cls");
				printf("\nResep untuk membuat mie goreng/rebus: \n");
				printf("- Mie kemasan Ayam Bawang\n- Bawang putih\n- Bumbu pedas (Boncabe/lada/dll)\n- 1/2 sdth kecap manis\n- Air matang\n- Sayuran");
				sisa = uang-harga1;
				printf("\n\nSisa uang Anda: Rp %d \n", sisa);
				break;
			case 2:
				system("cls");
				printf("\nResep untuk membuat nasi goreng varian rasa: \n");
				printf("- 1 piring nasi\n- 2 siung bawang putih\n- 2 siung bawang merah\n- 3 buah cabai merah keriting (sesuai selera)\n- 3 buah cabai rawit\n- kecap manis secukupnya\n- garam secukupnya\n- penyedap rasa secukupnya\n- sayuran sesuai selera\n- varian rasa sesuai selera\n- 1 butir telur");
				sisa = uang-harga9;
				printf("\n\nSisa uang Anda: Rp %d \n", sisa);
				break;
			case 3:
				system("cls");
				printf("\nResep untuk membuat sayur bening bayam: \n");
				printf("- 3 ikat daun bayam yang sudah dipetik\n- 1 batang wortel, iris tipis\n- 2 buah bawang merah, iris tipis\n- 1 siung bawang putih, iris tipis\n- air secukupnya\n- kaldu ayam bubuk dan garam secukupnya");
				sisa = uang-harga2;
				printf("\n\nSisa uang Anda: Rp %d \n", sisa);
				break;
			case 4:
				system("cls");
				printf("\nResep untuk membuat sayur sop: \n");
				printf("- sayur sesuai selera (kol, wortel, kentang, buncis, jagung sisir, daun bawang, dan seledri)\n- 5 buah bawang merah\n- 3 buah bawang putih\n- garam, gula, lada bubuk dan penyedap rasa secukupnya\n- 4 gelas air rebus");
				sisa = uang-harga2;
				printf("\n\nSisa uang Anda: Rp %d \n", sisa);
				break;
			case 5:
				system("cls");
				printf("\nResep untuk membuat Sop Ayam :\n");
				printf("-1/2 kg ayam fillet\n-4 buah wortel\n-2 buah jagung manis\n-1 bungkul kembang kol\n-1 bungkul brokoli\n-1/2 butir bawang bombay\n-2 batang daun bawang\n-3 batang seledri");
				sisa = uang-harga3;
				printf("\n\nSisa uang Anda: Rp %d \n", sisa);
				break;
			case 6:
				system("cls");
				printf("\nResep untuk membuat Ayam Geprek Kemangi:\n");
				printf("- Ayam goreng crispy bagian paha atau dada atas 2 buah\n- Bawang putih 1 siung\n- Cabai rawit sesuai selera\n- Garam sesuai selera\n- Daun kemangi secukupnya");
				sisa = uang-harga12;
				printf("\n\nSisa uang Anda: Rp %d \n", sisa);
				break;
			case 7:
				system("cls");
				printf("\nResep untuk membuat Martabak Unyil:\n");
				printf("- 200 gram tepung terigu\n- 1/2 sendok teh ragi\n- 1/4 sendok teh baking powder\n- 1/4 sendok teh garam\n- 50 gram gula pasir\n- 2 butir telur ayam\n- 400 gram susu\n- Mentega secukupnya\n- Keju parut secukupnya\n- Cokelat meses secukupnya\n- Kacang tanah secukupnya");
				sisa = uang-harga12;
				printf("\n\nSisa uang Anda: Rp %d \n", sisa);
				break;
			case 8:
				system("cls");
				printf("\nResep untuk membuat Ayam KFC:\n");
				printf("- 1 kg ayam, potong-potong\n- 1 sdt bubuk bawang putih\n- 1 sdt lada halus\n- 1/4 sdt bubuk cabe merah kering\n- 1/2 sdt garam halus300 ml air dingin /air es\n- 300 g tepung terigu tinggi protein (saran, cap cakra kembar)\n- 40 g tepung maizena\n- 1/2 sdm susu bubuk\n- 1 butir kuning telur\n- 1/2 sdt baking soda\n- 1/2 sdt garam halus\n- 1/2 sdt lada halus");
				sisa = uang-harga4;
				printf("\n\nSisa uang Anda: Rp %d \n", sisa);
				break;
			case 9:
				system("cls");
				printf("\nResep untuk membuat Banana Split:\n");
				printf("- 1 buah pisang ambon, belah menjadi dua\n- 3 cup es krim Wall�s\n- Perisa Cokelat/Vanilla 75 gram\n- 1 bungkus chocochip\n- 1 sachet susu vanilla cair\n- 1 bungkus wafer atau biskuit marrie");
				sisa = uang-harga11;
				printf("\n\nSisa uang Anda: Rp %d \n", sisa);
				break;
			case 10:
				system("cls");
				printf("\nResep untuk membuat Oreo Cheese Cake:\n");
				printf("- 2 bungkus Oreo rasa Vanilla\n- 100 gr Cream Cheese\n- 1/2 bungkus Whipe Cream siap pakai atau Anda bisa membuatnya sendiri\n- 100 ml air dingin\n- 2 sendok makan Margarin\n- 3 buah toples");
				sisa = uang-harga7;
				printf("\n\nSisa uang Anda: Rp %d \n", sisa);
				break;
			case 11:
				system("cls");
				printf("\nResep untuk membuat Club Sandwich:\n");
				printf("- 1 bgks Roti Tawar kupas (Kalau tidak ada roti tawar kupas, kita bisa mengupas kulit roti sendiri dengan pisau roti)\n- 3 buah irisan beef patties\n- 3 buah selada segar\n- 1 buah tomat, iris secukupnya\n- 5 sendok makan mayonaise\n- 3 buah telur mata sapi");
				sisa = uang-harga8;
				printf("\n\nSisa uang Anda: Rp %d \n", sisa);
				break;
			case 12:
				system("cls");
				printf("\nResep untuk membuat Fondue Starwberry:\n");
				printf("- 100 gr buah strawberry\n- 250 gr buah melon yang sudah dipotong dadu\n- 1 buah apel merah (potong dadu)\n- 200 gr anggur hijau (tanpa biji)\n- 200 gr anggur merah (tanpa biji)\n-1 buah pisang,iris bulat");
				sisa = uang-harga10;
				printf("\n\nSisa uang Anda: Rp %d \n", sisa);
				break;
			case 13:
				system("cls");
				printf("\nResep untuk membuat Steak:\n");
				printf("- 250 gram daging sapi\n- 4 siung bawang putih (haluskan)\n- Bubuk merica\n- 3 sdm kecap manis\n- 1 sdt kecap inggris\n- 3 sdm saus tomat\n- 2 sdt gula palm\n- 1 sdm mentega\n- 1 buah jeruk nipis");
				sisa = uang-harga6;
				printf("\n\nSisa uang Anda: Rp %d \n", sisa);
				break;
			case 14:
				system("cls");
				printf("\nResep untuk membuat Pizza:\n");
				printf("- 1/2 kg Tepung terigu\n- 5 gr fermipan (ragi instan)\n- 3 sendok makan minyak sayur\n- 1/2 Sendok teh garam\n- 1 1/2 Sendok teh gula pasir\n- 250 ml air matang ");
				sisa = uang-harga5;
				printf("\n\nSisa uang Anda: Rp %d \n", sisa);
				break;
			default:
				printf("\n\nInput yang Anda masukan tidak terdapat dalam pilihan!\nSilakan masukan kembali pilihan Anda!\n");
				system("pause");
		}
	}

	else
	{
		printf("\nMenu yang Anda pilih tidak terdapat di dalam pilihan!\nSilakan memilih menu kembali!\n");
		system("pause");
	}
}

int daftar()   //menampilkan seluruh daftar menu yang ada
{
	loading();
	printf("3. Lihat seluruh daftar menu masakan\n");
	printf("\n(1) Mie goreng/rebus 		Rp %d\n", harga1);
	printf("(2) Nasi goreng varian rasa	Rp %d\n", harga9);
	printf("(3) Sayur bening bayam		Rp %d\n", harga2);
	printf("(4) Sayur sop			Rp %d\n", harga2);
	printf("(5) Sop ayam 			Rp %d\n", harga3);
	printf("(6) Ayam Geprek Kemangi 	Rp %d\n", harga12);
	printf("(7) Martabak Unyil 		Rp %d\n", harga12);
	printf("(8) Ayam KFC 			Rp %d\n", harga4);
	printf("(9) Banana Split 		Rp %d\n", harga11);
	printf("(10) Oreo Cheese Cake 		Rp %d\n", harga7);
	printf("(11) Club Sandwich	 	Rp %d\n", harga8);
	printf("(12) Fondue Starwberry 		Rp %d\n", harga10);
	printf("(13) Steak 			Rp %d\n", harga6);
	printf("(14) Pizza			Rp %d\n", harga5);
}

int loading()  //untuk menampilkan tampilan loading
{
	printf("\n\t\t\t\t\t\t\tHarap tunggu\n");
	printf("\t\t\t\t\t\t\t");
	for(x=1;x<=11;x++)
	{
		printf(".");
		Sleep(150);
	}
	system("cls");
}
