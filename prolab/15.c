/* Memaggil Library */
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<process.h>

/* Keterangan siap panggil */

int loadingscreen();
int clrscr();
int permainandefault();
int permainan();
int bantuan();
int jejak();
int tatacara();
int peraturan();
int copyright();
int english();
int indonesia();
int gameplay();
int guidelines();
int gamedefault();
int game();
int history();
int help();

int loadingscreen(){
	int r, q; /* q dan r sebagai counter untuk mengatur jalan dan kecepatan*/
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t     Loading...\n\t\t\t\t\t\t");
	for(r=1;r<=20;r++){
		for(q=0;q<=10000000;q++); /* counter kecepatan*/
		printf("%c", 177);
	}
	clrscr();
}

int countingscore(){
	int r, q; /* q dan r sebagai counter untuk mengatur jalan dan kecepatan*/
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t   Counting score...\n\t\t\t\t\t\t");
	for(r=1;r<=20;r++){
		for(q=0;q<=10000000;q++); /* counter kecepatan*/
		printf("%c", 177);
	}
	clrscr();
}

int initializing(){
	int r, q;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t     Initializing...\n\t\t\t\t\t\t");
	for(r=1;r<=20;r++){
		for(q=0;q<=10000000;q++); /* counter kecepatan*/
		printf("%c", 177);
	}
	clrscr();
}

/* Fungsi untuk Clear Screen */

int clrscr(){
	system("cls"); /* memanggil fungsi build-in system */
}

int permainandefault(){
	int one_score, two_score, counter; /* Inisialisasi integer */
	char  player_one[20], player_two[20], question[999], ans[10], guess[10]; /* Inisialisasi string [] untuk jumlah max char */
	FILE * fPointer;
	clrscr();
	printf("=======================================================================================================================\n");
	printf("=======================================================================================================================\n");
	printf("                                                                                                                       \n");
	printf("                                                                                                                       \n");
	printf("                                             Pemain Satu, masukkan nama: ");
	scanf("%s",&player_one); /* Scan nama player */
	printf("                                             Pemain Dua, masukkan nama: ");
	scanf("%s",&player_two); /* Scan nama player */
	printf("                                                                                                                       \n");
	printf("                                                                                                                       \n");
	printf("=======================================================================================================================\n");
	printf("=======================================================================================================================\n");
	printf("                                                                                                                       \n");
	printf("                                                                                                                       \n");
	printf("                                                  Halo %s \n", player_one);
	printf("                                                  Halo %s \n", player_two);
	printf("                                                                                                                       \n");
	printf("                                                                                                                       \n");
	printf("=======================================================================================================================\n");
	printf("=======================================================================================================================\n");
	printf("=======================================================================================================================\n");
	printf("=======================================================================================================================\n");
	printf("=======================================================================================================================\n");
	printf("=======================================================================================================================\n");
	printf("                                                                                                                       \n");
	printf("                                                                                                                       \n");
	printf("                                                  Selamat datang                                                       \n");
	printf("                                             Selamat menikmati permainan                                               \n");
	printf("=======================================================================================================================\n");
	printf("=======================================================================================================================\n");
	getch(); /* Agar ada jeda ke screen selanjutnya */
	clrscr();
	printf("=======================================================================================================================\n");
	printf("=======================================================================================================================\n");
	printf("\t\t\t\t\tGiliran %s\n",player_one); /* Menampilkan nama player */
	printf("=======================================================================================================================\n");
	printf("=======================================================================================================================\n");
	printf("\t\t\t\t\tMasukkan pertanyaan: ");
	scanf(" %[^\n]s", &question); /* Scan pertanyaan, dimana [^\n] memberi batas new line */
	printf("\t\t\t\t\tMasukkan jawaban: ");
	scanf("%s",&ans); /* Scan jawaban satu kata */
	one_score=0; /* Skor players dari nol */
	two_score=0;
	for(counter=1; counter<=5;counter+=1){ /* Memulai counter for, 5 sebagai stages */
		clrscr();
		printf("=======================================================================================================================\n");
		printf("=======================================================================================================================\n");
		printf("\t\t\t\t\t\tGiliran %s, tahap ke-%d\n",player_two,counter);
		printf("=======================================================================================================================\n");
		printf("=======================================================================================================================\n");
		printf("\t\t\t\t\t\t%s",question);
		printf("\n\t\t\t\t\t\tMasukkan tebakkan: ");
		scanf("%s",&guess); /* Scan tebakkan */
		if(strcmp(guess, ans)==0){ /* Melakukan comparison antara ans dan guess. Karena tidak bisa ans==guess jadi import <string.h> */
			two_score+=1; /* kalau benar / True, maka skor bertambah 1 */
		}
		else{
			two_score+=0; /* kalau salah / False, maka skor bertambah 0 */
		}
		printf("\t\t\t\t\t\tMasukkan pertanyaan: ");
		scanf(" %[^\n]s",&question);
		printf("\t\t\t\t\t\tMasukkan jawaban: ");
		scanf("%s",&ans);
		clrscr();
		printf("=======================================================================================================================\n");
		printf("=======================================================================================================================\n");
		printf("\t\t\t\t\t\tGiliran %s, tahap ke-%d\n",player_one,counter);
		printf("=======================================================================================================================\n");
		printf("=======================================================================================================================\n");
		printf("\t\t\t\t\t\t%s",question);
		printf("\t\t\t\t\t\tMasukkan tebakkan: ");
		scanf("%s",&guess);
		if(strcmp(guess,ans)==0){ /* Melakukan comparison antara ans dan guess. Karena tidak bisa ans==guess jadi import <string.h> */
			one_score+=1; /* kalau benar / True, maka skor bertambah 1 */
		}
		else{
			one_score+=0; /* kalau salah / False, maka skor bertambah 0 */
		}
		if(counter<5){ /* Agar tidak muncul di stage terakhir, karena stage terakhir player one hanya perlu guess saja */
			printf("\t\t\t\t\t\tMasukkan pertanyaan: ");
			scanf(" %[^\n]s",&question);
			printf("\t\t\t\t\t\tMasukkan jawaban: ");
			scanf("%s",&ans);
		}
		clrscr();
	}
	countingscore();
	clrscr();
	printf("\t\t\t\t\t\t||| SKOR AKHIR |||\n\n\n"); /* Menampilkan skor akhir */
	printf("\t\t\t\t\t\tNama pemain pertama: %s\n", player_one);
	printf("\t\t\t\t\t\tSkor %s: %d\n", player_one, one_score);
	printf("\t\t\t\t\t\tNama pemain kedua: %s\n", player_two);
	printf("\t\t\t\t\t\tSkor %s: %d\n\n", player_two, two_score);
	printf("=======================================================================================================================\n");
	printf("=======================================================================================================================\n");
	if(one_score<two_score){ /* Menampilkan pemenang lewat if perbandingan skor */
		printf("\t\t\t\t\t\tSELAMAT KEPADA %s KAMU MENANG!!!\n",player_two);
	}
	else if(two_score<one_score){
		printf("\t\t\t\t\t\tSELAMAT KEPADA %s Kmu MENANG!!!\n",player_one);
	}
	else{
		printf("\t\t\t\t\t\t Seri!");
	}
	printf("\t\t\t\t\t\t Permainan tersimpan.");
	time_t t = time(NULL); /* Fungsi time, sesuai referensi */
    struct tm *tm = localtime(&t);
    fPointer=fopen("gamehistory.txt","a"); /* open file txt untuk diappend */
	fprintf(fPointer, "%s\t\t\t\t%d\t\t%s\t\t\t\t%d\t\t5\t\t%s\n", player_one, one_score, player_two, two_score, asctime(tm)); /* Isi penambahan / appendnya */
	fclose(fPointer); /* Menutup file */
	getch();
	clrscr();
	initializing();
	clrscr();
	indonesia(); /* Kembali lagi ke menu */
}

int permainan(){
	int one_score, two_score, counter, stages;
	char  player_one[20], player_two[20], question[999], ans[10], guess[10];
	FILE * fPointer;
	clrscr();
	printf("=======================================================================================================================\n");
	printf("=======================================================================================================================\n");
	printf("                                                                                                                       \n");
	printf("                                                                                                                       \n");
	printf("                                             Pemain Satu, masukkan nama: ");
	scanf("%s",&player_one);
	printf("                                             Pemain Dua, masukkan nama: ");
	scanf("%s",&player_two);
	printf("                                                                                                                       \n");
	printf("                                                                                                                       \n");
	printf("=======================================================================================================================\n");
	printf("=======================================================================================================================\n");
	printf("                                                                                                                       \n");
	printf("                                                                                                                       \n");
	printf("                                                  Halo %s \n", player_one);
	printf("                                                  Halo %s \n", player_two);
	printf("                                                                                                                       \n");
	printf("                                                                                                                       \n");
	printf("=======================================================================================================================\n");
	printf("=======================================================================================================================\n");
	printf("=======================================================================================================================\n");
	printf("=======================================================================================================================\n");
	printf("=======================================================================================================================\n");
	printf("=======================================================================================================================\n");
	printf("                                                                                                                       \n");
	printf("                                                                                                                       \n");
	printf("                                                  Selamat datang                                                       \n");
	printf("                                             Selamat menikmati permainan                                               \n");
	printf("=======================================================================================================================\n");
	printf("=======================================================================================================================\n");
	getch();
	clrscr();
	printf("=======================================================================================================================\n");
	printf("=======================================================================================================================\n");
	clrscr();
	printf("=======================================================================================================================\n");
	printf("=======================================================================================================================\n");
	printf("\t\t\t\t\tMasukkan tahapan permainan dalam angka: ");
	scanf("%d", &stages);	/* Meminta stages dari player */
	printf("\t\t\t\t\tGiliran %s\n",player_one);
	printf("=======================================================================================================================\n");
	printf("=======================================================================================================================\n");
	printf("\t\t\t\t\tMasukkan pertanyaan: ");
	scanf(" %[^\n]s", &question);
	printf("\t\t\t\t\tMasukkan jawaban: ");
	scanf("%s",&ans);
	one_score=0;
	two_score=0;
	for(counter=1; counter<=stages;counter+=1){ /* 5 tadi diganti dengan stages */
		clrscr();
		printf("=======================================================================================================================\n");
		printf("=======================================================================================================================\n");
		printf("\t\t\t\t\t\tGiliran %s, tahap ke-%d\n",player_two,counter);
		printf("=======================================================================================================================\n");
		printf("=======================================================================================================================\n");
		printf("\t\t\t\t\t\t%s",question);
		printf("\n\t\t\t\t\t\tMasukkan tebakkan: ");
		scanf("%s",&guess);
		if(strcmp(guess, ans)==0){
			two_score+=1;
		}
		else{
			two_score+=0;
		}
		printf("\t\t\t\t\t\tMasukkan pertanyaan: ");
		scanf(" %[^\n]s",&question);
		printf("\t\t\t\t\t\tMasukkan jawaban: ");
		scanf("%s",&ans);
		clrscr();
		printf("=======================================================================================================================\n");
		printf("=======================================================================================================================\n");
		printf("\t\t\t\t\t\tGiliran %s, tahap ke-%d\n",player_one,counter);
		printf("=======================================================================================================================\n");
		printf("=======================================================================================================================\n");
		printf("\t\t\t\t\t\t%s",question);
		printf("\t\t\t\t\t\tMasukkan tebakkan: ");
		scanf("%s",&guess);
		if(strcmp(guess,ans)==0){
			one_score+=1;
		}
		else{
			one_score+=0;
		}
		if(counter<stages){
			printf("\t\t\t\t\t\tMasukkan pertanyaan: ");
			scanf(" %[^\n]s",&question);
			printf("\t\t\t\t\t\tMasukkan jawaban: ");
			scanf("%s",&ans);
		}
		clrscr();
	}
	countingscore();
	clrscr();
	printf("\t\t\t\t\t\t||| SKOR AKHIR |||\n\n\n");
	printf("\t\t\t\t\t\tNama pemain pertama: %s\n", player_one);
	printf("\t\t\t\t\t\tSkor %s: %d\n", player_one, one_score);
	printf("\t\t\t\t\t\tNama pemain kedua: %s\n", player_two);
	printf("\t\t\t\t\t\tSkor %s: %d\n\n", player_two, two_score);
	printf("=======================================================================================================================\n");
	printf("=======================================================================================================================\n");
	if(one_score<two_score){
		printf("\t\t\t\t\t\tSELAMAT KEPADA %s KAMU MENANG!!!\n",player_two);
	}
	else if(two_score<one_score){
		printf("\t\t\t\t\t\tSELAMAT KEPADA %s Kmu MENANG!!!\n",player_one);
	}
	else{
		printf("\t\t\t\t\t\t Seri!");
	}
	printf("\t\t\t\t\t\t Permainan tersimpan.");
	time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    fPointer=fopen("gamehistory.txt","a");
	fprintf(fPointer, "%s\t\t\t\t%d\t\t%s\t\t\t\t%d\t\t%d\t\t%s\n", player_one, one_score, player_two, two_score, stages, asctime(tm)); /* menampilkan stages juga melalui panggilan, tidak langsung lima */
	fclose(fPointer);
	getch();
	clrscr();
	initializing();
	clrscr();
	indonesia();
}

/* Sub menu bantuan */

int tatacara(){
	printf("Berikut adalah tata cara dari guessing game : ");
	printf("\n [1] Masukkan nama player one");
	printf("\n [2] Masukkan nama player two");
	printf("\n [3] Player one or player two memilih stages yang akan dimainkan");
	printf("\n [4] Setelah memilih stages, player one menginput question");
	printf("\n [5] Ketika player one sedang menginput question, \n player two tidak diperkenankan untuk melihat layar");
	printf("\n [6] Kemudian, player two memasukkan jawaban dari pertanyaan yang diajukkan player one \n setelah itu masukkan question untuk player one");
	printf("\n [7] Setelah player two memasukkan question, giliran player one menjawab question dari player two");
	printf("\n [8] Setelah stages sudah memenuhi, maka score dari setiap player akan muncul pada layar monitor");
	getch();
	clrscr();
	bantuan(); /* Kembali ke menu bantuan */
}

int peraturan(){
	printf("Berikut adalah guidelines dari guessing game : ");
	printf("\n [1]Pada permainan ini, user menginput question dengan tidak menggunakan spasi");
	printf("\n [2]Pada saat player one memasukkan input, player two tidak diperkanankan untuk melihat layar");
	printf("\n [3]Sama halnya dengan player one, ketika player two sedang menginput question, \n    player one tidak diperkenankan untuk melihat layar");
	printf("\n [4]Player one dan player two hanya menginput satu jawaban saja");
	getch();
	clrscr();
	bantuan(); /* Kembali ke menu bantuan */
}

int copyright(){
	printf("=======================================================================================================================\n");
	printf("=                                    THIS GAME BY FERLINDA & NURJANNAH                                                =\n");
	printf("=                                             2018- 2019                                                              =\n");
	printf("=======================================================================================================================\n");
	getch();
	clrscr();
	help(); /* Kembali ke menu bantuan */
}

int kopyright(){
	printf("=======================================================================================================================\n");
	printf("=                                    THIS GAME BY FERLINDA & NURJANNAH                                                =\n");
	printf("=                                             2018- 2019                                                              =\n");
	printf("=======================================================================================================================\n");
	getch();
	clrscr();
	bantuan(); /* Kembali ke menu bantuan */
}

/* Menu bantuan untuk user */

int bantuan(){
	int dec;
	clrscr();
	printf("Menu Bantuan");
	printf("\n[1] Peraturan \n[2] Tata Cara\n[3] Copyright \n[4] Kembali \n");
	printf("Pilihan: "); /* Meminta pilihan */
	scanf("%d", & dec); /* Menerima input berupa int untuk masuk ke switch */
	clrscr();
	switch (dec){ /* Mengarahkan pada fungsi maisng-masing */
		case 1:
			peraturan();
			break;
		case 2:
			tatacara();
			break;
		case 3:
			kopyright();
			break;
		case 4:
			indonesia();
			break;
		default: /* Error handling dan pesan bila seandainya user memasukkan selain 1-4 */
			clrscr();
			printf("Input yang Anda masukkan salah. Klik tombol apapun untuk kembali.");
			getch();
			bantuan();
			clrscr();
			break;
	}
	getch();
	clrscr();
	indonesia();
}

/* Keluar dari permainan */

int quit(){
	clrscr();
	printf("Bye");
}

/* Versi inggris, kurang lebih sama */
/* History dan main ada di bawah dengan penjelasan */

int gamedefault(){
	int one_score, two_score, counter;
	char  player_one[20], player_two[20], question[999], ans[10], guess[10];
	FILE * fPointer;
	clrscr();
	printf("=======================================================================================================================\n");
	printf("=======================================================================================================================\n");
	printf("                                                                                                                       \n");
	printf("                                                                                                                       \n");
	printf("                                         Player One, give me your name: ");
	scanf("%s",&player_one);
	printf("                                         Player Two, give me your name: ");
	scanf("%s",&player_two);
	printf("                                                                                                                       \n");
	printf("                                                                                                                       \n");
	printf("=======================================================================================================================\n");
	printf("=======================================================================================================================\n");
	printf("                                                                                                                       \n");
	printf("                                                                                                                       \n");
	printf("                                                  Hi %s \n", player_one);
	printf("                                                  Hi %s \n", player_two);
	printf("                                                    You're all set");
	getch();
	clrscr();
	printf("%s turns\n",player_one);
	printf("Enter your question: ");
	scanf(" %[^\n]s", &question);
	printf("Enter your answer: ");
	scanf("%s",&ans);
	one_score=0;
	two_score=0;
	for(counter=1; counter<=5;counter+=1){
		clrscr();
		printf("%s turns, stage %d\n",player_two,counter);
		printf("%s\n",question);
		printf("Enter your guess: ");
		scanf("%s",&guess);
		if(strcmp(guess, ans)==0){
			two_score+=1;
		}
		else{
			two_score+=0;
		}
		printf("Enter your question: ");
		scanf(" %[^\n]s",&question);
		printf("Enter your answer: ");
		scanf("%s",&ans);
		clrscr();
		printf("%s turns, stage %d\n",player_one,counter);
		printf("%s\n",question);
		printf("Enter your guess: ");
		scanf("%s",&guess);
		if(strcmp(guess,ans)==0){
			one_score+=1;
		}
		else{
			one_score+=0;
		}
		if(counter<5){
			printf("Enter your question: ");
			scanf(" %[^\n]s",&question);
			printf("Enter your answer: ");
			scanf("%s",&ans);
		}
		clrscr();
	}
	countingscore();
	clrscr();
	printf("\t\t\t\t\t\t||| FINAL SCORE |||\n\n\n");
	printf("\t\t\t\t\t\tPlayer One Name: %s\n", player_one);
	printf("\t\t\t\t\t\tPlayer One Score: %d\n", one_score);
	printf("\t\t\t\t\t\tPlayer Two Name: %s\n", player_two);
	printf("\t\t\t\t\t\tPlayer Two Score: %d\n\n", two_score);
	printf("=======================================================================================================================\n");
	printf("=======================================================================================================================\n");
	if(one_score<two_score){
		printf("\t\t\t\t\t\t%s WINS!!!\n",player_two);
	}
	else if(two_score<one_score){
		printf("\t\t\t\t\t\t%s WINS!!!\n",player_one);
	}
	else{
		printf("\t\t\t\t\t\t A Draw!");
	}
	printf("\n\n\t\t\t\t\t\t Game Saved.");
	time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    fPointer=fopen("gamehistory.txt","a");
	fprintf(fPointer, "%s\t\t\t\t%d\t\t%s\t\t\t\t%d\t\t5\t\t%s\n", player_one, one_score, player_two, two_score, asctime(tm));
	fclose(fPointer);
	getch();
	clrscr();
	initializing();
	clrscr();
	english();
}

int game(){
	int one_score, two_score, counter, stages;
	char  player_one[20], player_two[20], question[999], ans[10], guess[10];
	FILE * fPointer;
	clrscr();
	printf("=======================================================================================================================\n");
	printf("=======================================================================================================================\n");
	printf("                                                                                                                       \n");
	printf("                                                                                                                       \n");
	printf("                                         Player One, give me your name: ");
	scanf("%s",&player_one);
	printf("                                         Player Two, give me your name: ");
	scanf("%s",&player_two);
	printf("                                                                                                                       \n");
	printf("                                                                                                                       \n");
	printf("=======================================================================================================================\n");
	printf("=======================================================================================================================\n");
	printf("                                                                                                                       \n");
	printf("                                                                                                                       \n");
	printf("                                                  Hi %s \n", player_one);
	printf("                                                  Hi %s \n", player_two);
	printf("                                                  You're all set");
	getch();
	clrscr();
	printf("How many stages you wish to play?\n");
	printf("Enter: ");
	scanf("%d",&stages);
	clrscr();
	printf("%s turns\n",player_one);
	printf("Enter your question: ");
	scanf(" %[^\n]s", &question);
	printf("Enter your answer: ");
	scanf("%s",&ans);
	one_score=0;
	two_score=0;
	for(counter=1; counter<=stages;counter+=1){
		clrscr();
		printf("%s turns, stage %d\n",player_two,counter);
		printf("%s\n",question);
		printf("Enter your guess: ");
		scanf("%s",&guess);
		if(strcmp(guess, ans)==0){
			two_score+=1;
		}
		else{
			two_score+=0;
		}
		printf("Enter your question: ");
		scanf(" %[^\n]s",&question);
		printf("Enter your answer: ");
		scanf("%s",&ans);
		clrscr();
		printf("%s turns, stage %d\n",player_one,counter);
		printf("%s\n",question);
		printf("Enter your guess: ");
		scanf("%s",&guess);
		if(strcmp(guess,ans)==0){
			one_score+=1;
		}
		else{
			one_score+=0;
		}
		if(counter<stages){
			printf("Enter your question: ");
			scanf(" %[^\n]s",&question);
			printf("Enter your answer: ");
			scanf("%s",&ans);
		}
		clrscr();
	}
	countingscore();
	clrscr();
	printf("\t\t\t\t\t\t||| FINAL SCORE |||\n\n\n");
	printf("\t\t\t\t\t\tPlayer One Name: %s\n", player_one);
	printf("\t\t\t\t\t\tPlayer One Score: %d\n", one_score);
	printf("\t\t\t\t\t\tPlayer Two Name: %s\n", player_two);
	printf("\t\t\t\t\t\tPlayer Two Score: %d\n\n", two_score);
	printf("=======================================================================================================================\n");
	printf("=======================================================================================================================\n");
	if(one_score<two_score){
		printf("\t\t\t\t\t\t%s WINS!!!\n",player_two);
	}
	else if(two_score<one_score){
		printf("\t\t\t\t\t\t%s WINS!!!\n",player_one);
	}
	else{
		printf("\t\t\t\t\t\t A Draw!");
	}
	printf("\n\n\t\t\t\t\t\t Game Saved.");
	time_t t = time(NULL);
    struct tm *tm = localtime(&t);
	fPointer=fopen("gamehistory.txt","a");
	fprintf(fPointer, "%s\t\t\t\t%d\t\t%s\t\t\t\t%d\t\t%d\t\t%s", player_one, one_score, player_two, two_score, stages, asctime(tm));
	fclose(fPointer);
	getch();
	clrscr();
	initializing();
	clrscr();
	english();
}

int history(){
	clrscr();
	int c;
	FILE*fPointer; /* Pointer untuk file */
	fPointer=fopen("gamehistory.txt","r"); /* Membuka file dengan mode read */
	if(fPointer){
		while((c=getc(fPointer))!=EOF){ /* Selama pembacaan file belum mencapai end of file */
			putchar(c); /* Isi file ditulis ke program */
		}
		fclose(fPointer); /* Jika selesai, maka program diclose */
	}
	getch();
	clrscr();
	english();
}

/* Versi Indonesia history, dibedakan karena returnnya ke indonesia(), bukan inggris() */

int jejak(){
	clrscr();
	int c;
	FILE*fPointer;
	fPointer=fopen("gamehistory.txt","r");
	if(fPointer){
		while((c=getc(fPointer))!=EOF){
			putchar(c);
		}
		fclose(fPointer);
	}
	getch();
	clrscr();
	indonesia();
}

int gameplay(){
	printf("Gameplay : ");
	printf("\n [1] Enter player's names");
	printf("\n [2] Both player decides how much stages they want to play");
	printf("\n [3] Enter stages in number(for custom; default stages: 5)");
	printf("\n [4] After stage input is given by players, player one will enter a question, and an answer to that question");
	printf("\n [5] Player two needs to guess an answer, and then player two will give a question and answer for player one");
	printf("\n [5] Player one needs to guess an answer, and then player one will give a question and answer for player two, so on");
	printf("\n [6] After the stages are completed, final score will appears");
	getch();
	clrscr();
	help();
}

int guidelines (){
	printf("Guidelines : ");
	printf("\n [1] Player needs to enter question without space, use capital letter instead");
	printf("\n [2] In player one's turns, player two is not allowed to see the screen");
	printf("\n [3] Same rule applies for player two");
	printf("\n [4] The answer needs to be a single word");
	getch();
	clrscr();
	help();
}

int help(){
	int dec;
	clrscr();
	printf("Help menu");
	printf("\n[1] Guidelines\n[2] Gameplay \n[3] Copyright \n[4] Back\n");
	printf("Choice: ");
	scanf("%d", & dec);
	clrscr();
	switch (dec){
		case 1:
			guidelines();
			break;
		case 2:
			gameplay();
			break;
		case 3:
			copyright();
			break;
		case 4:
			english();
			break;
		default:
			clrscr();
			printf("Wrong input. Click anywhere to go back to previous");
			getch();
			clrscr();
			help();
			break;
	}
	return 0;
}

int indonesia(){
	char gameon;
	int decision;
	printf("=======================================================================================================================\n");
	printf("=======================================================================================================================\n");
	printf("=                                                                                                                     =\n");
	printf("=                                          SELAMAT DATANG KE GUESSING GAME                                            =\n");
	printf("=                                                  GAME OLEH :                                                        =\n");
	printf("=                                           FERLINDA FELIANA 1706042781                                               =\n");
	printf("=                                                     DAN                                                             =\n");
	printf("=                                           NURJANNAH CINTYA 1706986050                                               =\n");
	printf("=                                                                                                                     =\n");
	printf("=======================================================================================================================\n");
	printf("=======================================================================================================================\n");
    printf("=                                                                                                                     =\n");
	printf("                                              Apakah anda ingin bermain ?                                              \n");
	printf("                                                 Tekan Y untuk (ya)                                                    \n");
	printf("                                                      Atau                                                             \n");
	printf("                                            Tekan apa saja untuk (Tidak) : ");
	scanf(" %c",&gameon); /* Meminta input apakah user benar-benar ingin masuk */
	if(gameon=='Y' || gameon=='y'){ /* Jika y atay Y */
		clrscr();
		printf("=======================================================================================================================\n");
		printf("=======================================================================================================================\n");
		printf("                                                                                                                       \n");
		printf("                                                                                                                       \n");
		printf("\t\t\t\t\t\tMemulai permainan.\n");
		printf("\t\t\t\t\t\tPilihlah pilihan di bawah ini.\n");
		/* Main menu */
		printf("\t\t\t\t\t\t [1] Mulai Default\n\t\t\t\t\t\t [2] Mulai Custom\n\t\t\t\t\t\t [3] Bantuan\n\t\t\t\t\t\t [4] Jejak\n\t\t\t\t\t\t [5] Keluar\n");
		printf("\t\t\t\t\t\tPilihan: ");
		scanf(" %d",&decision); /* Pilihan user untuk diarahkan */
		switch(decision){
			case 1:
				permainandefault();
				break;
			case 2:
				permainan();
				break;
			case 3:
				bantuan();
				break;
			case 4:
				history();
				break;
			case 5:
				quit();
				break;
			default: /* Error handling */
				clrscr();
				printf("Input yang Anda masukkan salah. Klik tombol apapun untuk kembali.");
				getch();
				clrscr();
				indonesia();
				break;
		}
	}
	else{ /* Jika selain y atau Y */
		clrscr();
		printf("Terima kasih telah bermain dengan kami.");
		getch();
		quit(); /* Keluar */
	}
}

int english(){
	char gameon;
	int decision;
	printf("=======================================================================================================================\n");
	printf("=======================================================================================================================\n");
	printf("=                                                                                                                     =\n");
	printf("=                                            Welcome to GUESSING GAME                                                 =\n");
	printf("=                                                   GAME by :                                                         =\n");
	printf("=                                           FERLINDA FELIANA 1706042781                                               =\n");
	printf("=                                                     And                                                             =\n");
	printf("=                                           NURJANNAH CINTYA 1706986050                                               =\n");
	printf("=                                                                                                                     =\n");
	printf("=======================================================================================================================\n");
	printf("=======================================================================================================================\n");
	printf("                                      Are you in? [Y (yes)/ whatever (no)] : ");
	scanf(" %c",&gameon);
	if(gameon=='Y' || gameon=='y'){
		clrscr();
		printf("=======================================================================================================================\n");
		printf("=======================================================================================================================\n");
		printf("                                                                                                                       \n");
		printf("                                                                                                                       \n");
		printf("\t\t\t\t\t\tGame on.\n");
		printf("\t\t\t\t\t\tNow choose.\n");
		printf("\t\t\t\t\t\t [1] Default start\n\t\t\t\t\t\t [2] Custom start\n\t\t\t\t\t\t [3] Help\n\t\t\t\t\t\t [4] History\n\t\t\t\t\t\t [5] Quit\n");
		printf("\t\t\t\t\t\tChoice: ");
		scanf(" %d",&decision);
		switch(decision){
			case 1:
				gamedefault();
				break;
			case 2:
				game();
				break;
			case 3:
				help();
				break;
			case 4:
				history();
				break;
			case 5:
				quit();
				break;
			default:
				clrscr();
				printf("Wrong input. Click anywhere to go back to previous");
				getch();
				clrscr();
				english();
				break;
		}
	}
	else{
		clrscr();
		printf("Thank You for playing with us.");
		getch();
		quit();
	}
}

int main(){
	int pilihan;
	loadingscreen();
	clrscr;
	printf("=======================================================================================================================\n");
	printf("=======================================================================================================================\n");
	printf("=                                                                                                                     =\n");
	printf("=                                                                                                                     =\n");
	printf("=                                                                                                                     =\n");
	printf("\t\t\t\t\t\tPILIH BAHASA:\n\t\t\t\t\t\t[1] ID\n\t\t\t\t\t\t[2] ENG\n");
	printf("\t\t\t\t\t\tPilihan: ");
	scanf("%d",&pilihan);
	switch(pilihan){
		case 1:
			clrscr();
			indonesia();
			break;
		case 2:
			clrscr();
			english();
			break;
		default:
			clrscr();
			printf("Input yang Anda masukkan salah. Klik tombol apapun untuk kembali.");
			getch();
			clrscr();
			main();
			break;
	}
}
