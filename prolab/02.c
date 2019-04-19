#include<stdio.h>
#include<windows.h>

//deklarasi untuk setiap variable dan modular yang digunakan.
int x = 1, xx = 1, stadium, myTicket(), seatToBook(), seatToBook1(), payment(), payment1(), paymentCheck(), paymentCheck1(), booked(int kursi), booked1(int kursi), stadiumLoc(int stadium), stadiumGBK(), booked(), back(), ending(), choosen(), schedule(), bookTicket(), core(), transaction(int stadium);
void header(), help(),  welcome();
char choose, ret, sport, name[100], paymentDec;
int electic, kursi, seatSum, seatSum1, seatBook, seatBook1, arr[100], arr1[100], countSeat = 0, countSeat1 = 0, i, l;
//variable untuk masing-masing kursi stadion sepakbola
int aa = 1, ab = 1, ac = 1, ad = 1, ae = 1, af = 1, ag = 1, ah = 1, ai = 1, aj = 1, ak = 1, al = 1, am = 1, an = 1, ao = 1, ap = 1, aq = 1, ar = 1, as = 1, at = 1, au = 1, av = 1, aw = 1, ax = 1, ay = 1, az = 1, ba = 1, bb = 1, bc = 1, bd = 1, be = 1, bf = 1, bg = 1, bh = 1, bi = 1, bj = 1, bk = 1, bl = 1, bm = 1, bn = 1, bo = 1, bp = 1, bq = 1, br = 1, bs = 1, bt = 1, bu = 1, bv = 1, bw = 1, bx = 1, by = 1, bz = 1, ca = 1, cb = 1, cc = 1, cd = 1, ce = 1, cf = 1, cg = 1, ch = 1, ci = 1, cj = 1, ck = 1, cl = 1, cm = 1, cn = 1, co = 1, cp = 1, cq = 1, cr = 1, cs = 1, ct = 1, cu = 1, cv = 1, cw = 1, cx = 1, cy = 1, cz = 1, da = 1, db = 1, dc = 1, dd = 1, de = 1, df = 1, dg = 1, dh = 1, di = 1, dj = 1, dk = 1, dl = 1, dm = 1, dn = 1, doo = 1, dp = 1, dq = 1, dr = 1, ds = 1, dt = 1, du = 1, dv = 1, dw = 1, dx = 1, dy = 1, dz = 1, ea = 1, eb = 1, ec = 1, ed = 1, ee = 1, ef = 1, eg = 1, eh = 1, ei = 1, ej = 1, ek = 1, el = 1, em = 1, en = 1, eo = 1, ep = 1, eq = 1, er = 1, es = 1, et = 1, eu = 1, ev = 1, ew = 1, ex = 1, ey = 1, ez = 1, fa = 1, fb = 1, fc = 1, fd = 1, fe = 1, ff = 1, fg = 1, fh = 1, fi = 1, fj = 1, fk = 1, fl = 1, fm = 1, fn = 1, fo = 1, fp = 1, fq = 1, fr = 1, fs = 1, ft = 1, fu = 1, fv = 1, fw = 1, fx = 1, fy = 1, fz = 1, ga = 1, gb = 1, gc = 1, gd = 1, ge = 1, gf = 1, gg = 1, gh = 1, gi = 1, gj = 1, gk = 1, gl = 1, gm = 1, gn = 1, go = 1, gp = 1, gq = 1, gr = 1, gs = 1, gt = 1;
//variable untuk masing-masing kursi lapangan bulutangkis
int aa1 = 1, ab1 = 1, ac1 = 1, ad1 = 1, ae1 = 1, af1 = 1, ag1 = 1, ah1 = 1, ai1 = 1, aj1 = 1, ak1 = 1, al1 = 1, am1 = 1, an1 = 1, ao1 = 1, ap1 = 1, aq1 = 1, ar1 = 1, as1 = 1, at1 = 1, au1 = 1, av1 = 1, aw1 = 1, ay1 = 1, ax1 = 1, az1 = 1, ba1 = 1, bb1 = 1, bc1 = 1, bd1 = 1, be1 = 1, bf1 = 1, bg1 = 1, bh1 = 1, bi1 = 1, bj1 = 1, bk1 = 1, bl1 = 1, bm1 = 1, bn1 = 1, bo1 = 1, bp1 = 1, bq1 = 1, br1 = 1, bs1 = 1, bt1 = 1, bu1 = 1, bv1 = 1, bw1 = 1, by1 = 1, bx1 = 1, bz1 = 1, ca1 = 1, cb1 = 1, cc1 = 1, cd1 = 1, ce1 = 1, cf1 = 1, cg1 = 1, ch1 = 1, ci1 = 1, cj1 = 1, ck1 = 1, cl1 = 1, cm1 = 1, cn1 = 1, co1 = 1, cp1 = 1, cq1 = 1, cr1 = 1, cs1 = 1, ct1 = 1, cu1 = 1, cv1 = 1, cw1 = 1, cy1 = 1, cx1 = 1, cz1 = 1, ka1 = 1, kb1 = 1, kc1 = 1, kd1 = 1, ke1 = 1, kf1 = 1, kg1 = 1, kh1 = 1, ki1 = 1, kj1 = 1, kk1 = 1, kl1 = 1, km1 = 1, kn1 = 1, ko1 = 1, kp1 = 1, kq1 = 1, kr1 = 1, ks1 = 1, kt1 = 1, ku1 = 1, kv1 = 1, kw1 = 1, ky1 = 1, kx1 = 1, kz1 = 1, ea1 = 1, eb1 = 1, ec1 = 1, ed1 = 1, ee1 = 1, ef1 = 1, eg1 = 1, eh1 = 1, ei1 = 1, ej1 = 1, ek1 = 1, el1 = 1, em1 = 1, en1 = 1, eo1 = 1, ep1 = 1, eq1 = 1, er1 = 1, es1 = 1, et1 = 1, eu1 = 1, ev1 = 1, ew1 = 1, ey1 = 1, ex1 = 1, ez1 = 1, fa1 = 1, fb1 = 1, fc1 = 1, fd1 = 1, fe1 = 1, ff1 = 1, fg1 = 1, fh1 = 1, fi1 = 1, fj1 = 1, fk1 = 1, fl1 = 1, fm1 = 1, fn1 = 1, fo1 = 1, fp1 = 1, fq1 = 1, fr1 = 1, fs1 = 1, ft1 = 1, fu1 = 1, fv1 = 1, fw1 = 1, fy1 = 1, fx1 = 1, fz1 = 1, ga1 = 1, gb1 = 1, gc1 = 1, gd1 = 1, ge1 = 1, gf1 = 1, gg1 = 1, gh1 = 1, gi1 = 1, gj1 = 1, gk1 = 1, gl1 = 1, gm1 = 1, gn1 = 1, go1 = 1, gp1 = 1, gq1 = 1, gr1 = 1, gs1 = 1, gt1 = 1, gu1 = 1, gv1 = 1, gw1 = 1, gy1 = 1, gx1 = 1, gz1 = 1, ha1 = 1, hb1 = 1, hc1 = 1, hd1 = 1, he1 = 1, hf1 = 1, hg1 = 1, hh1 = 1, hi1 = 1, hj1 = 1, hk1 = 1;

int main(){
	system("COLOR 70");
	welcome();
	core();
}
//modular inti (gabungan dari banyak modular sebelum di masukkan kedalam main)
int core(){
	header();
	printf("  Menu :\n");
	printf("  [1] Match Schedule\n  [2] Book Ticket\n  [3] My Ticket\n  [4] Help\n  [5] Exit\n\n");
	choosen();
}
/*--------------------------------------------------------------------------------------------------------*/
void welcome(){

	printf("\n");
	for (i = 1; i < 7; i++){
		printf("\n");
	}
	printf("                                    Link Start\n");
	printf("                                    ");
	for (l = 0; l < 10; l++){
	printf(".");
	Sleep(500);
		}
	system("cls");
	printf("\n");
	for (i = 1; i < 7; i++){
		printf("\n");
	}
	printf("                                  System Checking\n");
	printf("                                    ");
	for (l = 0; l < 10; l++){
	printf(".");
	Sleep(500);
		}
	system("cls");
}
void processing(){
	printf("\n");
	for (i = 1; i < 5; i++){
		printf("\n");
	}
	printf("                                Processing Ticket\n");
	printf("                                    ");
	for (l = 0; l < 10; l++){
	printf(".");
	Sleep(500);
		}
}
void header(){
	printf("\n\n  ASIAN GAMES\n");
	printf("  Ticket Booking System\n");
	printf("  Soccer & Badminton\n  ------------------\n\n");
}
int choosen(){
	printf("\n  What do you want to choose? : ");
		scanf(" %c", &choose);
		switch(choose){
			case '1':
				system("cls");
				schedule();
				break;
			case '2':
				system("cls");
				bookTicket();
				break;
			case '3':
				system("cls");
				myTicket();
				break;
			case '4':
				system("cls");
				help();
				break;
			case '5':
				ending();
				break;
			default:
				printf("  Your choice doesn't exist!");
				return choosen();
		}
}
int schedule(){
	header();
	printf("  Schedule :\n\n");
	printf("  Soccer\n");
	printf("  Date\t\t\t\tMatch\t\t\tLocation\tCode\n");
	printf("  ---------------------------------------------------------------------------\n");
	printf("  September, 28th 2018\t[14:00] INA VS MLY\t\tSUGBK\t\t1028\n\n");
	printf("  Badminton\n");
	printf("  Date\t\t\t\tMatch\t\t\tLocation\tCode\n");
	printf("  ---------------------------------------------------------------------------\n");
	printf("  September, 23th 2018\t[14:00] CHN VS KOR\t     Istora Senayan\t5023\n\n");
	printf("  Note:\n  INA : Indonesia\tMLY : Malaysia\n  MYN : Myanmar\t\tSIN : Singapore\n  KOR : South Korea\tJPN : Japan\n  THA : Thailand\tVIE : Vietnam\n  KAZ : Kazakhastan\tIND : India\n  QAT : Qatar\t\tTPE : Chinese Taipei");
	printf("\n\n  Press ENTER to go back to the main menu");
	getch();
	system("cls");
	return core();
}
int bookTicket(){
	header();
	printf("  Name : ");
	scanf(" %[^\n]s", name);
	while(xx == 1){
		printf("  Badminton or Soccer? [B/S] : ");
		scanf(" %c", &sport);
		if (sport == 'B'){
			badminton();
			xx = 0;
		}
		else if (sport == 'S'){
			soccer();
			xx = 0;
		}
		else{
			printf("  Your input was wrong, please check again!\n");
			xx = 1;
		}
	}
}
int badminton(){
	printf("\n  Date\t\t\t\tMatch\t\t\tLocation\tCode\n");
	printf("  ---------------------------------------------------------------------------\n");
	printf("  September, 23th 2018\t[14:00] CHN VS KOR\t     Istora Senayan\t5023\n\n");
	printf("  Note:\n  INA : Indonesia\tMLY : Malaysia\n  MYN : Myanmar\t\tSIN : Singapore\n  KOR : South Korea\tJPN : Japan\n  THA : Thailand\tVIE : Vietnam\n  KAZ : Kazakhastan\tIND : India\n  QAT : Qatar\t\tTPE : Chinese Taipei\n");
	printf("  ---------------------------------------------------------------------------\n");
	printf("\n  Submit Match Code : ");
	scanf("%d", &stadium);
	switch(stadium){
		case 5023:
			stadiumLoc(stadium);
		default:
			system("cls");
			header();
			printf("\n           <<< Match code doesn't available, please check again! >>>\n");
			return badminton();
	}
}
int soccer(){
	char stadionName[100];
	printf("\n  Date\t\t\t\tMatch\t\t\tLocation\tCode\n");
	printf("  ---------------------------------------------------------------------------\n");
	printf("  September, 28th 2018\t[14:00] INA VS MLY\t\tSUGBK\t\t1028\n\n");
	printf("  Note:\n  INA : Indonesia\tMLY : Malaysia\n  MYN : Myanmar\t\tSIN : Singapore\n  KOR : South Korea\tJPN : Japan\n  THA : Thailand\tVIE : Vietnam\n  KAZ : Kazakhastan\tIND : India\n  QAT : Qatar\t\tTPE : Chinese Taipei\n");
	printf("  ---------------------------------------------------------------------------\n");
	printf("\n  Submit Match Code : ");
	scanf(" %d", &stadium);
	stadiumLoc(stadium);
	switch(stadium){
		case 1028:
			stadiumLoc(stadium);
		default:
			system("cls");
			header();
			printf("\n           <<< Match code doesn't available, please check again! >>>\n");
			return soccer();
	}
}
int stadiumLoc(int stadium){
	system("cls");
	header();
	if (stadium == 1028){
		char stadionName[100] = "UTAMA GELORA BUNGKARNO";
		printf("_______________________________________________________________________________\n\n");
		printf("                        STADION %s                         \n", stadionName);
		printf("_______________________________________________________________________________\n\n");
		printf("                        ++++++++++++++++++++++++++++++\n");
		printf("                    ++++++++++++++++++++++++++++++++++++++\n");
		printf("                ++++++++++++++++++++++++++++++++++++++++++++++\n");
		printf("            ++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		printf("        ++++++++++++++++++++++                 +++++++++++++++++++++++\n");
		printf("    ++++++++++++++++++++++                         ++++++++++++++++++++++\n");
		printf(" ++++++++++++++++++++++                                ++++++++++++++++++++++\n");
		printf(" ++++++++++++++++++                                       +++++++++++++++++++\n");
		printf(" ++++++++++++++                                               +++++++++++++++\n");
		printf(" [087:%d]++++          ==================================          ++++[132:%d]\n", di, fb);
		printf(" [088:%d][01:%d]        |      |     |   -   |     |     |        [44:%d][133:%d]\n", dj, aa, br, fc);
		printf(" [089:%d][02:%d]        |      |     +-------+     |     |        [45:%d][134:%d]\n", dk, ab, bs, fd);
		printf(" [090:%d][03:%d]        |      |                   |     |        [46:%d][135:%d]\n", dl, ac, bt, fe);
		printf(" [091:%d][04:%d]        |      +------+--+--+------+     |        [47:%d][136:%d]\n", dm, ad, bu, ff);
		printf(" [092:%d][05:%d]        |               +++              |        [48:%d][137:%d]\n", dn, ae, bv, fg);
		printf(" [093:%d][06:%d]        |                                |        [49:%d][138:%d]\n", doo, af, bw, fh);
		printf(" [094:%d][07:%d]        |                                |        [50:%d][139:%d]\n", dp, ag, bx, fi);
		printf(" [095:%d][08:%d]        |                                |        [51:%d][140:%d]\n", dq, ah, by, fj);
		printf(" [096:%d][09:%d]        |                                |        [52:%d][141:%d]\n", dr, ai, bz, fk);
		printf(" [097:%d][10:%d]        |                                |        [53:%d][142:%d]\n", ds, aj, ca, fl);
		printf(" [098:%d][11:%d]        |                                |        [54:%d][143:%d]\n", dt, ak, cb, fm);
		printf(" [099:%d][12:%d]        |                                |        [55:%d][144:%d]\n", du, al, cc, fn);
		printf(" [100:%d][13:%d]        |                                |        [56:%d][145:%d]\n", dv, am, cd, fo);
		printf(" [101:%d][14:%d]        |                                |        [57:%d][146:%d]\n", dw, an, ce, fp);
		printf(" [102:%d][15:%d]        |                                |        [58:%d][147:%d]\n", dx, ao, cf, fq);
		printf(" [103:%d][16:%d]        |                                |        [59:%d][148:%d]\n", dy, ap, cg, fr);
		printf(" [104:%d][17:%d]        |                                |        [60:%d][149:%d]\n", dz, aq, ch, fs);
		printf(" [105:%d][18:%d]        |                                |        [61:%d][150:%d]\n", ea, ar, ci, ft);
		printf(" [106:%d][19:%d]        |                                |        [62:%d][151:%d]\n", eb, as, cj, fu);
		printf(" [107:%d][20:%d]        |                                |        [63:%d][152:%d]\n", ec, at, ck, fv);
		printf(" [108:%d][21:%d]        |               +++              |        [64:%d][153:%d]\n", ed, au, cl, fw);
		printf(" [109:%d][22:%d]        |--------------+-+-+-------------|        [65:%d][154:%d]\n", ee, av, cm, fx);
		printf(" [110:%d][23:%d]        |               +++              |        [66:%d][155:%d]\n", ef, aw, cn, fy);
		printf(" [111:%d][24:%d]        |                                |        [67:%d][156:%d]\n", eg, ax, co, fz);
		printf(" [112:%d][25:%d]        |                                |        [68:%d][157:%d]\n", eh, ay, cp, ga);
		printf(" [113:%d][26:%d]        |                                |        [69:%d][158:%d]\n", ei, az, cq, gb);
		printf(" [114:%d][27:%d]        |                                |        [70:%d][159:%d]\n", ej, ba, cr, gc);
		printf(" [115:%d][28:%d]        |                                |        [71:%d][160:%d]\n", ek, bb, cs, gd);
		printf(" [116:%d][29:%d]        |                                |        [72:%d][161:%d]\n", el, bc, ct, ge);
		printf(" [117:%d][30:%d]        |                                |        [73:%d][162:%d]\n", em, bd, cu, gf);
		printf(" [118:%d][31:%d]        |                                |        [74:%d][163:%d]\n", en, be, cv, gg);
		printf(" [119:%d][32:%d]        |                                |        [75:%d][164:%d]\n", eo, bf, cw, gh);
		printf(" [120:%d][33:%d]        |                                |        [76:%d][165:%d]\n", ep, bg, cx, gi);
		printf(" [121:%d][34:%d]        |                                |        [77:%d][166:%d]\n", eq, bh, cy, gj);
		printf(" [122:%d][35:%d]        |                                |        [78:%d][167:%d]\n", er, bi, cz, gk);
		printf(" [123:%d][36:%d]        |                                |        [79:%d][168:%d]\n", es, bj, da, gl);
		printf(" [124:%d][37:%d]        |                                |        [80:%d][169:%d]\n", et, bk, db, gm);
		printf(" [125:%d][38:%d]        |                                |        [81:%d][170:%d]\n", eu, bl, dc, gn);
		printf(" [126:%d][39:%d]        |               +++              |        [82:%d][171:%d]\n", ev, bm, dd, go);
		printf(" [127:%d][40:%d]        |      +------+--+--+------+     |        [83:%d][172:%d]\n", ew, bn, de, gp);
		printf(" [128:%d][41:%d]        |      |                   |     |        [84:%d][173:%d]\n", ex, bo, df, gq);
		printf(" [129:%d][42:%d]        |      |     +-------+     |     |        [85:%d][174:%d]\n", ey, bp, dg, gr);
		printf(" [130:%d][43:%d]        |      |     |   -   |     |     |        [86:%d][175:%d]\n", ez, bq, dh, gs);
		printf(" [131:%d]++++          ==================================           +++[176:%d]\n", fa, gt);
		printf(" +++++++++++++                                                  +++++++++++++\n");
		printf(" ++++++++++++++++++                                         +++++++++++++++++\n");
		printf(" ++++++++++++++++++++++                                 +++++++++++++++++++++\n");
		printf("     ++++++++++++++++++++++                         +++++++++++++++++++++++\n");
		printf("         ++++++++++++++++++++++                +++++++++++++++++++++++\n");
		printf("             +++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		printf("                 ++++++++++++++++++++++++++++++++++++++++++++++\n");
		printf("                     ++++++++++++++++++++++++++++++++++++++\n");
		printf("                         ++++++++++++++++++++++++++++++\n\n");
		seatSum = aa+ab+ac+ad+ae+af+ag+ah+ai+aj+ak+al+am+an+ao+ap+aq+ar+as+at+au+av+aw+ax+ay+az+ba+bb+bc+bd+be+bf+bg+bh+bi+bj+bk+bl+bm+bn+bo+bp+bq+br+bs+bt+bu+bv+bw+bx+by+bz+ca+cb+cc+cd+ce+cf+cg+ch+ci+cj+ck+cl+cm+cn+co+cp+cq+cr+cs+ct+cu+cv+cw+cx+cy+cz+da+db+dc+dd+de+df+dg+dh+di+dj+dk+dl+dm+dn+doo+dp+dq+dr+ds+dt+du+dv+dw+dx+dy+dz+ea+eb+ec+ed+ee+ef+eg+eh+ei+ej+ek+el+em+en+eo+ep+eq+er+es+et+eu+ev+ew+ex+ey+ez+fa+fb+fc+fd+fe+ff+fg+fh+fi+fj+fk+fl+fm+fn+fo+fp+fq+fr+fs+ft+fu+fv+fw+fx+fy+fz+ga+gb+gc+gd+ge+gf+gg+gh+gi+gj+gk+gl+gm+gn+go+gp+gq+gr+gs+gt;
		printf("  Note : \n  Ticket Price : Rp. 150000/Seat\n  Example : [33:1], 33 is Seat Number and 1 is availability\n  1 : Available\n  0 : Taken\n\n");
		countSeat = 0;
		printf("  Seat Available : %d", seatSum);
		if (seatSum > 0){
				seatToBook();
			while (countSeat != seatBook){
				printf("  Seat Number?                       : ");
				scanf("%d", &kursi);
				booked(kursi);
			}
			payment();
		}
		else{
			printf("\n  No more seat available!");
		}
	}
	else if (stadium == 5023){
		char stadionName[100] = "ISTORA SENAYAN";
		printf("_______________________________________________________________________________\n\n");
		printf("                                 %s                         \n", stadionName);
		printf("_______________________________________________________________________________\n\n");
		printf("     +++[22:%d] [23:%d] [24:%d] [25:%d] [26:%d] [27:%d] [28:%d] [29:%d] [30:%d]+++\n",av1,aw1,ax1,ay1,az1,ba1,bb1,bc1,bd1);
		printf("        [13:%d] [14:%d] [15:%d] [16:%d] [17:%d] [18:%d] [19:%d] [20:%d] [21:%d]\n",am1,an1,ao1,ap1,aq1,ar1,as1,at1,au1);
		printf("               [06:%d] [07:%d] [08:%d] [09:%d] [10:%d] [11:%d] [12:%d]\n",af1,ag1,ah1,ai1,aj1,ak1,al1);
		printf("   [124:%d] +          [01:%d] [02:%d] [03:%d] [04:%d] [05:%d]           + [159:%d]\n",et1,aa1,ab1,ac1,ad1,ae1,gc1);
		printf("   [125:%d] ++++                                                 ++++ [160:%d]\n",eu1,gd1);
		printf("   [126:%d] [061:%d]     _________________________________     [092:%d] [161:%d]\n",ev1,kn1,ew1,ge1);
		printf("   [127:%d] [062:%d]    /                                 \\    [093:%d] [162:%d]\n",ew1,ko1,ex1,gf1);
		printf("   [128:%d] [063:%d]   |                                   |   [094:%d] [163:%d]\n",ex1,kp1,ey1,gg1);
		printf("   [129:%d] [064:%d]   |        ___________________        |   [095:%d] [164:%d]\n",ey1,kq1,ez1,gh1);
		printf("   [130:%d] [065:%d]   |       |_________|_________|       |   [096:%d] [165:%d]\n",ez1,kr1,fa1,gi1);
		printf("   [131:%d] [066:%d]   |       |         |         |       |   [097:%d] [166:%d]\n",fa1,ks1,fb1,gj1);
		printf("   [132:%d] [067:%d]   |       |         |         |       |   [098:%d] [167:%d]\n",fb1,kt1,fc1,gk1);
		printf("   [133:%d] [068:%d]   |       |         |         |       |   [099:%d] [168:%d]\n",fc1,ku1,fd1,gl1);
		printf("   [134:%d] [069:%d]   |       |         |         |       |   [100:%d] [169:%d]\n",fd1,kv1,fe1,gm1);
		printf("   [135:%d] [070:%d]   |       |         |         |       |   [101:%d] [170:%d]\n",fe1,kw1,ff1,gn1);
		printf("   [136:%d] [071:%d]   |       |         |         |       |   [102:%d] [171:%d]\n",ff1,kx1,fg1,go1);
		printf("   [137:%d] [072:%d]   |       |         |         |       |   [103:%d] [172:%d]\n",fg1,ky1,fh1,gp1);
		printf("   [138:%d] [073:%d]   |       |         |         |       |   [104:%d] [173:%d]\n",fh1,kz1,fi1,gq1);
		printf("   [139:%d] [074:%d]   |       |_________|_________|       |   [105:%d] [174:%d]\n",fi1,ea1,fj1,gr1);
		printf("   [140:%d] [075:%d]   |       |                   |       |   [106:%d] [175:%d]\n",fj1,eb1,fk1,gs1);
		printf("   [141:%d] [076:%d]   |       |                   |       |   [107:%d] [176:%d]\n",fk1,ec1,fl1,gt1);
		printf("   [142:%d] [077:%d]   |       |___________________|       |   [108:%d] [177:%d]\n",fl1,ed1,fm1,gu1);
		printf("   [143:%d] [078:%d]   |       |         |         |       |   [109:%d] [178:%d]\n",fm1,ee1,fn1,gv1);
		printf("   [144:%d] [079:%d]   |       |         |         |       |   [110:%d] [179:%d]\n",fn1,ef1,fo1,gw1);
		printf("   [145:%d] [080:%d]   |       |         |         |       |   [111:%d] [180:%d]\n",fo1,eg1,fp1,gx1);
		printf("   [146:%d] [081:%d]   |       |         |         |       |   [112:%d] [181:%d]\n",fp1,eh1,fq1,gy1);
		printf("   [147:%d] [082:%d]   |       |         |         |       |   [113:%d] [182:%d]\n",fq1,ei1,fr1,gz1);
		printf("   [148:%d] [083:%d]   |       |         |         |       |   [114:%d] [183:%d]\n",fr1,ej1,fs1,ha1);
		printf("   [149:%d] [084:%d]   |       |         |         |       |   [115:%d] [184:%d]\n",fs1,ek1,ft1,hb1);
		printf("   [150:%d] [085:%d]   |       |         |         |       |   [116:%d] [185:%d]\n",ft1,el1,fu1,hc1);
		printf("   [151:%d] [086:%d]   |       |_________|_________|       |   [117:%d] [186:%d]\n",fu1,em1,fv1,hd1);
		printf("   [152:%d] [087:%d]   |       |_________|_________|       |   [118:%d] [187:%d]\n",fv1,en1,fw1,he1);
		printf("   [153:%d] [088:%d]   |                                   |   [119:%d] [188:%d]\n",fw1,eo1,fx1,hf1);
		printf("   [154:%d] [089:%d]   |                                   |   [120:%d] [189:%d]\n",fx1,ep1,fy1,hg1);
		printf("   [155:%d] [090:%d]    \\_________________________________/    [121:%d] [190:%d]\n",fy1,eq1,fz1,hh1);
		printf("   [156:%d] [091:%d]                                           [123:%d] [191:%d]\n",fz1,es1,ga1,hi1);
		printf("   [157:%d] ++++                                                 ++++ [192:%d]\n",ga1,hj1);
		printf("   [158:%d] +          [31:%d] [32:%d] [33:%d] [34:%d] [35:%d]           + [193:%d]\n",gb1,be1,bf1,bg1,bh1,hk1);
		printf("               [36:%d] [37:%d] [38:%d] [39:%d] [40:%d] [41:%d] [42:%d]\n",bj1,bk1,bl1,bm1,bn1,bo1,bp1);
		printf("        [43:%d] [44:%d] [45:%d] [46:%d] [47:%d] [48:%d] [49:%d] [50:%d] [51:%d]\n",bq1,br1,bs1,bt1,bu1,bv1,bw1,bx1,by1);
		printf("     +++[52:%d] [53:%d] [54:%d] [55:%d] [56:%d] [57:%d] [58:%d] [59:%d] [60:%d]+++\n",bz1,ca1,cb1,cc1,cd1,ce1,cf1,cg1,ch1);
		seatSum1 = aa1+ab1+ac1+ad1+ae1+af1+ag1+ah1+ai1+aj1+ak1+al1+am1+an1+ao1+ap1+aq1+ar1+as1+at1+au1+av1+aw1+ay1+ax1+az1+ba1+bb1+bc1+bd1+be1+bf1+bg1+bh1+bi1+bj1+bk1+bl1+bm1+bn1+bo1+bp1+bq1+br1+bs1+bt1+bu1+bv1+bw1+by1+bx1+bz1+ca1+cb1+cc1+cd1+ce1+cf1+cg1+ch1+ci1+cj1+ck1+cl1+cm1+cn1+co1+cp1+cq1+cr1+cs1+ct1+cu1+cv1+cw1+cy1+cx1+cz1+ka1+kb1+kc1+kd1+ke1+kf1+kg1+kh1+ki1+kj1+kk1+kl1+km1+kn1+ko1+kp1+kq1+kr1+ks1+kt1+ku1+kv1+kw1+ky1+kx1+kz1+ea1+eb1+ec1+ed1+ee1+ef1+eg1+eh1+ei1+ej1+ek1+el1+em1+en1+eo1+ep1+eq1+er1+es1+et1+eu1+ev1+ew1+ey1+ex1+ez1+fa1+fb1+fc1+fd1+fe1+ff1+fg1+fh1+fi1+fj1+fk1+fl1+fm1+fn1+fo1+fp1+fq1+fr1+fs1+ft1+fu1+fv1+fw1+fy1+fx1+fz1+ga1+gb1+gc1+gd1+ge1+gf1+gg1+gh1+gi1+gj1+gk1+gl1+gm1+gn1+go1+gp1+gq1+gr1+gs1+gt1+gu1+gv1+gw1+gy1+gx1+gz1+ha1+hb1+hc1+hd1+he1+hf1+hg1+hh1+hi1+hj1+hk1;
		printf("\n  Note : \n  Ticket Price : Rp. 150000/Seat\n  Example : [33:1], 33 is Seat Number and 1 is availability\n  1 : Available\n  0 : Taken\n\n");
		countSeat1 = 0;
		printf("  Seat Available : %d", seatSum1);
		if (seatSum1 > 0){
			seatToBook1();
			while (countSeat1 != seatBook1){
				printf("  Seat Number?                       : ");
				scanf("%d", &kursi);
				booked1(kursi);
			}
			payment1();
		}
		else{
			printf("\n  No more seat available!");
		}
	}
}
int transaction(int stadium){
	header();
	printf("  Your ticket :\n");
	printf("  ---------------------------------------------------------------------------\n");
	printf("  Name        : %s", name);
	if (stadium == 1028){
		printf("\n  Match       : [Soccer] INA VS MLY -SUGBK [28/11/2018 : 14.00]");
		printf("\n  Seat Number :");
		for (i = 1; i <= seatBook; i++){
			printf(" %d,", arr[i]);
		}
		printf("\n  Token       : %d%d", arr[1],arr[2]);
		printf("%d", stadium);
	}
	else if(stadium == 5023){
		printf("\n  Match       : [Badminton] CHN VS KOR -Istora Senayan [23/11/2018 : 14.00]");
		printf("\n  Seat Number :");
		for (i = 1; i <= seatBook1; i++){
			printf(" %d,", arr1[i]);
		}
		printf("\n  Token       : %d%d", arr1[1],arr1[2]);
		printf("%d", stadium);
	}
	printf("\n  ---------------------------------------------------------------------------\n");
	printf("\n  Press ENTER to go back to the main menu");
	getch();
	system("cls");
	return core();


}
int myTicket(){
	header();
	printf("  Your ticket :\n");
	printf("  ---------------------------------------------------------------------------\n");
	printf("  Name        : %s", name);
	if (stadium == 1028){
		printf("\n  Match       : [Soccer] INA VS MLY -SUGBK [28/11/2018 : 14.00]");
		printf("\n  Seat Number :");
		for (i = 1; i <= seatBook; i++){
			printf(" %d,", arr[i]);
		}
		printf("\n  Token       : %d%d", arr[1],arr[2]);
		printf("%d", stadium);
	}
	if(stadium == 5023){
		printf("\n  Match       : [Badminton] CHN VS KOR -Istora Senayan [23/11/2018 : 14.00]");
		printf("\n  Seat Number :");
		for (i = 1; i <= seatBook1; i++){
			printf(" %d,", arr1[i]);
		}
		printf("\n  Token       : %d%d", arr1[1],arr1[2]);
		printf("%d", stadium);
	}
	printf("\n  ---------------------------------------------------------------------------\n");
	back();
}
int payment(){
	printf("\n  Press ENTER to continue ");
	getch();
	system("cls");
	return paymentCheck();
}
int payment1(){
	printf("\n  Press ENTER to continue ");
	getch();
	system("cls");
	return paymentCheck1();
}
int paymentCheck(){
	header();
	printf("  ---------------------------------------------------------------------------\n");
	printf("  Asian Games Payment Details\n\n");
	printf("  Name          : %s\n", name);
	printf("  Seat Number   :");
	for (i = 1; i <= seatBook; i++){
			printf(" %d,", arr[i]);
	}
	printf("\n  Total Seat    : %d", seatBook);
	printf("\n  Total payment : Rp. %d\n", seatBook * 150000);
	printf("  ---------------------------------------------------------------------------\n");
	printf("\n\n  Press ENTER to purchase your ticket ");
	getch();
	system("cls");
	header();
	processing();
	system("cls");
	stadium = 1028;
	transaction(stadium);
}
int paymentCheck1(){
	header();
	printf("  ---------------------------------------------------------------------------\n");
	printf("  Asian Games Payment Details\n\n");
	printf("  Name          : %s\n", name);
	printf("  Seat Number   :");
	for ( i = 1; i <= seatBook1; i++){
			printf(" %d,", arr1[i]);
	}
	printf("\n  Total Seat    : %d", seatBook1);
	printf("\n  Total payment : Rp. %d\n", seatBook1 * 150000);
	printf("  ---------------------------------------------------------------------------\n");
	printf("\n\n  Press ENTER to purchase your ticket ");
	getch();
	system("cls");
	header();
	processing();
	system("cls");
	stadium = 5023;
	transaction(stadium);
}
int seatToBook(){
	printf("\n  How many seat do you want to book? : ");
	scanf("%d", &seatBook);
	if (seatBook > 176){
		printf("  Too many! Max seat you can book is 176");
		seatToBook();
		}
}
int seatToBook1(){
	printf("\n  How many seat do you want to book? : ");
	scanf("%d", &seatBook1);
	if (seatBook1 > 193){
		printf("  Too many! Max seat you can book is 193");
		seatToBook1();
		}
}
void help(){
	header();
	printf("  The Asian Games, also known as Asiad, is a continental multi-sport event held\n  every four years among athletes from all over Asia. Through this program you \n  can get update about match schedule and get ticket on it. \n\n  You can choose menu :");
	printf("\n  [1] Match Schedule\n      This menu will show you match schedule and match code\n\n  [2] Book Tickets\n      This menu will guide you on processing your tickets. At first, you will \n      put your name and match code for your tickets. Then you allowed to choose\n      your seat. The program will show you seat number and availability \n      seat that you can book.\n\n  [3] My Ticket\n      This menu will show your tickets\n\n  [4] Help\n      This menu will show you how to use this program\n\n  [5] Exit\n      To exit the program");
	back();

}
int back(){
	while(x = 1){
		printf("\n\n  Back to the main menu? [Y/N] : ");
		scanf("  %c", &ret);
		if (ret == 'Y'){
			system("cls");
			return core();
		}
		else if (ret == 'N'){
			ending();
			break;
		}
		else{
			printf("  Your input was wrong, please check again!");
			x = 1;
		}
	}
}
int ending(){
	system("cls");
	printf("\n");
	for (i = 1; i < 7; i++){
		printf("\n");
	}
	printf("                                Terminating System\n");
	printf("                                    ");
	for (l = 0; l < 10; l++){
		printf(".");
		Sleep(500);
	}
	printf("\n\n\n\n");

	exit(0);
}
/*--------------------------------------------------------------------------------------------------------*/
int booked1(int kursi){
	if (kursi == 1){
	   if (aa1 == 1){
	      printf("  Booked!\n");
	      aa1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 2){
	   if (ab1 == 1){
	      printf("  Booked!\n");
	      ab1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 3){
	   if (ac1 == 1){
	      printf("  Booked!\n");
	      ac1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 4){
	   if (ad1 == 1){
	      printf("  Booked!\n");
	      ad1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 5){
	   if (ae1 == 1){
	      printf("  Booked!\n");
	      ae1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 6){
	   if (af1 == 1){
	      printf("  Booked!\n");
	      af1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 7){
	   if (ag1 == 1){
	      printf("  Booked!\n");
	      ag1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 8){
	   if (ah1 == 1){
	      printf("  Booked!\n");
	      ah1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 9){
	   if (ai1 == 1){
	      printf("  Booked!\n");
	      ai1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 10){
	   if (aj1 == 1){
	      printf("  Booked!\n");
	      aj1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 11){
	   if (ak1 == 1){
	      printf("  Booked!\n");
	      ak1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 12){
	   if (al1 == 1){
	      printf("  Booked!\n");
	      al1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 13){
	   if (am1 == 1){
	      printf("  Booked!\n");
	      am1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 14){
	   if (an1 == 1){
	      printf("  Booked!\n");
	      an1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 15){
	   if (ao1 == 1){
	      printf("  Booked!\n");
	      ao1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 16){
	   if (ap1 == 1){
	      printf("  Booked!\n");
	      ap1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 17){
	   if (aq1 == 1){
	      printf("  Booked!\n");
	      aq1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 18){
	   if (ar1 == 1){
	      printf("  Booked!\n");
	      ar1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 19){
	   if (as1 == 1){
	      printf("  Booked!\n");
	      as1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 20){
	   if (at1 == 1){
	      printf("  Booked!\n");
	      at1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 21){
	   if (au1 == 1){
	      printf("  Booked!\n");
	      au1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 23){
	   if (aw1 == 1){
	      printf("  Booked!\n");
	      aw1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 24){
	   if (ax1 == 1){
	      printf("  Booked!\n");
	      ax1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 25){
	   if (ay1 == 1){
	      printf("  Booked!\n");
	      ay1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 26){
	   if (az1 == 1){
	      printf("  Booked!\n");
	      az1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 27){
	   if (ba1 == 1){
	      printf("  Booked!\n");
	      ba1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 28){
	   if (bb1 == 1){
	      printf("  Booked!\n");
	      bb1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 29){
	   if (bc1 == 1){
	      printf("  Booked!\n");
	      bc1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 30){
	   if (bd1 == 1){
	      printf("  Booked!\n");
	      bd1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 31){
	   if (be1 == 1){
	      printf("  Booked!\n");
	      be1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 32){
	   if (bf1 == 1){
	      printf("  Booked!\n");
	      bf1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 33){
	   if (bg1 == 1){
	      printf("  Booked!\n");
	      bg1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 34){
	   if (bh1 == 1){
	      printf("  Booked!\n");
	      bh1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 35){
	   if (bi1 == 1){
	      printf("  Booked!\n");
	      bi1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 36){
	   if (bj1 == 1){
	      printf("  Booked!\n");
	      bj1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 37){
	   if (bk1 == 1){
	      printf("  Booked!\n");
	      bk1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 38){
	   if (bl1 == 1){
	      printf("  Booked!\n");
	      bl1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 39){
	   if (bm1 == 1){
	      printf("  Booked!\n");
	      bm1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 40){
	   if (bn1 == 1){
	      printf("  Booked!\n");
	      bn1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 41){
	   if (bo1 == 1){
	      printf("  Booked!\n");
	      bo1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 42){
	   if (bp1 == 1){
	      printf("  Booked!\n");
	      bp1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 43){
	   if (bq1 == 1){
	      printf("  Booked!\n");
	      bq1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 44){
	   if (br1 == 1){
	      printf("  Booked!\n");
	      br1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 45){
	   if (bs1 == 1){
	      printf("  Booked!\n");
	      bs1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 46){
	   if (bt1 == 1){
	      printf("  Booked!\n");
	      bt1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 47){
	   if (bu1 == 1){
	      printf("  Booked!\n");
	      bu1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 48){
	   if (bv1 == 1){
	      printf("  Booked!\n");
	      bv1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 49){
	   if (bw1 == 1){
	      printf("  Booked!\n");
	      bw1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 50){
	   if (bx1 == 1){
	      printf("  Booked!\n");
	      bx1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 51){
	   if (by1 == 1){
	      printf("  Booked!\n");
	      by1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 52){
	   if (bz1 == 1){
	      printf("  Booked!\n");
	      bz1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 53){
	   if (ca1 == 1){
	      printf("  Booked!\n");
	      ca1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 54){
	   if (cb1 == 1){
	      printf("  Booked!\n");
	      cb1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 55){
	   if (cc1 == 1){
	      printf("  Booked!\n");
	      cc1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 56){
	   if (cd1 == 1){
	      printf("  Booked!\n");
	      cd1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 57){
	   if (ce1 == 1){
	      printf("  Booked!\n");
	      ce1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 58){
	   if (cf1 == 1){
	      printf("  Booked!\n");
	      cf1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 59){
	   if (cg1 == 1){
	      printf("  Booked!\n");
	      cg1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 60){
	   if (ch1 == 1){
	      printf("  Booked!\n");
	      ch1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 61){
	   if (ci1 == 1){
	      printf("  Booked!\n");
	      ci1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 62){
	   if (cj1 == 1){
	      printf("  Booked!\n");
	      cj1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 63){
	   if (ck1 == 1){
	      printf("  Booked!\n");
	      ck1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 64){
	   if (cl1 == 1){
	      printf("  Booked!\n");
	      cl1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 65){
	   if (cm1 == 1){
	      printf("  Booked!\n");
	      cm1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 66){
	   if (cn1 == 1){
	      printf("  Booked!\n");
	      cn1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 67){
	   if (co1 == 1){
	      printf("  Booked!\n");
	      co1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 68){
	   if (cp1 == 1){
	      printf("  Booked!\n");
	      cp1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 69){
	   if (cq1 == 1){
	      printf("  Booked!\n");
	      cq1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 70){
	   if (cr1 == 1){
	      printf("  Booked!\n");
	      cr1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 71){
	   if (cs1 == 1){
	      printf("  Booked!\n");
	      cs1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 72){
	   if (ct1 == 1){
	      printf("  Booked!\n");
	      ct1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 73){
	   if (cu1 == 1){
	      printf("  Booked!\n");
	      cu1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 74){
	   if (cv1 == 1){
	      printf("  Booked!\n");
	      cv1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 75){
	   if (cw1 == 1){
	      printf("  Booked!\n");
	      cw1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 76){
	   if (cx1 == 1){
	      printf("  Booked!\n");
	      cx1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 77){
	   if (cy1 == 1){
	      printf("  Booked!\n");
	      cy1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 78){
	   if (cz1 == 1){
	      printf("  Booked!\n");
	      cz1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 79){
	   if (ka1 == 1){
	      printf("  Booked!\n");
	      ka1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 80){
	   if (kb1 == 1){
	      printf("  Booked!\n");
	      kb1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 81){
	   if (kc1 == 1){
	      printf("  Booked!\n");
	      kc1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 82){
	   if (kd1 == 1){
	      printf("  Booked!\n");
	      kd1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 83){
	   if (ke1 == 1){
	      printf("  Booked!\n");
	      ke1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 84){
	   if (kf1 == 1){
	      printf("  Booked!\n");
	      kf1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 85){
	   if (kg1 == 1){
	      printf("  Booked!\n");
	      kg1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 86){
	   if (kh1 == 1){
	      printf("  Booked!\n");
	      kh1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 87){
	   if (ki1 == 1){
	      printf("  Booked!\n");
	      ki1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 88){
	   if (kj1 == 1){
	      printf("  Booked!\n");
	      kj1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 89){
	   if (kk1 == 1){
	      printf("  Booked!\n");
	      kk1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 90){
	   if (kl1 == 1){
	      printf("  Booked!\n");
	      kl1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 91){
	   if (km1 == 1){
	      printf("  Booked!\n");
	      km1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 92){
	   if (kn1 == 1){
	      printf("  Booked!\n");
	      kn1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 93){
	   if (ko1 == 1){
	      printf("  Booked!\n");
	      ko1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 94){
	   if (kp1 == 1){
	      printf("  Booked!\n");
	      kp1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 95){
	   if (kq1 == 1){
	      printf("  Booked!\n");
	      kq1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 96){
	   if (kr1 == 1){
	      printf("  Booked!\n");
	      kr1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 97){
	   if (ks1 == 1){
	      printf("  Booked!\n");
	      ks1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 98){
	   if (kt1 == 1){
	      printf("  Booked!\n");
	      kt1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 99){
	   if (ku1 == 1){
	      printf("  Booked!\n");
	      ku1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 100){
	   if (kv1 == 1){
	      printf("  Booked!\n");
	      kv1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 101){
	   if (kw1 == 1){
	      printf("  Booked!\n");
	      kw1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 102){
	   if (kx1 == 1){
	      printf("  Booked!\n");
	      kx1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 103){
	   if (ky1 == 1){
	      printf("  Booked!\n");
	      ky1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 104){
	   if (kz1 == 1){
	      printf("  Booked!\n");
	      kz1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 105){
	   if (ea1 == 1){
	      printf("  Booked!\n");
	      ea1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 106){
	   if (eb1 == 1){
	      printf("  Booked!\n");
	      eb1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 107){
	   if (ec1 == 1){
	      printf("  Booked!\n");
	      ec1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 108){
	   if (ed1 == 1){
	      printf("  Booked!\n");
	      ed1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 109){
	   if (ee1 == 1){
	      printf("  Booked!\n");
	      ee1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 110){
	   if (ef1 == 1){
	      printf("  Booked!\n");
	      ef1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 111){
	   if (eg1 == 1){
	      printf("  Booked!\n");
	      eg1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 112){
	   if (eh1 == 1){
	      printf("  Booked!\n");
	      eh1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 113){
	   if (ei1 == 1){
	      printf("  Booked!\n");
	      ei1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 114){
	   if (ej1 == 1){
	      printf("  Booked!\n");
	      ej1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 115){
	   if (ek1 == 1){
	      printf("  Booked!\n");
	      ek1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 116){
	   if (el1 == 1){
	      printf("  Booked!\n");
	      el1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 117){
	   if (em1 == 1){
	      printf("  Booked!\n");
	      em1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 118){
	   if (en1 == 1){
	      printf("  Booked!\n");
	      en1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 119){
	   if (eo1 == 1){
	      printf("  Booked!\n");
	      eo1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 120){
	   if (ep1 == 1){
	      printf("  Booked!\n");
	      ep1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 121){
	   if (eq1 == 1){
	      printf("  Booked!\n");
	      eq1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 122){
	   if (er1 == 1){
	      printf("  Booked!\n");
	      er1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 123){
	   if (es1 == 1){
	      printf("  Booked!\n");
	      es1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 124){
	   if (et1 == 1){
	      printf("  Booked!\n");
	      et1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 125){
	   if (eu1 == 1){
	      printf("  Booked!\n");
	      eu1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 126){
	   if (ev1 == 1){
	      printf("  Booked!\n");
	      ev1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 127){
	   if (ew1 == 1){
	      printf("  Booked!\n");
	      ew1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 128){
	   if (ex1 == 1){
	      printf("  Booked!\n");
	      ex1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 129){
	   if (ey1 == 1){
	      printf("  Booked!\n");
	      ey1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 130){
	   if (ez1 == 1){
	      printf("  Booked!\n");
	      ez1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 131){
	   if (fa1 == 1){
	      printf("  Booked!\n");
	      fa1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 132){
	   if (fb1 == 1){
	      printf("  Booked!\n");
	      fb1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 133){
	   if (fc1 == 1){
	      printf("  Booked!\n");
	      fc1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 134){
	   if (fd1 == 1){
	      printf("  Booked!\n");
	      fd1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 135){
	   if (fe1 == 1){
	      printf("  Booked!\n");
	      fe1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 136){
	   if (ff1 == 1){
	      printf("  Booked!\n");
	      ff1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 137){
	   if (fg1 == 1){
	      printf("  Booked!\n");
	      fg1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 138){
	   if (fh1 == 1){
	      printf("  Booked!\n");
	      fh1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 139){
	   if (fi1 == 1){
	      printf("  Booked!\n");
	      fi1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 140){
	   if (fj1 == 1){
	      printf("  Booked!\n");
	      fj1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 141){
	   if (fk1 == 1){
	      printf("  Booked!\n");
	      fk1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 142){
	   if (fl1 == 1){
	      printf("  Booked!\n");
	      fl1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 143){
	   if (fm1 == 1){
	      printf("  Booked!\n");
	      fm1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 144){
	   if (fn1 == 1){
	      printf("  Booked!\n");
	      fn1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 145){
	   if (fo1 == 1){
	      printf("  Booked!\n");
	      fo1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 146){
	   if (fp1 == 1){
	      printf("  Booked!\n");
	      fp1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 147){
	   if (fq1 == 1){
	      printf("  Booked!\n");
	      fq1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 148){
	   if (fr1 == 1){
	      printf("  Booked!\n");
	      fr1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 149){
	   if (fs1 == 1){
	      printf("  Booked!\n");
	      fs1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 150){
	   if (ft1 == 1){
	      printf("  Booked!\n");
	      ft1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 151){
	   if (fu1 == 1){
	      printf("  Booked!\n");
	      fu1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 152){
	   if (fv1 == 1){
	      printf("  Booked!\n");
	      fv1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 153){
	   if (fw1 == 1){
	      printf("  Booked!\n");
	      fw1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 154){
	   if (fx1 == 1){
	      printf("  Booked!\n");
	      fx1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 155){
	   if (fy1 == 1){
	      printf("  Booked!\n");
	      fy1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 156){
	   if (fz1 == 1){
	      printf("  Booked!\n");
	      fz1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 157){
	   if (ga1 == 1){
	      printf("  Booked!\n");
	      ga1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 158){
	   if (gb1 == 1){
	      printf("  Booked!\n");
	      gb1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 159){
	   if (gc1 == 1){
	      printf("  Booked!\n");
	      gc1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 160){
	   if (gd1 == 1){
	      printf("  Booked!\n");
	      gd1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 161){
	   if (ge1 == 1){
	      printf("  Booked!\n");
	      ge1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 162){
	   if (gf1 == 1){
	      printf("  Booked!\n");
	      gf1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 163){
	   if (gg1 == 1){
	      printf("  Booked!\n");
	      gg1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 164){
	   if (gh1 == 1){
	      printf("  Booked!\n");
	      gh1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 165){
	   if (gi1 == 1){
	      printf("  Booked!\n");
	      gi1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 166){
	   if (gj1 == 1){
	      printf("  Booked!\n");
	      gj1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 167){
	   if (gk1 == 1){
	      printf("  Booked!\n");
	      gk1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 168){
	   if (gl1 == 1){
	      printf("  Booked!\n");
	      gl1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 169){
	   if (gm1 == 1){
	      printf("  Booked!\n");
	      gm1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 170){
	   if (gn1 == 1){
	      printf("  Booked!\n");
	      gn1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 171){
	   if (go1 == 1){
	      printf("  Booked!\n");
	      go1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 172){
	   if (gp1 == 1){
	      printf("  Booked!\n");
	      gp1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 173){
	   if (gq1 == 1){
	      printf("  Booked!\n");
	      gq1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 174){
	   if (gr1 == 1){
	      printf("  Booked!\n");
	      gr1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 175){
	   if (gs1 == 1){
	      printf("  Booked!\n");
	      gs1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 176){
	   if (gt1 == 1){
	      printf("  Booked!\n");
	      gt1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 177){
	   if (gu1 == 1){
	      printf("  Booked!\n");
	      gu1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 178){
	   if (gv1 == 1){
	      printf("  Booked!\n");
	      gv1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 179){
	   if (gw1 == 1){
	      printf("  Booked!\n");
	      gw1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 180){
	   if (gx1 == 1){
	      printf("  Booked!\n");
	      gx1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 181){
	   if (gy1 == 1){
	      printf("  Booked!\n");
	      gy1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 182){
	   if (gz1 == 1){
	      printf("  Booked!\n");
	      gz1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 183){
	   if (ha1 == 1){
	      printf("  Booked!\n");
	      ha1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 184){
	   if (hb1 == 1){
	      printf("  Booked!\n");
	      hb1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 185){
	   if (hc1 == 1){
	      printf("  Booked!\n");
	      hc1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 186){
	   if (hd1 == 1){
	      printf("  Booked!\n");
	      hd1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 187){
	   if (he1 == 1){
	      printf("  Booked!\n");
	      he1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 188){
	   if (hf1 == 1){
	      printf("  Booked!\n");
	      hf1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 189){
	   if (hg1 == 1){
	      printf("  Booked!\n");
	      hg1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 190){
	   if (hh1 == 1){
	      printf("  Booked!\n");
	      hh1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 191){
	   if (hi1 == 1){
	      printf("  Booked!\n");
	      hi1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 192){
	   if (hj1 == 1){
	      printf("  Booked!\n");
	      hj1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 193){
	   if (hk1 == 1){
	      printf("  Booked!\n");
	      hk1 = 0;
	      countSeat1++;
	      arr1[countSeat1] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi > 193){
		printf("  Seat is not available\n");
	}
}
int booked(int kursi){
	if (kursi == 1){
	   if (aa == 1){
	      printf("  Booked!\n");
	      aa= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 2){
	   if (ab == 1){
	      printf("  Booked!\n");
	      ab= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 3){
	   if (ac == 1){
	      printf("  Booked!\n");
	      ac= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 4){
	   if (ad == 1){
	      printf("  Booked!\n");
	      ad= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 5){
	   if (ae == 1){
	      printf("  Booked!\n");
	      ae= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 6){
	   if (af == 1){
	      printf("  Booked!\n");
	      af= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 7){
	   if (ag == 1){
	      printf("  Booked!\n");
	      ag= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 8){
	   if (ah == 1){
	      printf("  Booked!\n");
	      ah= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 9){
	   if (ai == 1){
	      printf("  Booked!\n");
	      ai= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 10){
	   if (aj == 1){
	      printf("  Booked!\n");
	      aj= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 11){
	   if (ak == 1){
	      printf("  Booked!\n");
	      ak= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 12){
	   if (al == 1){
	      printf("  Booked!\n");
	      al= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 13){
	   if (am == 1){
	      printf("  Booked!\n");
	      am= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 14){
	   if (an == 1){
	      printf("  Booked!\n");
	      an= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 15){
	   if (ao == 1){
	      printf("  Booked!\n");
	      ao= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 16){
	   if (ap == 1){
	      printf("  Booked!\n");
	      ap= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 17){
	   if (aq == 1){
	      printf("  Booked!\n");
	      aq= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 18){
	   if (ar == 1){
	      printf("  Booked!\n");
	      ar= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 19){
	   if (as == 1){
	      printf("  Booked!\n");
	      as= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 20){
	   if (at == 1){
	      printf("  Booked!\n");
	      at= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 21){
	   if (au == 1){
	      printf("  Booked!\n");
	      au= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 22){
	   if (av == 1){
	      printf("  Booked!\n");
	      av= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 23){
	   if (aw == 1){
	      printf("  Booked!\n");
	      aw= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 24){
	   if (ax == 1){
	      printf("  Booked!\n");
	      ax= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 25){
	   if (ay == 1){
	      printf("  Booked!\n");
	      ay= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 26){
	   if (az == 1){
	      printf("  Booked!\n");
	      az= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 27){
	   if (ba == 1){
	      printf("  Booked!\n");
	      ba= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 28){
	   if (bb == 1){
	      printf("  Booked!\n");
	      bb= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 29){
	   if (bc == 1){
	      printf("  Booked!\n");
	      bc= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 30){
	   if (bd == 1){
	      printf("  Booked!\n");
	      bd= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 31){
	   if (be == 1){
	      printf("  Booked!\n");
	      be= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 32){
	   if (bf == 1){
	      printf("  Booked!\n");
	      bf= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 33){
	   if (bg == 1){
	      printf("  Booked!\n");
	      bg= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 34){
	   if (bh == 1){
	      printf("  Booked!\n");
	      bh= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 35){
	   if (bi == 1){
	      printf("  Booked!\n");
	      bi= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 36){
	   if (bj == 1){
	      printf("  Booked!\n");
	      bj= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 37){
	   if (bk == 1){
	      printf("  Booked!\n");
	      bk= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 38){
	   if (bl == 1){
	      printf("  Booked!\n");
	      bl= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 39){
	   if (bm == 1){
	      printf("  Booked!\n");
	      bm= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 40){
	   if (bn == 1){
	      printf("  Booked!\n");
	      bn= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 41){
	   if (bo == 1){
	      printf("  Booked!\n");
	      bo= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 42){
	   if (bp == 1){
	      printf("  Booked!\n");
	      bp= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 43){
	   if (bq == 1){
	      printf("  Booked!\n");
	      bq= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 44){
	   if (br == 1){
	      printf("  Booked!\n");
	      br= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 45){
	   if (bs == 1){
	      printf("  Booked!\n");
	      bs= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 46){
	   if (bt == 1){
	      printf("  Booked!\n");
	      bt= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 47){
	   if (bu == 1){
	      printf("  Booked!\n");
	      bu= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 48){
	   if (bv == 1){
	      printf("  Booked!\n");
	      bv= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 49){
	   if (bw == 1){
	      printf("  Booked!\n");
	      bw= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 50){
	   if (bx == 1){
	      printf("  Booked!\n");
	      bx= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 51){
	   if (by == 1){
	      printf("  Booked!\n");
	      by= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 52){
	   if (bz == 1){
	      printf("  Booked!\n");
	      bz= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 53){
	   if (ca == 1){
	      printf("  Booked!\n");
	      ca= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 54){
	   if (cb == 1){
	      printf("  Booked!\n");
	      cb= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 55){
	   if (cc == 1){
	      printf("  Booked!\n");
	      cc= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 56){
	   if (cd == 1){
	      printf("  Booked!\n");
	      cd= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 57){
	   if (ce == 1){
	      printf("  Booked!\n");
	      ce= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 58){
	   if (cf == 1){
	      printf("  Booked!\n");
	      cf= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 59){
	   if (cg == 1){
	      printf("  Booked!\n");
	      cg= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 60){
	   if (ch == 1){
	      printf("  Booked!\n");
	      ch= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 61){
	   if (ci == 1){
	      printf("  Booked!\n");
	      ci= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 62){
	   if (cj == 1){
	      printf("  Booked!\n");
	      cj= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 63){
	   if (ck == 1){
	      printf("  Booked!\n");
	      ck= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 64){
	   if (cl == 1){
	      printf("  Booked!\n");
	      cl= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 65){
	   if (cm == 1){
	      printf("  Booked!\n");
	      cm= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 66){
	   if (cn == 1){
	      printf("  Booked!\n");
	      cn= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 67){
	   if (co == 1){
	      printf("  Booked!\n");
	      co= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 68){
	   if (cp == 1){
	      printf("  Booked!\n");
	      cp= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 69){
	   if (cq == 1){
	      printf("  Booked!\n");
	      cq= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 70){
	   if (cr == 1){
	      printf("  Booked!\n");
	      cr= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 71){
	   if (cs == 1){
	      printf("  Booked!\n");
	      cs= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 72){
	   if (ct == 1){
	      printf("  Booked!\n");
	      ct= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 73){
	   if (cu == 1){
	      printf("  Booked!\n");
	      cu= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 74){
	   if (cv == 1){
	      printf("  Booked!\n");
	      cv= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 75){
	   if (cw == 1){
	      printf("  Booked!\n");
	      cw= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 76){
	   if (cx == 1){
	      printf("  Booked!\n");
	      cx= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 77){
	   if (cy == 1){
	      printf("  Booked!\n");
	      cy= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 78){
	   if (cz == 1){
	      printf("  Booked!\n");
	      cz= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 79){
	   if (da == 1){
	      printf("  Booked!\n");
	      da= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 80){
	   if (db == 1){
	      printf("  Booked!\n");
	      db= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 81){
	   if (dc == 1){
	      printf("  Booked!\n");
	      dc= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 82){
	   if (dd == 1){
	      printf("  Booked!\n");
	      dd= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 83){
	   if (de == 1){
	      printf("  Booked!\n");
	      de= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 84){
	   if (df == 1){
	      printf("  Booked!\n");
	      df= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 85){
	   if (dg == 1){
	      printf("  Booked!\n");
	      dg= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 86){
	   if (dh == 1){
	      printf("  Booked!\n");
	      dh= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 87){
	   if (di == 1){
	      printf("  Booked!\n");
	      di= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 88){
	   if (dj == 1){
	      printf("  Booked!\n");
	      dj= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 89){
	   if (dk == 1){
	      printf("  Booked!\n");
	      dk= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 90){
	   if (dl == 1){
	      printf("  Booked!\n");
	      dl= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 91){
	   if (dm == 1){
	      printf("  Booked!\n");
	      dm= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 92){
	   if (dn == 1){
	      printf("  Booked!\n");
	      dn= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 93){
	   if (doo == 1){
	      printf("  Booked!\n");
	      doo= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 94){
	   if (dp == 1){
	      printf("  Booked!\n");
	      dp= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 95){
	   if (dq == 1){
	      printf("  Booked!\n");
	      dq= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 96){
	   if (dr == 1){
	      printf("  Booked!\n");
	      dr= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 97){
	   if (ds == 1){
	      printf("  Booked!\n");
	      ds= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 98){
	   if (dt == 1){
	      printf("  Booked!\n");
	      dt= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 99){
	   if (du == 1){
	      printf("  Booked!\n");
	      du= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 100){
	   if (dv == 1){
	      printf("  Booked!\n");
	      dv= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 101){
	   if (dw == 1){
	      printf("  Booked!\n");
	      dw= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 102){
	   if (dx == 1){
	      printf("  Booked!\n");
	      dx= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 103){
	   if (dy == 1){
	      printf("  Booked!\n");
	      dy= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 104){
	   if (dz == 1){
	      printf("  Booked!\n");
	      dz= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 105){
	   if (ea == 1){
	      printf("  Booked!\n");
	      ea= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 106){
	   if (eb == 1){
	      printf("  Booked!\n");
	      eb= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 107){
	   if (ec == 1){
	      printf("  Booked!\n");
	      ec= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 108){
	   if (ed == 1){
	      printf("  Booked!\n");
	      ed= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 109){
	   if (ee == 1){
	      printf("  Booked!\n");
	      ee= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 110){
	   if (ef == 1){
	      printf("  Booked!\n");
	      ef= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 111){
	   if (eg == 1){
	      printf("  Booked!\n");
	      eg= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 112){
	   if (eh == 1){
	      printf("  Booked!\n");
	      eh= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 113){
	   if (ei == 1){
	      printf("  Booked!\n");
	      ei= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 114){
	   if (ej == 1){
	      printf("  Booked!\n");
	      ej= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 115){
	   if (ek == 1){
	      printf("  Booked!\n");
	      ek= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 116){
	   if (el == 1){
	      printf("  Booked!\n");
	      el= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 117){
	   if (em == 1){
	      printf("  Booked!\n");
	      em= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 118){
	   if (en == 1){
	      printf("  Booked!\n");
	      en= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 119){
	   if (eo == 1){
	      printf("  Booked!\n");
	      eo= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 120){
	   if (ep == 1){
	      printf("  Booked!\n");
	      ep= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 121){
	   if (eq == 1){
	      printf("  Booked!\n");
	      eq= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 122){
	   if (er == 1){
	      printf("  Booked!\n");
	      er= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 123){
	   if (es == 1){
	      printf("  Booked!\n");
	      es= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 124){
	   if (et == 1){
	      printf("  Booked!\n");
	      et= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 125){
	   if (eu == 1){
	      printf("  Booked!\n");
	      eu= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 126){
	   if (ev == 1){
	      printf("  Booked!\n");
	      ev= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 127){
	   if (ew == 1){
	      printf("  Booked!\n");
	      ew= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 128){
	   if (ex == 1){
	      printf("  Booked!\n");
	      ex= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 129){
	   if (ey == 1){
	      printf("  Booked!\n");
	      ey= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 130){
	   if (ez == 1){
	      printf("  Booked!\n");
	      ez= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 131){
	   if (fa == 1){
	      printf("  Booked!\n");
	      fa= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 132){
	   if (fb == 1){
	      printf("  Booked!\n");
	      fb= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 133){
	   if (fc == 1){
	      printf("  Booked!\n");
	      fc= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 134){
	   if (fd == 1){
	      printf("  Booked!\n");
	      fd= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 135){
	   if (fe == 1){
	      printf("  Booked!\n");
	      fe= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 136){
	   if (ff == 1){
	      printf("  Booked!\n");
	      ff= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 137){
	   if (fg == 1){
	      printf("  Booked!\n");
	      fg= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 138){
	   if (fh == 1){
	      printf("  Booked!\n");
	      fh= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 139){
	   if (fi == 1){
	      printf("  Booked!\n");
	      fi= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 140){
	   if (fj == 1){
	      printf("  Booked!\n");
	      fj= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 141){
	   if (fk == 1){
	      printf("  Booked!\n");
	      fk= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 142){
	   if (fl == 1){
	      printf("  Booked!\n");
	      fl= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 143){
	   if (fm == 1){
	      printf("  Booked!\n");
	      fm= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 144){
	   if (fn == 1){
	      printf("  Booked!\n");
	      fn= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 145){
	   if (fo == 1){
	      printf("  Booked!\n");
	      fo= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 146){
	   if (fp == 1){
	      printf("  Booked!\n");
	      fp= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 147){
	   if (fq == 1){
	      printf("  Booked!\n");
	      fq= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 148){
	   if (fr == 1){
	      printf("  Booked!\n");
	      fr= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 149){
	   if (fs == 1){
	      printf("  Booked!\n");
	      fs= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 150){
	   if (ft == 1){
	      printf("  Booked!\n");
	      ft= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 151){
	   if (fu == 1){
	      printf("  Booked!\n");
	      fu= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 152){
	   if (fv == 1){
	      printf("  Booked!\n");
	      fv= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 153){
	   if (fw == 1){
	      printf("  Booked!\n");
	      fw= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 154){
	   if (fx == 1){
	      printf("  Booked!\n");
	      fx= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 155){
	   if (fy == 1){
	      printf("  Booked!\n");
	      fy= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 156){
	   if (fz == 1){
	      printf("  Booked!\n");
	      fz= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 157){
	   if (ga == 1){
	      printf("  Booked!\n");
	      ga= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 158){
	   if (gb == 1){
	      printf("  Booked!\n");
	      gb= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 159){
	   if (gc == 1){
	      printf("  Booked!\n");
	      gc= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 160){
	   if (gd == 1){
	      printf("  Booked!\n");
	      gd= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 161){
	   if (ge == 1){
	      printf("  Booked!\n");
	      ge= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 162){
	   if (gf == 1){
	      printf("  Booked!\n");
	      gf= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 163){
	   if (gg == 1){
	      printf("  Booked!\n");
	      gg= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 164){
	   if (gh == 1){
	      printf("  Booked!\n");
	      gh= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 165){
	   if (gi == 1){
	      printf("  Booked!\n");
	      gi= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 166){
	   if (gj == 1){
	      printf("  Booked!\n");
	      gj= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 167){
	   if (gk == 1){
	      printf("  Booked!\n");
	      gk= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 168){
	   if (gl == 1){
	      printf("  Booked!\n");
	      gl= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 169){
	   if (gm == 1){
	      printf("  Booked!\n");
	      gm= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 170){
	   if (gn == 1){
	      printf("  Booked!\n");
	      gn= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 171){
	   if (go == 1){
	      printf("  Booked!\n");
	      go= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 172){
	   if (gp == 1){
	      printf("  Booked!\n");
	      gp= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 173){
	   if (gq == 1){
	      printf("  Booked!\n");
	      gq= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 174){
	   if (gr == 1){
	      printf("  Booked!\n");
	      gr= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 175){
	   if (gs == 1){
	      printf("  Booked!\n");
	      gs= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi == 176){
	   if (gt == 1){
	      printf("  Booked!\n");
	      gt= 0;
	      countSeat++;
	      arr[countSeat] = kursi;
	   }
	   else{
	       printf("  Seat is not available\n");
	   }
	}
	if (kursi > 176){
		printf("  Seat is not available\n");
	}
}
/* Creator Notes : bagian modular booked() dan booked1() merupakan data dan juga algoritma untuk pemesanan kursi
baik stadion maupun istora. Oleh karena itu, sebisa mungkin menghindari merubah dua buah modular tersebut untuk
menghindari kerusakan program. */
