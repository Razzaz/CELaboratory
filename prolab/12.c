//Program Penhgitung Pajak
#include<stdio.h>

int main()
{
	int jumlah=0, pph=0, pkb=0, i, no, gaji, status, anak, npwp, pajak, swdkllj, telat, temp[100];
	char nama[20],pilih;
	head();
	printf("Halo, Salam Kenal. Siapakah nama Anda?\nJawab: ");
	gets(nama);
	printf("Wah \"%s\" nama yang luar biasa. :)",nama);
	help:
	printf("\n\n_________________________________________________________________________________\n");
	printf("_____________________________________Bantuan_____________________________________\n");
	printf("\n\n1. Program ini dapat membantu Anda menghitung Pajak Penghasilan\n   dan Pajak Kendaraaan Bermotor.\n");
	printf("2. Pada saat proses perhitungan Anda perlu memasukkan data dengan format\n   tertentu yang akan dijelaskan pada masing-masing bagian.\n");
	printf("3. Data Pajak Kendaraan Bermotor dapat Anda lihat di STNK Anda.\n");
	printf("4. Setelah Anda menghitung salah satu pajak, Anda bisa menghitung pajak lainnya\n   atau langsung menampilkan hasil.\n");
	printf("5. Pada hasil akan terlihat jumlah PPH dan PKB, serta jumlah kedua pajak.\n");
	printf("6. Jika Anda ingin keluar dari program, maka Anda dapat memilih opsi 5.\n");
	printf("7. Jika Anda ingin membaca menu bantuan ini lagi, maka Anda dapat memilih opsi 4.\n");
	printf("8. Kesalahan penulisan data/input dapat menyebabkan program error, mengulang,\n   dan menghasilkan hasil yang keliru.\n\n");
	system("pause");
	system("cls");
	head();
	opsi:
	printf("\nSilahkan pilih opsi yang ingin Anda lakukan ?");
	printf("\n1 Hitung Pajak Penghasilan");
	printf("\n2 Hitung Pajak Kendaraan Bermotor");
	printf("\n3 Rincian Total Pajak");
	printf("\n4 Bantuan");
	printf("\n5 Keluar Program\nPilihan Anda: ");
	scanf("%s", &pilih);
	if(pilih=='1'){
		system("cls");
		head();
		pph=0;
		printf("\nUntuk menghitung pajak penghasilan Anda, silahkan masukkan data-data diri Anda dengan format berikut.\n");
		printf("\nInput\t: Pendapatan Bersih Satu Bulan [spasi] Status Pernikahan [spasi] Jumlah Anak Tanggungan [spasi] Kepemilikan NPWP");
		printf("\nBentuk\t: Angka [spasi] Y/N [spasi] Angka [spasi] Y/N");
		printf("\n\n[Contoh]");
		printf("\nInput\t: 20000000 N 0 Y\n");
		ulang:
		printf("\nInput\t: ");
		scanf("%d %s %d %s", &gaji, &status, &anak, &npwp);
		if((status!='N'&&status!='Y')||(npwp!='N'&&npwp!='Y')){
			printf("\nInput Anda Salah. Coba Lagi.\n");
			goto ulang;
		}
		pph=PPH(gaji,status,anak,npwp);
		goto opsi;
	}
	else if(pilih=='2'){
		system("cls");
		head();
		pkb=0;
		printf("\nUntuk menghitung pajak kendaraan bermotor Anda, silahkan masukkan data-data diri Anda dengan format berikut.\n");
		printf("\nInput \t\t\t: Jumlah Kendaraan Anda (Bentuk Angka) ");
		printf("\nKendaraan No. ...\t: Nilai PKB [spasi] Nilai SWDKLLJ [spasi] Waktu(Bulan) Keterlambatan Pembayaran PKB.");
		printf("\nBentuk\t\t\t: Angka [spasi] Angka [spasi] Angka.");
		printf("\n\n[Contoh]");
		printf("\nInput\t\t\t: 2");
		printf("\nKendaraan No. ...\t: 350000 30000 12\n\n");
		printf("\nInput \t\t\t: ");
		scanf("%d",&no);
		for(i=1;i<=no;i++){
			printf("\nKendaraan No. %d\t\t: ", i);
			scanf("%d %d %d", &pajak, &swdkllj, &telat);
			temp[i]=PKB(pajak, swdkllj, telat);
			pkb=pkb+temp[i];
		}
		printf("\nAnda telah selesai menghitung pajak penghasilan. Hasil perhitungan dapat dilihat di opsi Rincian Total Pajak.\n\n");
		system("pause");
		goto opsi;
	}
	else if(pilih=='3'){
	}
	else if(pilih=='4'){
		goto help;
	}
	else if(pilih=='5'){
		goto exit;
	}
	else{
		printf("\nPilihan Anda Salah. Coba Lagi.\n");
		goto opsi;
	}
	system("cls");
	head();
	jumlah=pph+pkb;
	puts("|||-----------------------------------Rincian Pajak-----------------------------------|||");
	printf("\nPajak Penghasilan\t\t\t\t\t\t\t= %d\n\n",pph);
	for(i=1;i<=no;i++){
	printf("\tPajak Kendaraan Bermotor No. %d\t\t= %d\n",i,temp[i]);
	}
	printf("Jumlah Pajak Kendaraan Bermotor\t\t\t\t\t\t= %d\n",pkb);
	printf("\n            \t\t\t\t\t\t\t\t________________+\n", jumlah);
	printf("\nJumlah Pajak\t\t\t\t\t\t\t\t= %d\n\n", jumlah);
	puts("|||-----------------------------------Rincian Pajak-----------------------------------|||");
	system("pause");
	goto opsi;
	exit:
	system("cls");
	printf("\nCredits: Mustofa Kamal - Achmad Faiz Siraj - PTK A\n\n");
	return 0;
}

head(){
	printf("|########################################################################################|\n");
	printf("|-------------------------------                          -------------------------------|\n");
	printf("|+++++++++++++++++++++++++++++++ PENGHITUNG PAJAK MANDIRI +++++++++++++++++++++++++++++++|\n");
	printf("|-------------------------------                          -------------------------------|\n");
	printf("|########################################################################################|\n\n\n");
}

int PPH(int gaji, int status, int anak, int npwp)
{
	int pph, ptkp;
	gaji=tahun(gaji);//gaji satu tahun
	ptkp=istri(status);//pktp istri
	anak=Anak(anak);//ptkp anak
	ptkp=ptkp+54000000;//ptkp perorangan
	pph=gaji-ptkp-anak;//penghasilan kena pajak
	pph=pkp(pph);//pph akhir
	if(npwp=='N'){
		pph=pph*1.2;//tambahan biaya akibat tidak memiliki npwp
	}
	printf("\nAnda telah selesai menghitung pajak penghasilan. Hasil perhitungan dapat dilihat di opsi Rincian Total Pajak.\n\n");
	system("pause");
	return pph;
}

int tahun(int gaji){//gaji satu tahun
	return gaji*12;
}

int istri(int status){//ptkp memiliki istri
	int ptkp;
	if(status=='Y'){
		ptkp=4500000;//ptkp meiliki istri
	}
	else{
		ptkp=0;
	}
	return ptkp;
}

int Anak(int anak){//perhitungan ptkp anak
	if(anak>3){
		anak=4500000*3; //ptkp memiliki anak>3
	}
	else{
		anak=4500000*anak;//ptkp memiliki anak
	}
	return anak;
}

int pkp(int pph){//perhitungan pph akhir
	if(pph<=0){
		pph=0;
	}
	else if(pph>500000000){
		pph=(pph-500000000)*0.3+2500000+30000000+62500000;
	}
	else if(pph>250000000){
		pph=(pph-250000000)*0.25+2500000+30000000;
	}
	else if(pph>50000000){
		pph=(pph-50000000)*0.15+2500000;
	}
	else{
		pph=pph*0.05;
	}
	return pph;
}

int PKB(int pajak, int swdkllj, int telat)
{
	int pkb;
	if(telat!=0){
		//denda=pajak*0.25*telat/12;//denda keterlambatan pkb
		telat=Denda(telat,pajak);
		swdkllj=Swdkllj(swdkllj);
	/*	if(swdkllj>100000){
			swdkllj=swdkllj+100000;//denda untuk mobil
		}
		else{
			swdkllj=swdkllj+32000;//denda untuk motor
		} */
	}
	pkb=pajak+telat+swdkllj;//total pkb
	return pkb;
}

int Denda(int telat, int pajak){
		telat=pajak*0.25*telat/12;//denda keterlambatan pkb
	return telat;
}

int Swdkllj(int swdkllj){
	if(swdkllj>100000){
		swdkllj=swdkllj+100000;//denda untuk mobil
	}
	else{
		swdkllj=swdkllj+32000;//denda untuk motor
	}
	return swdkllj;
}
