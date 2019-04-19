#include <stdio.h>


int x,y,z,hp,sta,peluru,air,P3K,pil,pilsetting,flag,kakak,ayah,ibu,teman,mobil,daging,gadis,achend1,achend2,achend3,achdiri,achend5,achkakak,achmati,achparah,achclosecall,achwin,achdelusi,achdelorean,achgajadi,achdiri,achloop,achbundir,j,k,l,m,pil2,pils,pilpr,pilpr2,pils1,y,n;
char pil1,a,b,c,d,e,pilmg,pilyn1,pilyn2,pilres,pilspeed,pils2,pilynmg; /*Penjelasan variabel terdapat pada komentar di setiap penggunaan variabel*/


type(const char * p){ /*fungsi untuk membuat efek mengetik, kecepatannya diatur variabel j*/
	if(NULL == p){
		return;
	}
	while (*p)
	{
		printf("%c",*p++);


   for (x = 1; x <= j; x++)
       for (y = 1; y <= 30000; y++)
       {}


	}
	sleep(m);/*jeda antarkalimat, diatur variabel m berdasarkan detik*/
}
types(const char * p){ /*fungsi untuk membuat efek mengetik lambat, kecepatannya diatur variabel k*/
	if(NULL == p){
		return;
	}
	while (*p)
	{
		printf("%c",*p++);


   for (x = 1; x <= k; x++)
       for (y = 1; y <= 30000; y++)
       {}


	}
	sleep(m);/*jeda antarkalimat, diatur variabel m berdasarkan detik*/
}

typef(const char * p){ /*fungsi untuk membuat efek mengetik sekejap*/
	if(NULL == p){
		return;
	}
	while (*p)
	{
		printf("%c",*p++);


   for (x = 1; x <= 1; x++)
       for (y = 1; y <= 30000; y++)
       {}


	}
   for (x = 1; x <= 2000; x++)
       for (y = 1; y <= 30000; y++)
       {}
}

int statush(){/*fungsi yang menampilkan status ditengah cerita pada branch hutan*/
	printf("\n||||Status saat ini||||\n");
	printf("Hp : %d	    Stamina : %d     peluru : %d		\n\n",hp,sta,peluru);

	}

statusgo(){/*fungsi yang menampilkan status saat gameover*/
		printf("                 \n||||Status anda sebelum mati||||\n");
		printf("status anda: HP = %d  peluru = %d  Stamina = %d  air=%d  P3K=%d\n",hp,peluru,sta,air,P3K);
		printf("party: \n");
		if (kakak==1){printf("-Kakak\n");
		}
		if(gadis==1){printf("-Gadis kecil\n");
		}
		if(ayah==1){printf("-ayah\n");
		}
		if(ibu==1){printf("-ibu\n");
		}
		if (teman==1){printf("-Teman\n");
		}
		printf("key item: \n");
		if(mobil==1){printf("-Mobil\n");
		}
		if (daging==1){printf("-Daging Anjing\n");
		}
}

status(){/*fungsi yang menampilkan status ketika input s pada pilihan cerita, sekaligus menu untuk menggunakan item dan restart game.*/
		printf("                 \n||||Status saat ini||||\n");
		printf("status anda: HP = %d  peluru = %d  Stamina = %d  air=%d  P3K=%d\n",hp,peluru,sta,air,P3K);
		printf("party: \n");
		if (kakak==1){printf("-Kakak\n");
		}
		if(gadis==1){printf("-Gadis kecil\n");
		}
		if(ayah==1){printf("-ayah\n");
		}
		if(ibu==1){printf("-ibu\n");
		}
		if (teman==1){printf("-Teman\n");
		}
		printf("key item: \n");
		if(mobil==1){printf("-Mobil\n");
		}
		if (daging==1){printf("-Daging Anjing\n");
		}
		printf(" 1)lanjut cerita\n 2)P3K(+30 HP)\n 3)Minum(+30 Stamina)\n 4)Restart game\n");
		printf("pilihan anda: \n");
		scanf("%d",&pil);


if (pil==3){
	if(air>0){
	air--;
	sta+=30;}
	else{
	type("Anda tidak punya persediaan air!\n");
	}
	printf("persediaan air sekarang %d\n",air);
	printf("kembali ke pilihan cerita...\n");}

else if(pil==2){
	if(P3K>0){
	P3K--;
	hp+=30;}
	else{
	type("anda tidak punya persediaan P3K!\n");
	}
	printf("persediaan P3K sekarang %d\n",P3K);
	printf("kembali ke pilihan cerita...\n");
}
else if(pil==1){
	printf("kembali ke pilihan cerita...\n pilihan:");
	return;
}
else if(pil=4){
	yakinres();
}
else{
		printf("kembali ke pilihan cerita...\n pilihan:");
	return;
}
}
int yakinres(){/*fungsi yang menanyakan keyakinan pemain sebelum restart*/

	type("\nYakin ingin restart game?.\n");
					printf("1)TIDAK\n2)YA\n");
			printf("pilihan: ");
			scanf("%d", &pil);
				if(pil==1){
					printf("kembali...");
					return;
				}
				else if(pil==2){
				type("Restarting game... :)\n");
				system("pause");
				return menu();}
				else{
						return;
		return;}
}



int setting(){/*fungsi pengaturan kecepatan dan jeda text*/
system("cls");

if (j==50){
l==2;
}
else if (j==10){
l==1;
}
else if(j==150){
l==3;
}
else{
l==2;
}

printf("Pengaturan sekarang adalah\n");
printf("text speed: %d \n",l);
//printf("nilai speed text: %d \n",j);
//printf("nilai speed slowtext: %d \n",k);
printf("waktu jeda antakkalimat: %d detik. (default=1 detik\n",m);
type("*keterangan = 1 cepat, 2 sedang, speed 3 lambat. default=speed 2\n");
pilihansetting();
}
int pilihansetting(){/*fungsi pilihan pengaturan kecepatan dan jeda text*/
printf(" 1/any key)kembali ke menu \n 2)Ganti Text Speed\n 3)Ganti jeda antarkalimat \n\n");
			printf("pilihan: ");

			scanf("%d", &pilsetting);
				if(pilsetting==2){
					printf("\n Ganti Text speed\n");
					pilsetspeed();
				}
				else if(pilsetting==3){
				type("\n Ganti jeda)\n");
				pilsetjeda();}
				else{
				menu();
					}
}


int pilsetjeda(){/*fungsi pengaturan jeda*/
	printf("masukan berapa detik anda ingin jeda antarkalimatnya (input 0 untuk hilangkan jeda)\n");
	printf("jeda antarkalimat(detik): ");
	scanf("%d",&m);
	type("jeda anda,\n");
	type("sekarang adalah:\n");
	printf("%d detik.\n",m);
	system("pause");
	setting();

}
int pilsetspeed(){/*fungsi pengaturan kecepatan text*/
	j=j-j;/*mereset variabel text normal sebelum perubahan*/
	k=k-k;/*mereset variabel text lambat*/
	l=l-l;/*mereset variabel jenis kecepatan text yang tersedia*/
	printf("speed baru (1/2/3) = ");
	scanf("%d",&pilspeed);
	if(pilspeed==1){
		j+=10;
		k+=300;
		l+=1;
	}
	else if(pilspeed==2){
		j+=50;
		k+=500;
		l+=2;
		}
	else if(pilspeed==3){
		j+=150;
		k+=700;
		l+=3;
		}
	else{
		printf("input invalid, kembali ke speed default\n");
		j+=50;
		k+=500;
		l+=2;
		}

type("speed text anda sekarang berada dalam kecepatan");printf(" %d \n",l);
types("slowtext anda secepat ini.\n");
		system("pause");
		system("cls");
		setting();
}

gameover(){/*fungsi yang tampil saat variabel parameter keberhasilan game dibawah ketentuan pada mode HUTAN*/
	type("sampai sinilah perjalanan anda......\n");
	type("GA");type("ME\n");
	type("OV");type("ER");
printf("                 XXXXXXXXXXXXXXX\n");
printf("             XXXXXXXXXXXXXXXXXXXXXXX\n");
printf("         XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
printf("         XXXXXXX XXXXXXXXXXXXXXXXX XXXXXXXX\n");
printf("       XXXXXxX    xXXXXXXXXXXXXx     XXXXXXX\n");
printf("       XXXXXXX     xXXXXXXXXXXx       xXXXXX\n");
printf("	XXXXXXx    xXXXXXXXXXXXXx    xXXXXXX\n");
printf("	XXXXXXXX  xXXXXXx  xXXXXXx  XXXXXXXX\n");
printf("	 XXXXXXXXXXXXXXx    xXXXXXXXXXXXXXX\n");
printf("	 XXXXXXXXXXXXXXx    xXXXXXXXXXXXXXX\n");
printf("	  XXXXXXXXXXXXXXxxxxxxxXXXXXXXXXXX\n");
printf("	   XXXXX|||||||||||||||||||||XXXX\n");
printf("	   XXXXX                     XXXX\n");
printf("	    XZXX                     XXXX\n");
printf("	    XXXX|||||||||||||||||||||XXXX\n");
printf("	     xXXXXXXXXXXXXXXXXXXXXXXXXXx\n");
printf("	      XXXXXXXXXXXXXXXXXXXXXXXXX\n");
printf("	       XXXXXXXXXXXXXXXXXXXXXXX\n");
printf("	       	  xxxxxxxxxxxxxxxxxx\n\n\n\n");



printf("        ||||||    |||||     ||||||||   ||||||\n");
printf("        ||        || ||     || || ||   ||     \n");
printf("        || |||    |||||     || || ||   ||||||\n");
printf("        ||  ||    || ||     || || ||   ||     \n");
printf("        ||||||    || ||     || || ||   ||||||\n");
printf("				 \n");
printf("				 \n");
printf("        ||||||    ||     ||    ||||||   |||||\n");
printf("        ||  ||     ||   ||     ||       ||  ||\n");
printf("        ||  ||      || ||      ||||||   || ||\n");
printf("        ||  ||       |||       ||       |||\n");
printf("        ||||||        |        ||||||   || |||\n\n");
achmati+=1;
	type("anda telah mati di hutan dengan status: \n");

		statusgo();

	type("Jangan menyerah! Ayo semangat dikehidupan berikutnya!\n");
	system("pause");
	menu();
}
gameover1(){/*fungsi yang tampil saat variabel parameter keberhasilan game dibawah ketentuan pada mode KOTA*/
	type("sampai sinilah perjalanan anda......\n");
	type("GA");type("ME\n");
	type("OV");type("ER");
	printf("                 XXXXXXXXXXXXXXX\n");
printf("             XXXXXXXXXXXXXXXXXXXXXXX\n");
printf("         XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
printf("         XXXXXXX XXXXXXXXXXXXXXXXX XXXXXXXX\n");
printf("       XXXXXxX    xXXXXXXXXXXXXx     XXXXXXX\n");
printf("       XXXXXXX     xXXXXXXXXXXx       xXXXXX\n");
printf("	XXXXXXx    xXXXXXXXXXXXXx    xXXXXXX\n");
printf("	XXXXXXXX  xXXXXXx  xXXXXXx  XXXXXXXX\n");
printf("	 XXXXXXXXXXXXXXx    xXXXXXXXXXXXXXX\n");
printf("	 XXXXXXXXXXXXXXx    xXXXXXXXXXXXXXX\n");
printf("	  XXXXXXXXXXXXXXxxxxxxxXXXXXXXXXXX\n");
printf("	   XXXXX|||||||||||||||||||||XXXX\n");
printf("	   XXXXX                     XXXX\n");
printf("	    XZXX                     XXXX\n");
printf("	    XXXX|||||||||||||||||||||XXXX\n");
printf("	     xXXXXXXXXXXXXXXXXXXXXXXXXXx\n");
printf("	      XXXXXXXXXXXXXXXXXXXXXXXXX\n");
printf("	       XXXXXXXXXXXXXXXXXXXXXXX\n");
printf("	       	  xxxxxxxxxxxxxxxxxx\n\n\n\n");



printf("        ||||||    |||||     ||||||||   ||||||\n");
printf("        ||        || ||     || || ||   ||     \n");
printf("        || |||    |||||     || || ||   ||||||\n");
printf("        ||  ||    || ||     || || ||   ||     \n");
printf("        ||||||    || ||     || || ||   ||||||\n");
printf("				 \n");
printf("				 \n");
printf("        ||||||    ||     ||    ||||||   |||||\n");
printf("        ||  ||     ||   ||     ||       ||  ||\n");
printf("        ||  ||      || ||      ||||||   || ||\n");
printf("        ||  ||       |||       ||       |||\n");
printf("        ||||||        |        ||||||   || |||\n\n");
achmati+=1;
	type("anda telah mati di kota dengan status: \n");

		statusgo();

	type("Jangan menyerah! Ayo semangat dikehidupan berikutnya!\n");
	system("pause");
	menu();
}

gameoverbundir(){/*fungsi yang tampil saat variabel parameter keberhasilan game dibawah ketentuan dengan cara bunuh diri*/
	type("sampai sinilah perjalanan anda......\n");
	type("GA");type("ME\n");
	type("OV");type("ER\n");
printf("------------------------------���--------\n");
printf("---------------------------��������------\n");
printf("-------------------------������������----\n");
printf("-----------------------���������������---\n");
printf("-----------------------����������������--\n");
printf("----------���---�����������������������--\n");
printf("---------������������������������������--\n");
printf("----------�����������������������������--\n");
printf("----------�����������������������������--\n");
printf("--------�����������----����������������--\n");
printf("-------�������������----��������������---\n");
printf("---���������-����--------�������������---\n");
printf("--����������-����---------�����������----\n");
printf("-��������----����---------�����������----\n");
printf("��������----------------�������������----\n");
printf("��������---------���--���������������----\n");
printf("�������-----��������������������������---\n");
printf("�������----����������������������������--\n");
printf("������---��������������������������������\n");
printf("�����--����������������������������������\n");
printf("�����-�����������������������������������\n");
printf("�����-�����������������������������������\n");
printf("�����������������������������������������\n");


printf("        ||||||    |||||     ||||||||   ||||||\n");
printf("        ||        || ||     || || ||   ||     \n");
printf("        || |||    |||||     || || ||   ||||||\n");
printf("        ||  ||    || ||     || || ||   ||     \n");
printf("        ||||||    || ||     || || ||   ||||||\n");
printf("				 \n");
printf("				 \n");
printf("        ||||||    ||     ||    ||||||   |||||\n");
printf("        ||  ||     ||   ||     ||       ||  ||\n");
printf("        ||  ||      || ||      ||||||   || ||\n");
printf("        ||  ||       |||       ||       |||\n");
printf("        ||||||        |        ||||||   || |||\n\n");

	type("anda telah mati bunuh diri dengan status: \n");
	achbundir+=1;

		statusgo();

	type("Jangan menyerah! Ayo semangat dikehidupan berikutnya!\n");
	system("pause");
	menu();
}

int win(){/*fungsi yang tampil saat pemain menemukan END atau ujung cerita game*/
	types("\n\nSELAMAT!!!!!!\n\n");
	printf("________�������������������������� \n");
printf("________�������������������������� \n");
printf("___������������������������������������� \n");
printf("_����������������������������������������� \n");
printf("����______����������������������_______���� \n");
printf("���_______����������������������________��� \n");
printf("��________����������������������________��� \n");
printf("���_____��������������������������______��� \n");
printf("���____����������������������������____���� \n");
printf("_���___���_��������������������_���____��� \n");
printf("_����___���_������������������_����__���� \n");
printf("___����__�������������������������_����� \n");
printf("____��������_����������������_��������� \n");
printf("______������__��������������___������ \n");
printf("_______________������������ \n");
printf("_________________�������� \n");
printf("___________________���� \n");
printf("___________________���� \n");
printf("___________________���� \n");
printf("___________________���� \n");
printf("_______________������������ \n");
printf("____________������������������ \n");
printf("____________������������������ \n");
printf("____________���____________��� \n");
printf("____________���____________��� \n");
printf("____________���____________��� \n");
printf("____________������������������ \n");
printf("____________������������������ \n");
printf("__________���������������������� \n");
printf("_________������������������������\n");
achwin+=1;
	if(hp==0 | peluru==0 | sta==0){
		achclosecall+=1;
	}
type("TERIMAKASIH TELAH MEMAINKAN PERMAINAN KAMI\n");
type("Silakan cek menu Achievement untuk melihat penghargaan anda :)\n");
system("pause");
system("cls");
menu();

}

int inva(){/*pesan kesalahan*/
printf("Mohon pilih pilihan yang tersedia. (Apabila pesan ini terulang berarti pilihan anda invalid dan anda dapat input ulang) \n");
}

int skip(){/*pilihan untuk skip intro/tidak*/
	scanf("%c",&pil1);

	if (pil1=='a'){
		story2();}
		else if(pil1=='b'){
		story1();}
		else if(pil1=='s'){
		status();
		return skip();
			}
	else{
		inva();
		skip();}
}
int story1(){/*intro cerita*/
	system("pause");system("cls");

	type("Hening\n");
	types("......\n");
	type("Sepertinya keadaan diluar sudah lebih tenang\n");
	type("namun gerombolan zombe itu sepertinya tidak tertarik untuk meninggalkan kompleks perumahan ini\n");
	type("Kawan anda yang seorang polisi meninggalkan pistolnya\n");
	type("40 calliber, dengan 10 peluru didalamnya\n");
	type("Anda mendoakan kepergian beliau, lalu menutupi wajahnya dengan kain dan menaruh bunga palsu dari ruang tamu di dadanya.\n");
	type("A moment of silence...\n");
	types(". . . .");
	type("Selamat jalan kawan, kupastikan pistolmu ini bermanfaat\n");
	system("pause");
	system("cls");
	type("Anda adalah seorang fresh graduate teknik komputer dari suatu universitas lokal\n");;
	type("Anda memiliki hobby bermain game shooting, sehingga anda tidak asing dengan menembak\n");
	type("Anda sudah memiliki pekerjaan sejak 1 bulan lulus dengan gaji yang anda rasa cukup\n");
	type("dari sini, hidup sepertinya tinggal mengikuti arus saja tidak masalah\n");
	system("pause");
	type("Namun semua berubah ketika wabah zombie menyebar tiba-tiba entah darimana\n");
	type("begitu cepat, anda bahkan baru tahu wabah ini terjadi sekitar 2 jam lalu\n");
	type("waktu itu anda sedang sekedar bersilahturahmi dengan teman lama anda yang seorang polisi di kompleks perumahannya\n");
	type("kompleks perumahannya ada didekat hutan, dengan gerbang belakang sebagai pintunya\n");
	type("teman anda memberitahu bahwa entah mengapa stasiun televisi dan semua sinyal elektronik lenyap sejak pagi ini\n");
	type("mungkin itulah kenapa tidak ada yang menyangka, kalau 2 jam lalu rombongan zombie sudah didepan pintu gerbang komplek\n");
	system("pause");
	type("\nhanya dalam 2 jam, seluruh penghuni komplek menjadi zombie\n");
	type("semua berlalu terlalu cepat\n");system("pause");

	story2();
}
int story2(){/*pilihan yang mencabang ke mode KOTA dan HUTAN*/
	printf("Dari sini anda punya 2 pilihan\n");system("pause");
	printf("\n 1)Lari ke hutan lewat gerbang belakang\n");
	printf("secara akal logika,\n Tempat pelarian terbaik saat ada kiamat zombie adalah daerah yang rawan manusia\n");system("pause");
	printf("\n 2)Tetap dikota, \n Masih ada sanak saudara yang anda khawatirkan disini\n");
	printf("Pintu depan terhalang gerombolan zombie\n");
	printf("namun anda memiliki hipotesis kalau pada malam hari zombie tidak begitu mudah merasakan keberadaan anda, dan anda bisa menyusup keluar\n");system("pause");
	type("pilihan berikut akan sangat mempengaruhi perjalanan anda\n\n");
	printf("Pilihan :\n");
	printf(" a. Hutan (normal mode)\n");
	printf(" b. Kota (hard mode))\n");
	printf(" c. Apa perbedaanya?\n\n");
	pilstory();
}
int pilstory(){/*memilih rute HUTAN atau KOTA*/
	scanf("%c",&pil1);

	if (pil1=='a'){
		hutan();}
	else if(pil1=='b'){
		kota();}
	else if(pil1=='c'){
	printf("\n[Di normal mode anda akan sering-sering diingatkan status dan tidak begitu banyak pilihan jebakan dibanding hardmode]\n");
	system("pause");
	return pilstory();}
			else if(pil1=='s'){
		status();
		return skip();
			}
	else{
		inva(); /*kalau tidak bisa: ba= a, ab=b*/
		return pilstory();
	}
}

/*Normal Mode (PILIHAN HUTAN)*/
int hutan(){/*Permulaan saat memilih branch hutan*/
	kakak==0;mobil==0;gadis==0;ayah==0;ibu==0;teman==0;
	types("\n anda memilih pergi ke hutan . . .\n");
	system("cls");
	type("Anda memasuki hutan dan berlari semakin dalam ke hutan.\n");
	type("Anda melihat zombie di belakang anda.\n");
	type("Anda baru saja kehilangan orang yang anda sayangi.\n");
	type("Anda merasa untuk menebak 1 zombie ini saja akan cukup sulit.\n");
		printf("Pilihan :\n");
	printf(" a. Tembak.(peluru-5) \n");
	printf(" b. Lari.(Stamina-30)\n");
	printf(" c. Pukul dengan kayu.(Health-20)\n\n");
	pil1hutan();/*Bagian pemilihan yang pertama pada branch hutan*/



	type("Tidak lama kemudian, anda mendengar suara air dan tanah di sekitar anda lembab.\n");
	type("Tapi kemudian anda juga melihat di kejauhan ada tempat yang lebih terang.\n\n");
	printf("Pilihan :\n");
	printf(" a. Pergi ke sumber suara air (Mungkin ada sungai).\n");
	printf(" b. Pergi ke tempat yang lebih terang (Mungkin itu padang rumput atau tempat luas lainnya).\n\n");

	pilihan2hutan();/*Pilihan kedua pada hutan*/
}
int pil1hutan(){

		scanf("%c",&pil1);/*Variabel pada pilihan pertama di hutan*/

	if (pil1 =='a'){
		printf("Anda menembak zombie tersebut. (peluru berkurang 5)\n");
		peluru-=5;

		}
	else if(pil1=='b'){
			printf("Anda memilih untuk berlari. (Stamina - 50)\n");
			sta-=30;

			}
		else if(pil1=='c'){
			printf("Anda memilih memukulnya dengan batang kayu. (Health - 20)\n");
			type("zombie itu telah mencakar anda\n");
			type("beruntungnya tidak tergigit\n");
			hp-=20;		}
		else if(pil1=='s'){
	    status();
	    return pil1hutan();  }
	else{
				printf("Pilihan yang anda pilih invalid. Mohon pilih pilihan yang tersedia.\n");
				return pil1hutan();
			}

		if(hp<=0 | peluru<=0 | sta<0){
		type("Anda mati . . .\n");
		gameover();
}
system("pause");
}
int pilihan2hutan(){/*Pilihan yang kedua pada hutan*/

	scanf("%c",&pil2);/*Variabel pada pilihan kedua di hutan*/

	if (pil2=='a'){
		type("Anda berjalan menuju sumber suara air tersebut.\n");

		Sungai();
	}else if(pil2=='b'){
		type("Anda menuju ke sumber cahaya.\n");

		padangrumput();}
	else if(pil2=='s'){
	    status();
	    return pilihan2hutan();}
	else{
		printf("Pilihan yang anda pilih invalid. Mohon pilih pilihan yang tersedia. Pilih a atau b saja.\n");
	return pilihan2hutan();
	}
	system("pause");
	printf("\n");
}

int Sungai(){/*Perpindahan menuju sungai*/
	type("Anda berjalan dan melihat sebuah sungai\n");
	type("Dalam perjalanan, anda melihat berry berwarna merah dan ungu.\n");
	printf("Pilihan :\n");
	printf(" a. Makan berry merah.\n");
	printf(" b. Makan berry ungu.\n");
	printf(" c. Makan keduanya.\n");
	printf(" d. Biarkan saja.\n");
	pilihan1sungai();/*Pemilihan pertama pada sungai*/
}
int pilihan1sungai(){/*Pemilihan pertama pada sungai*/ /**/
	scanf("%c",&pils1);/*Variabel pada pemilihan pertama di sungai*/
	if (pils=='a'){
		type("Berry tersebut tidak beracun. (Health + 5)\n");
		hp+=5;
		statush();
		}
	else if(pils1=='b'){
		type("Berry tersebut beracun. (Health - 80)\n");
		hp-=80;
		}

		else if(pils1=='c'){
			type("Berry ungu beracun namun berry merah merupakan penawar racun berry ungu.\n");
			type("Anda tidak mendapat perubahan status apapun...\n");

		}
		else if(pils1=='d'){
			type("Anda membiarkan berry tersebut.\n");

		}
		else if(pils1=='s'){
	    status();
	    return pilihan1sungai(); }
		else {
			printf("Pilihan yang anda pilih invalid. Mohon pilih pilihan yang tersedia. Pilih a, b ,c atau d saja.");
		statush();
			return pilihan1sungai();
		}

			if(hp<1 | peluru<=0 | sta<0){

		      type("Anda mati keracunan. . .\n");
		      gameover();}
		      system("pause");
		      printf("\n");
				lnjsungai();}

int lnjsungai(){/*Cerita lanjutan dari pemilihan pertama di sungai*/


	type("Anda melanjutkan perjalanan menuju sungai.\n");
	type(". . . . . .\n");
	type("!!!!!!!!\n");
	type("Tiba - tiba ada serigala yang menerkam anda dari balik pohon!!(Hp - 20)\n");
	hp-=20;
		if(hp<=0 | peluru<=0 | sta<0){
		type("Anda dibunuh serigala...");
		gameover();
}
	type("Anda terpaksa menembak serigala tersebut(peluru-1).\n");
	peluru-=1;
	type("Karena kaget oleh serigala tersebut anda sedikit lelah (Stamina -5)");
	sta-=5;
	statush();
	system("pause");
	type("Anda melanjutkan perjalanan.");
	type("Setelah berjalan beberapa saat anda semakin dekat dengan sungai.\n");
	type("Namun, di kejauhan anda melihat 4 zombie di dekat sungai.\n");
	type("Anda juga melihat sebuah boat di pinggir sungai.\n");
		printf("Pilihan :\n");
	printf(" a. Tembak 4 Zombie tersebut. (peluru -4)\n");
	printf(" b. Berputar arah ke arah sebelumnya.(Stamina -15)\n");
	pilihan2sungai();
}
int pilihan2sungai(){/*Pemilihan ke dua pada sungai*/


	scanf("%c",&pils2);/*Variabel pilihan ke-dua pada sungai*/
	if(pils2=='a'){
		type("Anda menembak 4 zombie tersebut.\n");
		peluru-=4;
		statush();
		types(". . . . .\n");
		pingsungai();
	}else if(pils2=='b'){
		if(sta>15){

		type("Anda kembali ke arah sebelumnya.\n");
		sta-=15;
		statush();
		balikarah();
		}
		else{
			type("Stamina anda tidak mencukupi...\n");
			type("Anda terpaksa menembak 4 zombie tersebut.\n");
			peluru-=4;

		}
	}
	else if(pils2=='s'){
	    status();
	    return pilihan2sungai(); }
	 else{printf("Pilihan yang anda pilih invalid. Mohon pilih pilihan yang tersedia. Pilih a atau b saja.\n");
	pilihan2sungai();
	}

}
int pingsungai(){/*Lanjutan cerita dari sungai ke pinggiran sungai*/
	type("Anda berjalan ke sungai tersebut dan menaiki boat.\n");
	type("Anda mencoba menyalakan boat...\n");
	type("Boat tidak mau menyala...\n");
	type("Anda memeriksa apa yang menyebabkan boat tidak mau menyala.\n");
	types(". . . . .\n");
	system("pause");
	printf("\n");
	pingsungaigubuk();
}
int pingsungaigubuk(){/*Lanjutan cerita di pinggiran sungai dekat gubuk*/
	type("Ternyata bahan bakarnya habis\n");
	type("Anda hampir putus asa...\n");
	type("Lalu anda melihat ada sebuah gubuk yang berada 100 m dari tempat anda berada.\n");
	type("Namun ada 2 zombie di dekat gubuk tersebut\n");
	printf("Pilihan :\n");
	printf(" a. Tembak 2 Zombie tersebut. (peluru -2)\n");
	printf(" b. Berputar arah ke arah sebelumnya.(Stamina -20)\n");
	printf(" c. Bersembunyi di boat.\n");
	pilihanmgubuk1();
}
int pilihanmgubuk1(){/*Pilihan menuju ke gubuk*/

	scanf("%c",&pilmg);/*Variabel pilihan menuju ke gubuk*/

	if(pilmg=='a'){
		if(peluru>=2){
		type("Anda menembak 2 zombie tersebut.(peluru -2)\n");
		peluru-=2;
		system("pause");
		gubuk();}
		else if(peluru<2){
			printf("peluru tidak cukup.\n");
			system("pause");
		type("Anda melihat sebuah kayu panjang yang cukup untuk memukul dengan keras.\n");
		printf("Ambil kayu dan pukul zombie?\n");
		printf("y/n (y, stamina -10)?\n");
		pilihanmgubuk1a();

		}
	}else if(pilmg=='b'){
		if(sta>20){
			type("Anda berputar ke arah sebelumnya.\n");
			type("Anda melihat tempat terang dan pergi ke tempat tersebut.\n");
			sta-=20;
		balikarah();
		}
		else if(sta=20){ type("Anda akan kehabisan stamina sepenuhnya. Anda yakin?\n");
		scanf("%c",pilyn2);
		  if(pilyn2=='y'){
			sta-=20;
			balikarah();
			padangrumput();}
		  else if(pilyn2=='n'){
			pilihanmgubuk1();}
		}
		else if(sta<20){
			printf("Stamina tidak mencukupi.\n");
			statush();
			system("pause");
			pilihanmgubuk1();
		}
		else if(pilmg=='s'){
	    status();
	    return pilihanmgubuk1(); }
	    else{
			printf("Ketik y atau n saja.\n");
			pilihanmgubuk1();}
		}
	else{
			printf("Pilihlah pilihan yang tersedia.\n");
			pilihanmgubuk1();
		}

	}

int pilihanmgubuk1a(){/*Pilihan jika pilihan yang dipilih pada pilihan sebelumnya adalah a dan peluru habis*/
		scanf("%c",&pilynmg);/*Pilihan yes atau no menuju gubuk*/
		if(pilynmg=='y'){
			type("Anda menerobos 2 zombie tersebut dengan kayu (stamina -10)\n");
			sta-=10;
			gubuk();
		}else if(pilyn1=='n'){
			pilihanmgubuk1();
		}
		else if(pilyn1=='s'){
	    status();
	    return pilihanmgubuk1(); }

		else{
			printf("Pilihlah pilihan yang tersedia.\n");
			pilihanmgubuk1a();
		}
		}




int gubuk(){/*Lanjutan cerita memasuki gubuk*/
	type("Anda memasuki gubuk tersebut.\n");
	type("Anda melihat ke sekeliling.\n");
	types(". . . . . .\n");
	system("pause");
	type("Anda melihat sebuah persediaan bensin.\n");
	type("Anda mengambil persediaan bensin tersebut.\n");
	type("Anda mengisi tanki boat dengan bahan bakar tersebut.\n");
	type("Anda menyalakan boat tersebut.\n");
	types(". . . . . .\n");
	system("pause");
	type("Boat tersebut menyala!\n");
	types("Anda pergi dengan boat tersebut mengikuti alur sungai. . .\n ");
	types(". . . . . . . . . . . .\n");
	system("pause");
	type("Setelah menelusuri sungai beberapa saat, anda melihat sekelompok tentara yang sedang berpatroli.\n");
	type("Anda menyetir boat agar menuju sekumpulan tentara tersebut.\n");
	type("Setelah menepi, tentara - tentara tersebut mengarahkan senjata mereka ke arah anda.\n");
	type(" Tentara : Jangan bergerak! Anda harus diperiksa sebelum diizinkan masuk camp!");
	types(". . . . . . . . . .\n");
	system("pause");
	type("Anda memiliki luka yang disebabkan oleh serigala tadi.\n");
	type("Anda menjelaskan bahwa luka tersebut disebabkan oleh serigala.\n");
	type("Komandan dari para tentara tersebut mengerutkan kening tidak begitu percaya.\n");
	type("Komandan : Lakukan pemeriksaan virus padanya!!\n");
	type("Tentara medis : Siap pak!!!\n");
	type("Tentara medis tersebut melakukan beberapa tes virus pada anda.\n");
	types(". . . . .\n");
	system("pause");
	type("Orang ini tidak terjankit Virus, Pak.\n");
	type("Komandan : Baiklah, masukkan dia ke camp.\n");
	type("Tentara : Baik, Pak!");
	types(" A N D A   S E L A M A T ! ! !\n");
	type("END 1 : Diselamatkan tentara.\n\n");
	achend1+=1;
	win();

}
int balikarah(){/*Pilihan ketika pilihan yang dipilih pada pilihan sebelumnya adalah balik arah*/
	type("Anda memutuskan untuk berbalik arah.\n");
	type("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
	type(" Tiba- tiba ada Serigala dari belakang pohon menyerang anda (Hp-10).\n");
	hp-=10;
			if(hp<1 | peluru<0 | sta<0){
		type("Anda dibunuh serigala...");
		gameover();}
	type("Anda terpaksa menembak serigala tersebut(peluru-1).\n");
	peluru-=1;
			if(peluru<=0 | sta<0){
		type("Ternyata peluru anda habis!\n");
		type("and melawan serigala itu dengan tangan kosong(Health-30)\n");
			if(hp<1){
		type("Anda dibunuh serigala...\n");
		gameover();}
		}
	type("Karena kaget oleh serigala tersebut anda sedikit lelah (Stamina -5)\n");
	sta-=5;
	statush();
	system("pause");
	type("Anda melanjutkan perjalanan dan melihat tempat yang lebih terang yang anda lihat sebelumnya,\n");
	padangrumput();
}
int padangrumput(){/*Cerita jika pilihan yang dipilih adalah ke tempat yang lebih terang*/
	type("Anda pergi ke tempat yang lebih terang tersebut dan menemukan padang rumput yang ternyata tidak begitu luas.\n");
	type("Di belakang anda, anda melihat 3 zombie dan tidak jauh dari 3 zombie tersebut, anda melihat seseorang yang masih hidup.\n");
	type("Ketiga zombie dan orang tersebut tidak berada jauh dari anda. Zombie-zombie tersebut dapat meraih anda dengan waktu yang tidak lama.\n");
	printf("Pilihan :\n");
	printf(" a. Tolong orang tersebut dengan menembak 3 zombie tersebut.(peluru -3)\n");
	printf(" b. Tembak orang tersebut agar dapat memberi waktu untuk kabur ketika zombie memangsa orang tersebut(peluru -1).\n");
	printf(" c. Lari saja.\n");




	pilihanpr();
	/*Pilihan pertama padang rumput*/
}
int pilihanpr(){



	scanf("%c",&pilpr);/*Variabel pilihan pada padang rumput*/
	if(pilpr=='a'){
		type("Anda menembak 3 zombie tersebut dan menyelamatkan seseorang tersebut.\n");
		peluru-=3;
			if(hp<=0 | peluru<=0 | sta<0){
		type("peluru anda tidak cukup dan para zombie sekarang berlari kearah anda...\n");
		system("pause");
		gameover();}
		else{
		type("Orang tersebut berterimakasih kepada anda.");
		type("ternyata memiliki sebuah peralatan p3k praktis dan memberinya pada anda.(P3K+1)\n");
		P3K+=1;
		teman+=1;
		jpr1();}

	}else if(pilpr=='b'){
		type("Anda menembak orang tersebut.\n");
		type("Ketiga zombie memangsa orang tersebut. Dan anda berlari dari sekawanan zombie dan seorang calon zombie tersebut.\n");
		printf("(Stamina -10)\n");
		sta-=10;
		jpr2();
	}else if(pilpr=='c'){
		type("Anda terus berlari tanpa memikirkan orang tersebut.\n");
		sta-=20;
		type("Tiba-tiba orang tersebut melemparkan sebuah batu kepada anda dan mengenai kepala anda.\n");
		type("Anda terhuyung dan kepala anda menabrak sebuah ranting pohon besar.(Health -20)\n");
		type("Anda terjatuh dan salah satu zombie menuju ke keberadaan anda.\n");
			printf("Pilihan :\n");
	printf(" a. Tembak zombie tersebut.\n");
	printf(" b. Pasrah. Tembak kepala anda agar anda tidak menjadi zombie nantinya ketika mati.\n");
		pilihanpr2();
	}
	else if(pilpr=='s'){
	    status();
	    return pilihanpr(); }
	else {printf("Pilihlah a, b , atau c.\n");
	return pilihanpr();
	}

}

int jpr1(){/*Lanjutan cerita padang rumput jalur pilihan nomor 1*/
	statush();
	type("Anda dan orang yang anda selamatkan pergi menelusuri padang rumput.\n");
	type("Anda dan orang tersebut melihat helikopter di kejauhan.\n");
	type("Teman anda tersebut memiliki ide untuk membuat tanda S.O.S.\n");
	type("Ada 2 zombie yang mendekat.\n");
	system("pause");
	teman-=1;

	if(peluru>=2){
		type("Anda menembak kedua zombie tersebut(peluru-2).\n");
		peluru-=2;
		statush();
			type("Anda dan teman anda membuat tanda S.O.S.\n");
		types(". . . . . . . .");
		system("pause");
		type("Helikopter bergerak menuju ke arah anda.\n");
		system("pause");
		types("A N D A   S E L A M A T>>>");
		type("END 2 : Diselamatkan Helikopter");
			achend2+=1;
			win();
	}else if (peluru =1)
	{type("anda menembak salah satu zombie.\n");
	peluru-=1;
	system("pause");
	type("Lalu anda dan teman anda mencoba membunuh zombie satu lagi dengan melempari batu batu yang ada di sekitar.(stamina-10)");
	sta-=10;
	system("pause");}
	else if(peluru<1)
	{type("Anda kehabisan peluru!");
	type("anda mencoba melawan dengan tangan kosong");
	type("anda tergigit!!!!!");
	system("pause");teman+=1;
	gameover();
	}

	if(sta<=0){
		type("Anda kelelahan. Anda sekarang bergantung pada teman anda.\n");
		types(". . . . . . .\n");
		type("Untungnya teman anda tidak mengkhianati anda karena anda menolongnya sebelumnya.");
		type("Teman anda membuat tanda S.O.S.\n");
		types(". . . . . . . .");
		system("pause");
		type("Helikopter bergerak menuju ke arah anda.\n");
		types("A N D A   S E L A M A T>>>");
			type("END 2 : Diselamatkan Helikopter");
			achend2+=1;
			win();
	}else{
		type("Anda dan teman anda membuat tanda S.O.S.\n");
		types(". . . . . . . .");
		system("pause");
		type("Helikopter bergerak menuju ke arah anda.\n");
		types("A N D A   S E L A M A T>>>");
			type("END 2 : Diselamatkan Helikopter");
			achend2+=1;
			win();
	}
	}
	int jpr2(){/*Lanjutan cerita padang rumput jalur pilihan nomor 2*/
	type("Anda melanjutkan perjalanan.\n");
	type("Setelah berjalan beberapa saat, anda melihat jalan menuju kota.\n");
	statush();
		printf("Pergi ke kota? (stamina-5) (y/n?)\n");
	piljprgk();

}
int piljprgk(){/*Pilihan untuk pergi ke kota atau tidak*/

	int pilyn3;
	sta-=5;

	scanf("%c",&pilyn3);/*Variable yes atau no untuk pergi ke kota*/
	if(pilyn3=='y'){
		achloop+=1;
		kekota();
	}else if(pilyn3=='n'){
		printf("Anda memilih untuk melanjutkan perjalanan.\n");

		jpr2a();
	}
		else if(pilyn3=='s'){
	    status();
	    return pilihanpr(); }
	else{printf("Ketik y atau n saja.\n");
	piljprgk();
	}
}
int jpr2a(){
	type("Di padang rumput tersebut matahari terasa sangat panas.\n");
	type("Energi yang dibutuhkan lebih banyak (Stamina -10)");
	sta-=10;
	statush();
	if(sta<=0){
		type("Anda kelelahan, anda tidak bisa pergi kemana mana lagi.\n");
		type("Anda hanya bisa berdiam diri menunggu jika ada bantuan.\n");
		types(". . . . . . . .\n");
		type("(Health -10)\n");
		hp-=10;
		if(hp<=10){
			statush();
			type("Anda telah kalah.......\n");
			gameover();
		}else if(hp>0){
			type("Anda menunggu lagi.\n");
			type("Di kejauhan anda melihat mobil patroli namun anda terlalu lelah untuk berteriak atau memberi isyarat.\n");
			type("Anda terbaring di padang rumput.\n");
			statush();
			if(peluru>0){
				type("Anda mencoba menembakkan peluru agar terdengar.\n");
				types(". . . . . . . .\n");
				type("Tembakkan anda terdengar dan mobil patroli tersebut bergerak menuju anda.\n");
				type("!!!!!!!!!\n");
				type("Ada zombie yang sedang menuju anda karena ia mendengar suara tembakan anda.\n");
				type("zombie itu jauh lebih dekat daripada mobil patroli.");
				if(peluru>0){
					type("Anda menembak zombie tersebut.\n");
				}else{
				types("Zombie itu tiba lebih dulu daripada mobil patroli.");
				types("A N D A   K A L A H");
				gameover();
				}
			}else if(peluru<=0){
				type("Mobil patroli tidak menyadari bahwa anda masih hidup, karena anda hanya terbaring.\n");
				types("Anda putus asa dan anda tak terselamatkan.\n");
				types(" K A L A H");
				gameover();
			}
		}
	}else if(sta>0){
	type("Anda melihat sebuah helikopter sedang terbang di kejauhan.\n");
	type("Anda mencoba untuk membuat tanda S.O.S agar dapat dilihat oleh helikopter.\n");
	type("(Stamina-10)");
	sta-=10;
	statush();
	type("Ada seorang zombie di belakang anda menuju kepada anda.\n");
	if(peluru>=1){
		type("Anda menembak zombie tersebut.\n");
		peluru-=1;
		statush();
		type("Anda menunggu helikopter untuk melihat anda.\n");
		types(". . . . . . .");
		type("Helikopter itu menuju ke arah anda\n");
		types(". . . . . . . . . . . . .\n");
		types("ANDA TERSELAMATKAN......\n");
			type("END 2 : Diselamatkan Helikopter\n");
			achend2+=1;
			win();

	}else{
		if(sta>0){
			type("Anda lari dari zombie itu\n");
			type("Namun, anda tidak bisa terlalu jauh dari tanda S.O.S\n ");
			type("Anda berlari mengitari tanda S.O.S\n");
			sta-=5;
			if(sta<=0){
				type("Anda terlalu lelah dan terjatuh berbaring.\n");
				type("ZOmbie tadi meraih anda");
				types("A N D A  K A L A H");
				gameover();
			}else("Anda mengulur waktu sampai helikopter tersebut sampai.\n");

		}
	}

	}

}
int pilihanpr2(){/*Pilihan yang ke dua pada padang rumput*/



	scanf("%c",&pilpr2);/*Variabel pilihan kedua pada padang rumput*/
	if(pilpr2=='a'){
		type("Anda menembak zombie tersebut.\n");
		types(". . . . .");
		type("Ternyata anda meleset.\n");
		type("Zombie itu menggigit anda....\n");
		gameover();
	}else if(pilpr2=='b'){
		type("Anda bunuh diri dan anda tidak berubah menjadi zombie.\n");
		gameoverbundir();
	}
	else if(pilpr2=='s'){
	    status();
	    return pilihanpr(); }

	else{
		printf("Pilihlah a atau b.\n");
		return pilihanpr2();
	}
}


int kekota(){/*Lanjutan cerita jika memilih untuk pergi ke kota*/
	type("Anda tiba di kota pada malam hari\n");
	type("ternyata jalan tersebut mengarah ke komplek perumahan tadi!!! (Jangan skip intro jika ingin tahu maksudnya)\n");
	system("pause");
	kota();
}




/*MODE KOTA (HARD MODE)*/
int kota (){/*kota intro*/
	kakak==0;mobil==0;gadis==0;ayah==0;ibu==0;teman==0;
	type("Mengingat sanak saudara yang tinggal dikota ini membuat anda tidak tega untuk lari ke hutan yang lebih sepi...\n");
	type("Meskipun peluang kalau mereka masih ada dikota ini atau bahkan masih di bumi ini sekalipun,\n tapi anda merasa apa yang anda lakukan adalah hal yang benar.\n");
	types("Anda memilih untuk terus berada didalam kota . . . . . .\n\n");
	system("pause");
	system("cls");
	kota1();

	return 0;
}
int kota1(){/*kota start*/

	type("Langit menggelap, anda memberanikan diri untuk keluar dari rumah.\n");
	type("kelihatannya hipotesis anda benar,\n bagaimanapun zombie menggunakan mata untuk melihat.\n");
	type("kegelapan membuat zombie tidak begitu peka dengan kehadiran anda\n");
	type("Ini kesempatan anda untuk kabur dari komplek perumahan dengan melompati pagar .\n\n");

	printf("Pilihan :\n");
	printf(" a. Lari.\n");
	printf(" b. Jalan.\n\n");
	pilkota1();



	type("\n\nBerhasil keluar dari kompleks perumahan itu anda dihadapkan 2 pilihan.\n");
	type("Ada 3 orang lain dikota ini yang merupakan keluarga anda, yaitu Orangtua anda dan kakak anda.\n");
	type("Disatu sisi anda bisa langsung kerumah orangtua anda yang sekarang sudah tua, \n yang juga tinggal didaerah yang kebanyakan orang lansia juga.\n");
	type("kemungkinan orangtua anda sudah kabur dari kota atau diselamatkan orang lain tidak besar\n");
	type("Anda takut kalau. membuang waktu sedikitpun saja menambah resiko tidak akan pernah bertemu ayah ibu anda lagi.\n");
	system("pause");
	type("\n Disisi lain, ada rumah kakak anda dekat dari sisni\n");
	type("Fisiknya masih kuat, jadi bisa saja dia sudah kabur dulu, tapi kalau dia masih ada mungkin dia bisa bantu perjalanan ke rumah ayah dan ibu\n\n");
	printf("Pilihan :\n");
	printf(" a. Kerumah Orangtua (Lebih jauh).\n");
	printf(" b. Kerumah Kakak (Lebih dekat).\n\n");

	pilkota2();
}
int pilkota1(){/*kota start choice*/
	scanf("%c",&pil1);

	if (pil1=='a'){
		type("Gerombolan zombie itu mendengar suara anda berlari.\n");
		type("Anda lupa kalau zombie bisa mendengar layaknya manusia.\n");
		type("Berlari dalam gelap sulit juga,\n Salah satu dari zombie tersebut berhasil mencakar anda sesaat sebelum anda melompati pagar.\n");
		type("(Health-30 dan stamina-30 !!)\n");
		hp-=30;sta-=30;}
		else if(pil1=='b'){
		type("Benar! kalau layaknya manusia mereka tidak bisa melihat dalam gelap, pasti mereka tetap bisa mendengar dalam gelap.\n");
		type("Anda berjalan ke pagar dibawah sinar redup rembulan.\n");
			}
		else if(pil1=='s'){
		status();
		return pilkota1();
			}
	else{
		printf("Pilihan yang anda pilih invalid. Mohon pilih pilihan yang tersedia. Pilih a atau b saja :), atau s untuk cek status. \n"); /*kalau tidak bisa: ba= a, ab=b*/
		return pilkota1();
	}

	if(hp<=0 | peluru<=0 | sta<0){
		type("Pendaharan dari cakar zombie itu terlalu banyak. . .\n");
		types("anda merasa lemas\n");
		gameover1();
	}
}
int pilkota2(){/*branch rute kota a dan b*/
	scanf("%c",&pil1);


	if (pil1=='a'){
		type("Anda khwatir dengan kondisi fisik orangtua anda dan tidak bisa membuang waktu sedikitpun .\n");
		type("Anda yakin kakak anda baik-baik saja, Anda memilih untuk langsung kerumah orangtua . . . .\n");
		kota2a();
	}
	else if(pil1=='b'){
		type("Anda berfikir bahwa ada baiknya kerumah kakak anda dulu, dia bisa membantu perjalanan anda ke rumah orangtua.\n");
		type("Anda memilih untuk kerumah kakak dulu . . . .");
		kota2b();}
	else if(pil1=='s'){
	    status();
	    pilkota2();
	}
	else{
		printf("Pilih a atau b saja :), atau s untuk cek status.\n");
	return pilkota2();
	}
	system("pause");
}
/*RUTE KOTA A*/
int kota2a(){/*vendingmachine a*/

	type("Diperjalanan anda menuju rumah orangtua anda, anda melihat sebuah vending machine dengan minuman didalamnya.\n");
	printf("Pilihan :\n");
	printf(" a. Coba pukul vending machine dan ambil P3Knya.\n");
	printf(" b. tinggalkan.\n\n");

	pilkota2b();



	type("Anda melanjutkan perjalanan.\n");

	kota3a();
}

int kota3a(){/*mobil merah*/

	type("Diperjalanan anda melihat mobil berawarna merah.\n");
	printf("Pilihan :\n");
	printf(" a. Anda lulusan teknik, mungkin bisa coba 'hack mobil itu'.\n");
	printf(" b. tinggalkan.\n\n");

	pilkota3a();


		type("\n anda lanjutkan perjalanan dengan berjalan kaki\n");

	kota4a();
}
int pilkota3a(){/*mobil merah choice*/

	scanf("%c",&pil1);

	if (pil1=='a'){
	type("anda merusak kaca mobil itu dengan batu\n");
	type("anda coba 'hack'mobil itu\n");
	type("ternyata anda gagal!");
	type("lagipula istilah 'hack'sepertinya memang tidak tepat untuk mobil...\n");
	type("mungkin ini karena teknik yang anda pernah tekuni adalah teknik komputer?\n");
	type("tanpa anda sadari gerombolan 8 zombie datang kearah anda");
	type("anda menembak mereka dengan pistol");
	type("(peluru-8!!)");
	peluru-=8;
		}
		else if(pil1=='b'){
		type("sebaiknya tidak usah.\n");
		type("lagipula teknik yang anda tekuni adalah teknik komputer\n");
			}
		else if(pil1=='s'){
		status();
		return pilkota3a();
			}
	else{
		printf("Pilih a atau b saja :), atau s untuk cek status.\n");
		return pilkota3a();
	}

	if(hp<=0 | peluru<=0 | sta<0){
		type("Anda menekan pelatuk pistol anda. . .");
		type("peluru ternyata sudah habis");
		gameover1();
	}
	system("pause");
}

int kota4a(){/*anjing liar*/

	type("Anda terus berjalan.\n");
	type("Diperjalanan anda melihat sekelompok anjing liar, jumlahnya 6 ekor.\n");
	type("Anjing-anjing itu terlihat lapar dan ganas\n");
	type("juga menghalangi jalan anda");
	printf("pilihan: \n");
	printf(" a. Beri tembakan peringatan.\n");
	printf(" b. tembak mereka\n");
	printf(" c. cari jalan lain\n\n");


	pilkota4a();


		type("\n anda lanjutkan perjalanan dengan bekas luka-luka\n");

	kota5a();
}
int pilkota4a(){/*anjing liar choice*/

	scanf("%c",&pil1);

	if (pil1=='a'){
	type("anda memberikan tembakan peringatan\n");
	type("kelompok anjing liar itu kabur\n");
	type("kecuali 1 yang berhasil menggigit anda\n");
	type("paling tidak dia bukan zombie.\n");
	type("anda harap...\n");
	peluru-=1;
	hp-=10;
		}
		else if(pil1=='b'){
		type("anda menembaki kelompok anjing liar itu\n");
		type("satu tertembak, sisanya marah dan menggigit anda\n");
		type("anda terkena banyak gigitan\n");
		type("anda merasa kesal dengan anjing liar itu sehingga anda mengambil salah satu dari mereka\n");
		type("lalu berencana untuk menggunakan dagingnya sebagai umpan zombie\n");
		peluru-=6;
		hp-=50;
		daging+=1;}
		else if(pil1=='c'){
		type("anda memilih cari jalan lain meskipun memutar lewat gang\n");
		type("anda cukup kesulitan mencari jalan pintas karena hampir disetiap sudut ada gerombolan zombie\n");
		type("jumlah mereka entah kenapa selalu lebih banyak dari peluru anda meskipun ini adalah gang\n");
		type("disalah satu jalan yang tidak terhalang zombie anda merasa seperti jalan itu tidak asing\n");
		type("sepertinya jalan itu menuju rumah kakak anda\n");
		type("(Anda dapat daging segar!!\n)");
		kota3b();
			}
		else if(pil1=='s'){
		status();
		return pilkota4a();
			}
	else{
		printf("Pilih a atau b saja :), atau s untuk cek status.\n");
		return pilkota4a();
	}

	if(hp<=0 | peluru<=0 | sta<0){
		type("Anda mati dibunuh anjing liar. . .");
		gameover1();
	}
	system("pause");
}

int kota5a(){/*pria in trouble*/
	type("diperjalanan anda bertemu dengan seorang pria dengan pistol dan seorang gadis kecil\n");
	type("sepertinya mereka sedang dalam bahaya\n");
	type("14 zombie mengejar mereka\n");
	type("apa yang akan anda lakukan?\n\n");

	printf("pilihan: \n");
	printf(" a. Bantu tembak zombie itu sebisanya.\n");
	printf(" b. lempar daging anjing kearah zombie!\n");
	printf(" c. tinggalkan mereka\n\n");

	pilkota5a();




	type("Setelah berbicara sejenak tentang perjalanan mereka anda merasa stress anda berkurang(+=10 stamina!!) \n");
	type("anda dan pria yang bersama gadis kecil itu berpisah karena kalian punya tujuan berbeda\n");
	type("anda melanjutkan perjalanan\n");
	P3K+=1;
	sta+=10;
	system("pause");
	kota6a();
}
int pilkota5a(){/*pria in trouble choice*/
		scanf("%c",&pil1);

	if (pil1=='a'){
	type("Anda menembaki zombie yang ada sebisanya\n");
	type("sebagian zombie itu berbalik kearah anda\n");
	peluru-=10;
	type("pria itu menembaki sisa zombie yang ada\n");
	type("kelihatannya dengan taktik divide et impera, pria itu berhasil mengalahkan zombie-zombie yang kebingungan itu.\n");
			type("mereka selamat!");
	type("pria itu berterimakasih dengan memberikan peluru sebanyak yang anda gunakan untuk menembak zombie tadi dan 1 kotak P3K\n");
	type("(peluru kembali kejumlah sebelumnya dan P3K+1!!)\n");
	peluru+=10;
		}
		else if(pil1=='b'& daging==1){
		type("anda melempar  daging anjing\n");
		type("gerombolan zombie itu berebutan untuk memakan daging anjing itu!!\n");
				type("mereka selamat!");
	type("pria itu berterimakasih dengan memberikan 10 peluru dan 1 kotak P3K\n");
	type("(peluru+10 dan P3K+1!!)\n");
		peluru+=10;
			}
		else if(pil1=='b'& daging!=1){
		type("anda melempar apa yang anda pikir daging anjing\n");
		type("padahal anda tidak sedang memiliki daging anjing\n");
		type("namun rupanya yang anda lempar itu pistol anda!!\n");
		type("zombie itu berbalik arah ke anda");
		gameover1();}
		else if(pil1=='c'){
		type("anda memutuskan untuk meninggalkan mereka\n");
		type("dari kejauhan anda mendengar suara pria menjeri 'Lari nak! lari!!! tinggalkan ayah!!!");
		kota6a();
			}
		else if(pil1=='s'){
		status();
		return pilkota5a();
			}
	else{
		printf("Pilih a atau b saja :), atau s untuk cek status.\n");
		return pilkota5a();
	}

	if(hp<=0 | peluru<=0 | sta<0){
		type("Anda mati . . .");
		gameover1();
	}
	system("pause");
}

int kota6a(){/*bensin*/
	type("Anda melihat 5 zombie didepan anda\n");
	type("kali ini ada tumpahan bensin dari mobil dibawah mereka");
	printf("pilihan: \n");
	printf(" a. tembak zombie.\n");
	printf(" b. tembak bensin\n");
	printf(" c. lempar daging anjing kearah zombie!\n");

	pilkota6a();



	type("anda melanjutkan perjalanan...\n");
	system("pause");
		kota7a();
}
int pilkota6a(){/*bensin choice*/
		scanf("%c",&pil1);

	if (pil1=='a'){
	type("anda menembaki 5 Zombie itu\n");
	type("zombie itu mati\n");
	peluru-=5;
	kota7a();}
	if (pil1=='b'){
	type("anda menembaki bensin dibawah 5 zombie itu\n");
	type("Mereka semua terbakar!!!\n");
	type("namunbensin itu terlalu dekat dengan anda juga dan ledakannya mengenai anda\n");
	type("anda terbakar (HP-50)!!!\n");
	hp-=50;
		}
		else if(pil1=='c'& daging==1){
		type("anda melempar  daging anjing\n");
		type("gerombolan zombie itu berebutan untuk memakan daging anjing itu!!\n");
			}
		else if(pil1=='c'& daging!=1){
		type("anda melempar apa yang anda pikir daging anjing\n");
		type("padahal anda tidak sedang memiliki daging anjing\n");
		type("namun rupanya yang anda lempar itu pistol anda!!\n");
		type("zombie itu berbalik arah ke anda");
		gameover1();}

		else if(pil1=='s'){
		status();
		return pilkota6a();
			}
	else{
		printf("Pilih a atau b saja :), atau s untuk cek status.\n");
		return pilkota6a();
	}

	if(hp<=0 | peluru<=0 | sta<0){
		type("Anda mati . . .");
		gameover1();
	}
	system("pause");
}

int kota7a(){/*rumah ortu a*/
	type("Anda sampai kerumah orangtua anda\n");
	type("Sampai di rumah ayah dan ibu kalian melihat rumah mereka dibarikade.\n");
	type("didepan rumah itu banyak zombie berkeliaran.\n");
	type("salah satu dari zombie itu mencoba merusak barikade\n");
	type("D O R!!\n");
	type("suara senapan datang dari rumah ayah dan ibu\n");
	type("itu pasti ayah dengan shotgunnya!");
	type("pikiran bahwa mereka masih hidup membuatku bahagia\n");
	type("zombie itu mati, namun gerombolan zombie lain datang menyampirinya. Mereka semua mencoba merusak barikade\n");
	types("ada 10 zombie ada disitu. \n");
		printf("Pilihan :\n");
	printf(" a. Tembak!!!\n");
	printf(" b. Lempar daging!!\n\n");

	pilkota7a();

		type("Zombie-zombie itu telah mati\n");
		type("anda telah berhasil menyelamatkan barikade orangtua anda!\n");
		type("TOK TOK TOK\n");
		system("pause");
		type("apa yang terjadi selanjutnya adalah momen keluarga bahagia yang sulit diceritakan\n");

	system("pause");
	kota7b();
}
int pilkota7a(){/*rumah ortu a choice*/


	scanf("%c",&pil1);

	if (pil1=='a'){
		type("Anda sendirian menembak zombie yang berada disekitar barikade rumah ayah dan ibu\n.");
		type("(Stamina -30, peluru-10, HP-30!!!!!)\n");

		sta-=30;
		peluru-=10;
		hp-=30;
		}
		else if(pil1=='b'& daging==1){
		type("anda melempar  daging anjing\n");
		type("gerombolan zombie itu berebutan untuk memakan daging anjing itu!!\n");
			}
		else if(pil1=='b'& daging!=1){
		type("anda melempar apa yang anda pikir daging anjing\n");
		type("padahal anda tidak sedang memiliki daging anjing\n");
		type("namun rupanya yang anda lempar itu pistol anda!!\n");
		type("zombie itu berbalik arah ke anda");
		gameover1();}

		else if(pil1=='s'){
		status();
		return pilkota7a();
			}
	else{
		printf("Pilih a atau b saja :), atau s untuk cek status.\n");
		return pilkota7a();
	}

	if(hp<=0 | peluru<=0 | sta<0){
		type("Anda berusaha bertarung. . .\n");
		type("demi orangtua anda\n");
		type("namun apa daya?\n");
		types("kesedihan membasuhi kematian anda...\n");
		gameover1();
	}
	system("pause");
}


/*RUTE KOTA B*/
int kota2b(){/*vendingmachine b*/

	type("Diperjalanan anda menuju rumah kakak anda, anda melihat sebuah vending machine dengan air didalamnya.\n");
	printf("Pilihan :\n");
	printf(" a. Coba pukul vending machine dan ambil minumannya.\n");
	printf(" b. tinggalkan.\n\n");

	pilkota2b();



	type("Anda melanjutkan perjalanan.\n");

	kota3b();
}
int pilkota2b(){/*vendingmachine b choice*/

	scanf("%c",&pil1);

	if (pil1=='a'){
		type("Anda lupa kalau zombie bisa mendengar layaknya manusia.");
		type("Gerombolan zombie itu mendengar suara anda berlari.\n");
		type("Anda melawan dengan pistol.");
		type("(minuman +1 & peluru -3 !!)");
		air+=1;
		peluru-=3;
		}
		else if(pil1=='b'){
		type("sebaiknya tidak usah.\n");
			}
		else if(pil1=='s'){
		status();
		return pilkota2b();
			}
	else{
		printf("Pilih a atau b saja :), atau s untuk cek status.\n");
		return pilkota2b();
	}

	if(hp<=0 | peluru<=0 | sta<0){
		type("Anda menekan pelatuk pistol anda. . .");
		type("peluru ternyata sudah habis");
		gameover1();
	}
	system("pause");
}

int kota3b(){/*save kakak*/
	types("Tok tok tok.\n");
	type("Tidak dijawab.\n");
	type("mungkin dia sudah pergi duluan?\n");
	types("...\n");
	type("HOOOAAAAAGGGHHHHHHHHGGHGHGHHHHGHHGHgGHGHGHHGHGHHGGGHGHGHGHGH\n");
	types("O T A K ..\n");
	type(" !!!!!!!\n");
	type("Ada zombie didalam!?");
	printf("Pilihan :\n");
	printf(" a. Tendang pintunya!!!!\n");
	printf(" b. Tinggalkan...\n\n");

	pilkota3b();

	type("\nKakak anda menghela nafas.\n");
	type("tertawa sejenak.\n");
	type("lalu berteriak. \n");
	type("lalu berterimakasih pada anda dengan muka lega namun anda tidak bisa menahan tawa karena celana kakak anda ternyata basah\n");
	type("kakak anda mengganti celana dulu, ambil suply, lalu ikut bersama anda untuk pergi ke rumah orangtua.\n");
	type("suply dari kakak (+1 P3K  +1 air), sepertinya tidak banyak, dasar kere, tapi yasudahlah.\n");
	system("pause");
	types("(kakak 'joined your party!!')\n\n");

	kota4b();
}
int pilkota3b(){/*save kakak choice*/

	scanf("%c",&pil1);

	if (pil1=='a'){
		type("Anda menendang pintu dengan sekuat tenaga sampai pintu itu jebol\n.");
		type("Anda melihat didepan anda.\n");
		type("kakak anda dan... seorang wanita?\n");
		system("pause");
		type("\n.... Tunggu! itu zombie!! dengan posisi berbahaya!!!\n");
		type("Kakak anda melihat anda dengan muka ketakutan\n");
		type("Anda menembak zombie itu tepat dikepala setelah 2x meleset karena takut menembak kakak anda.\n");
		type("menembak target yang sedang fokus dengan orang yang tidak mau ditembak itu sulit\n");
		type("(peluru -3 & stamina -30 karena menendang pintu!!)\n");
		sta-=30;
		P3K+=1;
		peluru-=3;
		kakak+=1;
		air+=1;
		}
		else if(pil1=='b'){
		types("...........\n");
		type("sepertinya hal terburuk yang anda pikirkan terjadi.\n");
		type("orang didalam itu adalah zombie\n");
		type("anda memutuskan untuk pergi kerumah orangtua anda sendirian\n");
		kota2a();
			}
		else if(pil1=='s'){
		status();
		return pilkota3b();
			}
	else{
		printf("Pilih a atau b saja :), atau s untuk cek status.\n");
		return pilkota3b();
	}

	if(hp<=0 | peluru<=0 | sta<0){
		type("Anda menekan pelatuk pistol anda. . .");
		type("Peluru ternyata sudah habis");
		gameover1();
	}
	system("pause");
}

int kota4b(){/*mobil abu-abu*/

type("diperjalanan anda melihat mobil warna abu-abu terparkir begitu saja\n");
	type("kakak anda lulusan teknik mesin, sepertinya dia mengerti cara starter mobil tanpa kunci (kayaknya?)\n");
	type("kakak anda benar-benar ingin nge-'hack'  mobil.\n");
	type("katanya dia pernah belajar dari katingnya selagi kuliah melalui kegiatan 'tukar wawasan tukar wawasan'\n");
	type("penjelasan itu justru membuat anda tidak yakin\n");
	type("tapi sepertinya kita bisa naik mobil saja, capek kalau jalan kaki sepanjang jalan\n");
	type("lagipula mobil akan sangat membantu untuk membawa ayah dan ibu ketempat aman nantinya.\n");
	type("masalahnya 1 selain ketidakyakinan anda dengan kakak anda\n");
	type("ada sepasang zombie sedang berpacaran di tempat itu\n");
		printf("Pilihan :\n");
	printf(" a. Ambil resiko.\n");
	printf(" b. Tidak usah.\n\n");

	pilkota4b();

	type("\nNaik mobil memang lebih nyaman\n");
	type("lebih lagi pintunya kalau dibuka, arahnya keatas kayak bagasi pesawat.\n");
	type("jadi kalau mau lempar zombie yang memukul pintunya bisa saja.\n");
	type("entah kenapa mobil ini mengingatkan anda dengan film penjelajah waktu\n");
	type("mungkin kalau kita punya 1.21 Jogowatts kita bisa kembali kemasa dimana wabah zombie belum ada hahahaha\n");
	type("sudahlah intermezzonya! mari lanjut perjalanan ke rumah orangtua\n\n ");
	achdelorean+=1;
	system("pause");
	kota5b();
}
int pilkota4b(){/*mobil abu-abu choice*/

	scanf("%c",&pil1);

	if (pil1=='a'){
		type("Anda menembak zombie yang berada disekitar mobil itu\n.");
		type("(peluru-2!!).\n");
		type("kakak anda menggunakan keahlian mesinnya untuk nge-'hack' mobil itu\n");
		type("anda yang lulusan teknik komputer tidak begitu mengerti tentang mesin mobil, jadi kelihatnnya seperti magic\n");
		system("pause");
		type("\n TADAA!!!\n");
		type("Mobil siap dipakai!\n");
		type("(Anda punya mobil sekarang !!)\n");
		sta-=20;
		peluru-=2;
		mobil+=1;
		}
		else if(pil1=='b'){
		types("anda tidak berani mengambil resiko meskipun kakak anda terlihat ingin sekali nge-'hack' mobil\n");
		type("anda memutuskan lanjut saja tanpa mobil\n");
		kota5b();
			}
		else if(pil1=='s'){
		status();
		return pilkota4b();
			}
	else{
		printf("Pilih a atau b saja :), atau s untuk cek status.\n");
		return pilkota4b();
	}

	if(hp<=0 | peluru<=0 | sta<0){
		type("Anda menekan pelatuk pistol anda. . .");
		type("peluru ternyata sudah habis");
		gameover1();
	}
	system("pause");
}

int kota5b(){/*Gadis Kecil*/
	type("perjalanan berlanjut\n");
	type("Dipinggir jalan anda melihat seorang gadis kecil dikejar 4 zombie\n");
	type("Dia terlihat sangat lelah, kakinya biru, sepertinya dia akan jatuh tidak lama lagi.\n");
	type("anda dan kakak anda saling melihat satu sama lain\n");
	printf("Pilihan :\n");
	printf(" a. Tolong dia.\n");
	printf(" b. Tolong dia.\n\n");
	pilgadis();

	type("anda berdua bukan monster, selain itu kakak anda yang memegang setir dan anda akan dihajar apabila menolak\n");
	type("kakak anda memang orang yang berjiwa besar, dan tidak mau meninggalkan orang kesulitan begitu saja\n");
	type("apalagi ");
	types("gadis kecil\n");
	system("pause");
	type("Pilihan baru: \n");
	printf(" a. Tembak zombienya.\n");
	printf(" b. Lindes zombienya.\n\n");

	pilkota5b();

		type("gadis itu berterimakasih dan minta ikut serta dengan kalian\n");
		type("gadis kecil itu cerita kalau ayahnya wafat setelah bertanding dengan zombie sehinngga ia tidak punya lagi siapa-siapa\n");
			printf("Pilihan :\n");
		printf(" a. terima dia.\n");
		printf(" b. terima dia.\n\n");
		pilgadis();
		type("kalian dengan senang hati menerimanya\n");
		type("gadis kecil itu punya peluru\n. peninggalan almarhum ayahnya katanya\n");
		type("(peluru +10 !!!)\n");
		system("pause");
		types("gadis kecil 'joined your party'!!!\n");
		gadis+=1;
		peluru+=10;

	kota6b();
}
int pilgadis(){/*pilihan yang tidak memberi pilihan, yang sebenarnya bagian dari cerita*/
		scanf("%c",&pil1);
	if (pil1=='a'){
		types(".....\n");
	}
	else if (pil1=='b'){
		types(".....\n");
	}
	else{
		achparah+=1;
		type("tidak ada pilihan invalid!\n");
		return pilgadis();
	}
}
int pilkota5b(){/*Gadis kecil Choice*/

	scanf("%c",&pil1);

	if (pil1=='a' ){
		type("Anda menembak zombie yang berada disekitar gadis kecil itu\n.");
		type("DOR DOR DOR!!!!\n");
		type("(peluru-4!!).\n");
		peluru-=4;

		}
		else if(pil1=='b'& mobil==1){
		type("kakak anda membunyikan klakson\n");
		type("zombie-zombie itu melihat arah mobil\n");
		type("degan kemampuan drift yang entah dari mana kakak anda pelajari, zombie itu terlindas dan gadis itu selamat\n");
		type("tapi sayangnya ban mobil kalian jadi kempes\n");
		type("sayangnya, didunia zombie ini tidak ada tukang tambal ban\n");
		type("(Mobil anda kalian tinggalkan!)");
		mobil -= 1;

		}
		else if(pil1=='b'& mobil!=1){
		type("anda dan kakak anda belari ke zombie itu\n");
		type("seolah-olah kalian adalah mobil\n");
		type("padahal kalian bukan mobil!!!!\n");
		type("kalian menggunakan kaki untuk 'melindes' 3 zombie itu\n");
		type("dan gagal, entah kenapa sosok gadis kecil itu membuat kalian luluh dan tidak menggunakan pistol seperti orang normal\n");
		types("kalian semua mati\n");
		gameover();
			}
		else if(pil1=='s'){
		status();
		return pilkota5b();
			}
	else{
		printf("Pilih a atau b saja :), atau s untuk cek status.\n");
		return pilkota5b();
	}

	if(hp<=0 | peluru<=0 | sta<0){
		type("Anda menekan pelatuk pistol anda. . .");
		type("Peluru ternyata sudah habis");
		type("zombie yang tersisa tadi melahap gadis kecil itu\n");
		type("kakak anda menjerit\n");
			if(mobil==1){
		type("ia menghantamkan mobilnya dengan anda didalamnya dalam sebuah kepanikan\n");
		}
			else if(mobil!=1){
		type("zombie itu berbalik kearah kalian yang tidak punya mobil\n");
		type("kalian terlalu sedih untuk berlari\n");
		}
		gameover1();
	}
	system("pause");
}

int kota6b(){/*rumah ortu b*/
	type("kalian bertiga mengarungi kota kerumah ayah dan ibu\n");
	type("Sampai di rumah ayah dan ibu kalian melihat rumah mereka dibarikade.\n");
	type("didepan rumah itu banyak zombie berkeliaran.\n");
	type("salah satu dari zombie itu mencoba merusak barikade\n");
	type("D O R!!\n");
	type("suara senapan datang dari rumah ayah dan ibu\n");
	type("itu pasti ayah dengan shotgunnya!");
	type("pikiran bahwa mereka masih hidup membuatku bahagia\n");
	type("zombie itu mati, namun gerombolan zombie lain datang menyampirinya. Mereka semua mencoba merusak barikade\n");
	types("ada 10 zombie ada disitu. ");
		printf("Pilihan :\n");
	printf(" a. Tembak!!!\n");
	printf(" b. Lindes mereka\n\n");

	pilkota6b();

		type("Zombie-zombie itu telah mati\n");
		type("anda telah berhasil menyelamatkan barikade orangtua anda!\n");
		type("TOK TOK TOK\n");
		system("pause");
		type("apa yang terjadi selanjutnya adalah momen keluarga bahagia yang sulit diceritakan\n");

	system("pause");
	kota7b();
}
int pilkota6b(){/*rumah ortu b choice*/
	scanf("%c",&pil1);

	if (pil1=='a'){
		type("Anda menembak zombie yang berada disekitar barikade rumah ayah dan ibu\n.");
		type("(Stamina -30, peluru-10, HP-30!!!!!)\n");
		sta-=30;
		peluru-=10;
		hp-=30;
		}
	else if(pil1=='b'& mobil==1){
		type("kakak anda membunyikan klakson\n");
		type("zombie-zombie itu melihat arah mobil\n");
		type("degan kemampuan drift yang entah dari mana kakak anda pelajari, zombie itu terlindas dan barikade selamat\n");
		types("DEJA VU!!!!!!!\n");
		type("tapi setidaknya, kalian berhasil\n");
		}
		else if(pil1=='b'& mobil!=1){
		type("anda dan kakak anda belari ke zombie itu\n");
		type("seolah-olah kalian adalah mobil\n");
		type("padahal kalian bukan mobil!!!!\n");
		type("kalian menggunakan kaki untuk 'melindes' gerombolan zombie itu\n");
		type("dan gagal, entah kenapa sosok gadis kecil itu membuat kalian luluh dan tidak menggunakan pistol seperti orang normal\n");
		types("kalian semua mati");
		gameover1();
			}

		else if(pil1=='s'){
		status();
		return pilkota6b();
			}
	else{
		inva();
		return pilkota6b();
	}

	if(hp<=0 | peluru<0 | sta<0){
		type("Anda berusaha bertarung. . .\n");
		type("demi orangtua anda\n");
		type("namun apa daya?\n");
		types("kesedihan membasuhi kematian anda...\n");
		gameover1();
	}
	system("pause");
}

int kota7b(){/*END kota*/
	types("Ayah dan Ibu 'Joined your party!!'\n\n");
	ayah+=1;
	ibu+=1;
	type("Ayah anda menyarankan untuk pergi ke markas tentara untuk mendapatkan perlindungan \n");
	type("Kalian setuju\n");
	system("pause");
	type("Setengah perjalanan anda melihat jalan tertutup rongsokan mobil\n");
	printf("gerombolan zombie tiba-tiba datang\n");
	type("Ada 10\n");
	type("Mereka semua lapar ingin memakan otak manusia\n");
	type("entah kenapa mereka semua bisa belari sangat cepat\n");
	type("inikah akhir perjalanan kalian.....\n?");
	type("dalam keadaan genting ini anda berpirkir\n");
	type("Sepertinya satu-satunya cara agar ada yang selamat apabila ada yang mati menjadi tumbal...\n");

	pilkota7b();

	type("anda berhasil mengalahkan para zombie!!!");
		type("Kalian sampai di markas tentara\n");
		type("Kalian diterima dengan baik oleh para tentara\n");
		type("Helicopter militer akan segera membawa anda ketempat pengungsian yang layak");
		type("Anda berhasil hidup\n");
		achend5+=1;
		types("BEST END Kota");
	win();
}
int pilkota7b(){/*END kota choice*/
	printf("Pilihan :\n");
	printf(" a. Korbankan diri Anda\n");
	printf(" b. Coba bertarung\n");
	printf(" c. Lari secepatnta\n");

	scanf("%c",&pil1);

	if (pil1=='a' & kakak==1){
		type("Anda memberitahu semua bahwa anda akan jadi tumbal agar yang lain bisa tetap hidup\n.");
		type("Namun sebelum bisa melakukan apa-apa, kakak anda mengambil pistol anda\n");
		types("kakak anda lari kearah gerombolan zombie, lalu menembak dirinya sendiri\n");
		type("Ia telah mengorbankan dirinya untuk kalian");
		type(". . . .\n");
		type("tidak ada waktu untuk bersedih\n");
		type("Kalian sampai di markas tentara\n");
		type("kalian diterima dengan baik oleh para tentara\n");
		type("Helicopter militer akan segera membawa anda ketempat pengungsian yang laya\n");
		type("Anda berhasil hidup\n");
		type("Tapi apakah harganya setimbal?\n");
		types("END3: Pengorbanan sang kakak\n");

		kakak-=1;
		achkakak+=1;

		system("pause");
		win();
		}
	else if(pil1=='a'& kakak==0){
		type("Anda memberitahu semua bahwa anda akan jadi tumbal agar yang lain bisa tetap hidup\n.");
		type("sebelum orangtua anda bisa berkata apa-apa\n");
		type("anda berlari menuju gerombolan zombie itu\n");
		type("dengan senyum dan acungan jompol anda menembak diri sendiri\n");
		type("Anda akan segera mati\n");
		type("namun anda tidak sedih\n");
		type("anda dapat menyelamatkan orang yang anda sayangi\n");
		types("END4:Pengorbanan diri\n");
		achdiri+=1;

		system("pause");
		gameoverbundir();

		}
		else if(pil1=='b'){
		type("anda anda melawan gerombolan zombie tersebut dengan pistol (peluru-10)\n");
		peluru-=10;

			}

	else if(pil1=='c'){
		type("dalam kepanikan anda mencoba lari ke suatu gang sempit(stamina-50)\n");
				sta-=50;
		if (sta<0){
			type("namun anda kehabisan stamina dan terjatuh\n");
			type("gerombolan zombie itu datang\n");
			gameover1();

		}
		else{
		type("anda terus belari\n ");
		type("terus belari\n");
		type("dan berlari\n");
		type("anda kembali ke komplek perumahan pertama\n");
		type("anda melihat anda sekarang sendirian\n");
		type("anda kehilangan tujuan hidup dalam kota, dan akhirnya pergi kehutan");

		achloop+=1;
		hutan();
     	}

			}
		else if(pil1=='s'){
		status();
		return pilkota7b();
			}
	else{
		printf("Pilih a atau b saja :), atau s untuk cek status.\n");
		return pilkota7b();
	}

	if(hp<=0 | peluru<0 | sta<0){
		type("Anda berusaha bertarung. . .\n");
		type("Demi orangtua anda\n");
		type("Namun apa daya?\n");
		types("Kesedihan membasuhi kematian anda...\n");
		gameover1();
	}
	system("pause");
}

int story(){/*funsi setelah opsi MULAI dan menampilkan pilihan untuk skip intro cerita*/
	system("cls");
	printf("Skip intro cerita?");
	printf("Pilihan :\n");
	printf(" a. Skip ke pilihan\n");
	printf(" b. Baca intro\n\n");
	skip();

}
int achievement(){/*fungsi yang menamilkan achievement yang didapat dari permaianan*/
	system("cls");
	printf("\n\nBerikut achievement yang anda miliki:\n\n");

	if (achend1>0){
		printf("No.1 Menemukan END 1: Bantuan Militer");printf("(%d x)\n",achend1);
	}
	if (achend2>0){
		printf("No.2 Menemukan END 2: Helicopter");printf("(%d x)\n",achend2);
	}
	if (achkakak>0){
		printf("No.3 Menemukan END 3: Pengorbanan sang kakak");printf("(%d x)\n",achkakak);
	}
	if (achdiri>0){
		printf("No.4 Menemukan END 4: Pengorbanan diri");printf("(%d x)\n",achdiri);
	}
	if(achend5>0){
		printf("No.5 Menemukan END 5: Best end kota. Selamat, ini berkat anda hemat peluru!");printf("(%d x)\n",achend5);
	}
	if(achmati>0){
		printf("No.6 Mati: dibunuh kejamnya dunia zombie. Death count=");printf("(%d x)\n",achmati);
	}
	if (achparah>2){
		printf("No.7 Parah: mencoba untuk tidak pilih menyelamatkan gadis kecil.");
	}
	if(achdelusi>0){
		printf("No.8 Delusi: Mengira bahwa anda bisa melindes zombie seperti mobil");
	}
	if (achgajadi>0){
		printf("No.9 Gak Jadi: mau keluar game tapi gak jadi. gajadi count=");printf("(%d x)\n",achgajadi);
	}
	if(achloop>1){
	printf("No.10 Menemukan cara pindah rute: Hati-hati! perjalanan lintas waktu dapat merusak realita!");
	}
	if(achbundir>0){
	printf("No.11 Bunuh Diri: Selamat tinggal dunia kejam!. death count = ");printf("(%d x)\n",achbundir);
	}
	if(achdelorean>0){
	printf("No.12 DeLorean: GREAT SCOTT!!! ");
	}
	if(achclosecall>0){
	printf("No.13 Close Call: i too like to live dangerously ");printf("(%d x)\n",achclosecall);
    }
	if(achwin>0){
	printf("No.14 Menang: selamat yaaay. win count= ");printf("(%d x)\n",achwin);
    }

	printf("\nAda 14 achievement ayo semangat!!\n hint achievement: \n end1,end2,end3,end4,end5,rasanya ditinggal kekasih,gadis,mobil,exit,routejump,diri,carhack,zero,play.\n\n");
	system("pause");
	system("cls");
	menu();
}
int bantuan(){/*fungsi yang menampilkan bantuan cara bermain game*/
	system("cls");
	printf("\n\nCara bermain:\n");
	printf("1.Masukan input sesuai pilihan yang tersedia\n");
	printf("2.Perhatikan upper/lower case input anda, karena case berpengaruh dalam inputan\n");
	printf("3.Perhatikan status anda. apabila status anda ada yang sampai dibawah 0 anda akan gameover\n (input s untuk cek status) \n");
	printf("4.Tekan enter\n");
	printf("5.Permainan berlanjut\n\n");
	printf("Contoh: \n Ada zombie didepan anda\n");
	printf(" Pilihan:\n a. Tembak(peluru-1) \n b. Lari(stamina-10)\n");
	printf("[Anda masukan input a][Anda tekan enter]\n");
	printf(" Zombie itu mati!\n\n");
	system("pause");
	system("cls");
	menu();
}
int invalid(){/*menampilkan pesan invalid pada menu*/
	printf("Pilihan invalid.\n");
	system("pause");
	system("cls");
	return menu();

}
int keluar(){/*menaampilkan pesan dan pilihan keyakinan keluar program*/
		type("\nYakin ingin keluar? Progress game dan achievement anda akan direset.\n");
					printf("1)TIDAK\n2)YA\n");
			printf("pilihan: ");
			scanf("%d", &pil);
				if(pil==1){
					achgajadi+=1;/*achievement termudah game ini*/
					system("cls");
					menu();
				}
				else if(pil==2){
				type("TERIMAKASIH TELAH BERMAIN GAME KAMI :)\n");
				system("pause");
				return 0;}
				else{
						invalid();
						}
		}
int menu(){ /*menampilkan menu dan set default variabel yang akan selalu reset ketika kembali ke menu*/
	hp=100;sta=100;peluru=10;air=0;P3K=0;kakak=0;mobil=0;gadis=0;ayah=0;ibu=0;teman=0; /*hp=health point,sta=stamina*/
printf("______________________________________________________________________________________________\n");
printf("||    |||||   ||||||||    ||   ||           ||||||    ||||||       ||||||||   ||  ||   ||||||\n");
printf("      ||  ||     ||       ||  ||            ||  ||    ||              ||      ||  ||   ||\n");
printf("      ||||       ||       |||||             ||  ||    ||||||          ||      ||||||   |||||\n");
printf("      ||         ||       ||  ||            ||  ||    ||              ||      ||  ||   ||     \n");
printf("      ||         ||       ||   ||           ||||||    ||              ||      ||  ||   ||||||\n");
printf("\n");
printf("                             |||||   ||||||    ||||||    ||||||           ||             \n");
printf("                             ||  ||  ||        ||  ||    ||   ||                              \n");
printf("                             ||  ||  |||||     ||||||    ||   ||                             \n");
printf("                             || ||   ||        ||  ||    ||  ||                             \n");
printf("                             ||||    ||||||    ||  ||    |||||                            \n");
printf("______________________________________________________________________________________________\n");
	printf("PTK OF THE DEAD: A zombie survival text game by Guna Suryo Aji & Teuku Salman Farizi\n\n");
	printf("MENU:\n");
	printf(" a. MULAI\n b. BANTUAN\n c. ACHIEVEMENT\n d. SETTING\n x.KELUAR\n");
	printf("Pilihan: ");
	scanf("%c", &pil1);


		switch(pil1){
			case 'a':{
				story();
				break;}
			case 'b':{
				bantuan();
				break;}
			case 'c':{
				achievement();
				break;}
			case'd': {
				setting();
				break;
			}
			case 'x':{
				keluar();
				break;}
			default:
		       {
			typef("Pilihan invalid, mohon pilih pilihan yang tesedia");
			system("cls");
			menu();
            break;}
   			 }

}

int main(){/*menampilkan opening game dan set default variabel yang dapat berubah meskipun kembali ke menu*/
type("SELAMAT DATANG DI GAME KAMI :D!!!!\n\n");
achend1=0;achend2=0;achend5=0;achdiri;achkakak=0;achmati=0;achparah=0;achdelusi=0;achgajadi=0;achloop=0;achbundir=0;achdelorean=0;achclosecall=0;achwin=0;/*variabel achievement*/
z=0;j=50;k=500;l=2;m=1;/*m=jeda waktu, l=textspeed number, j=parameter type,k=parameter typeslow*/

printf("PESAN KESEHATAN: \n");
printf("1.Jangan melihat layar terlalu dekat.\n");
printf("2.Ingatlah waktu selagi anda bermain, jangan samapi anda lupa makan dan minum.\n");
printf("3.Jagalah emosi anda selama bermain agar tidak stress. Ini hanya permainan.\n");
printf("Tujuan game ini adalah untuk menghibur dan menghilangkan kebosanan anda. Maka dari itu kami perhatian dengan kesehatan anda\n");
type("UNTUK PENGALAMAN BERMAIN TERBAIK HARAP AKTIFKAN FULSCREEN\n");
system("pause");
printf("SET UP text speed\n");
printf("10= fast, 50=medium(default), 150=slow\n");
printf("Pilihan: ");
scanf("%d",&j);
printf("speed text anda pada adalah %d\n",j);
printf("anda dapat mengganti speed text pada menu setting\n");

system("pause");
type("\n\nGuna Suryo Aji & Teuku Salman Farizi\n");
types("present\n\n");

printf("�������������������                    �������������������`\n");
printf("�����������������      �������������       ����������������\n");
printf("��������������    ����������������������     ��������������\n");
printf("�������������   �����������������������������  ������������\n");
printf("������������  ��������������������������������  �����������\n");
printf("�����������  ���������������������`�����������  ����������`\n");
printf("����������  �����������������������������������  ����������\n");
printf("����������  �  �����������������������������  �  ����������\n");
printf("����������  �  �����������������������������  �� ����������\n");
printf("����������  �  �����������������������������  �� ����������\n");
printf("����������  ��  ����������������������������  �  ����������\n");
printf("����������  ��  ���������������������������  ��  ����������\n");
printf("�����������  �  ���        �����        ���  �  �����������\n");
printf("������������    �          �����          �     �����������\n");
printf("�������������   �    ");types("PTK");printf("   �����    ");types("PTK");printf("   �   �������������\n");
printf("����   �������  ��        �������         ��  ������    ���\n");
printf("���      �����  ���      ���   ���       ���  �����      ��\n");
printf("��  ���  ����  �����   ����     ����   �����  ����  ���  ��\n");
printf("�   ����    ��  ����������   ");types("OF");printf("  ���������� ��     ����   �\n");
printf("  ���������        �������       �������         ��������  \n");
printf("         �����        ����       ����        ������        \n");
printf("��    �     ������     ��������������   �  �����      �   �\n");
printf("����������      ��   ��  �����������  ��   ��      ��������\n");
printf("��������������      �  �           �  �      ��������������\n");
printf("������������������  �  � � � � � � � � �  �����������������\n");
printf("����������������    �� � � � � � � � ���     ��������������\n");
printf("������������     �  ���             ���  �     ������������\n");
printf("����          �����  �����������������  ������         ����\n");
printf("���  �����������       �������������        ����������  ���\n");
printf("����   �����     �����      ");types("THE");printf("      �����     �����   ����\n");
printf("������  ���   �����������   ");types("DEAD");printf("  �����������   ���  ������\n");
printf("������  ��  �����������������������������������  ��  ������\n");
printf("�������    �������������������������������������    �������\n\n\n\n");


menu();
}
