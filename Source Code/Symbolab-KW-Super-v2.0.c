#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include "hit_turunan.c"
#include "hit_integral.c"
#include "hit_matriks.c"
#define BIRU "\033[1;34m"
#define KUNING "\033[1;33m"
#define MERAH "\033[1;31m"
#define NORMAL "\033[0m"
void logo(), menu(), turunan(), integral(), matriks(), bantuan(), tentang(), error();
int main(){
	logo();
	menu();
}
void logo(){
	system("cls");
	printf("%s", MERAH);
	printf("\n\n\n\n\n");
	printf("\t      -shdddddddddddddddddddddhs:\n");
	printf("\t     sMMMMMMMMMMMMMMMMMMMMMMMMMMMs\n");
	printf("\t    `mMMMMMMMMMMMMMMMMMMMMMMMMMMMm\n");
	printf("\t    `mMMMMMMNmhmNMMMMMMMMMMMMMMMMm                  :so                   /so             +s/\n");
	printf("\t    `mMMMMd:     .NMMMMMMMMMMMMMMm                  NMM-                  dMM:           `MMm`\n");
	printf("\t    `mMMMN.  sNNhmMMMyomMMMyodMMMm  +yooyys::syy+`  NMMyyyy+`   `/syyy/`  mMM:  :syys+yo `MMNyyhy/\n");
	printf("\t    `NMMMM+`  -/smMMN. -NMs  yMMMm `NMMmdNMMMdmMMm` NMMNhhNMN- :mMNddNMm: mMM:`dMMmdNMMM-:MMMmydMMd`\n");
	printf("\t    `NMMMMMNho/`  +MMd  :h` +MMMMm `NMM. hMMh `NMM- NMN.  /MMh`mMM:  /MMd`mMM:sMMy  `mMM-:MMm   sMMs\n");
	printf("\t    `NMMMMmdmNMy  .MMMh    :MMMMMm `NMN. yMMy  NMM- NMM+`.yMMy`dMMo``sMMh mMM:+MMd.`:NMM-:MMN:`.dMM+\n");
	printf("\t    `mMMMN-` ``  -dMMMMo  -NMMMMMm `NMm` +MMo  mMN. mMMMMMMNs  .hMMMMMNy. dMN- oNMMMMMMN.`NMMMMMMNo\n");
	printf("\t    `mMMMMMmhhhdmMMMMMM: `mMMMMMMm  ./.   ::`  ./.  ./..//:`     ./++/`   `/-   `://../-  -/.-//-`\n");
	printf("\t    `mMMMMMMMMMMMMMMMMy `hMMMMMMMm\n");
	printf("\t    `mMMMMMMMMMMMMMMMMMmNMMMMMMMMm                                           omd. :so` :dd:     -hh.\n");
	printf("\t     /NMMMMMMMMMMMMMMMMMMMMMMMMMN/                                           mMModMMm- /MMd    `mMM:\n");
	printf("\t      `:///////////////////////:`                                            mMMMMm+   `dMM/:o:+MMd\n");
	printf("\t                                                                             mMMMN/     +MMNMMNNMM:\n");
	printf("\t                                                                             mMMMMN+    `mMMMMMMMm\n");
	printf("\t                                                                             mMM+mMMy`   +MMMNMMM/\n");
	printf("\t                                                                             yNm.`yNN:   .dNd+mNh\n");
	printf("\t                                                                                   .           .\n\n\n\n\n");
	printf("%s", NORMAL);
	printf("Tekan tombol apapun untuk melanjutkan...");
  	getch();
}
void menu(){
	system("cls");
	int a, b = 1, key;
  	char list[6][9]={"TURUNAN", "INTEGRAL", "MATRIKS", "BANTUAN", "TENTANG", "KELUAR"};
	while(key != 13){
    	fflush(stdin);
	    system("cls");
	    printf("%s", KUNING);
	    printf("\n");
	    printf("\t\t\t\t\t      Selamat datang! Di aplikasi:\n\n");
	    printf("%s", MERAH);
	    printf("\t\t\t\t\t         Symbolab KW Super v2.0\n\n");
	    printf("%s", NORMAL);
		printf("\t\t\t\t\t  Silahkan pilih opsi yang diinginkan:\n\n");
		for(a = 0; a < 6; ++a){
       		if(a + 1 == b){
    			printf("%s", BIRU);
  			}
			else{
    			printf("%s", NORMAL);
		  }
			printf("\t\t\t\t\t\t      %d. %s\n", a + 1, list[a]);
      		printf("\t\t\t\t\t\t      ============\n\n");
    	}
    	key = getch();
    	if(key == 80 && b != 6){
    		++b;
    	}
    	else if(key == 72 && b != 1){
    		--b;
    	}
    	else if(key == 72 && b == 1){
    		b = 6;
    	}
    	else if(key == 80 && b == 6){
    		b = 1;
    	}
  	}
  	switch(b){
  		case 1:
  			turunan();
  		case 2:
  			integral();
  		case 3:
  			matriks();
  		case 4:
  			bantuan();
  		case 5:
  			tentang();
  		case 6:
  			system("cls");
    		printf("%s", KUNING);
    		printf("\n");
    		printf("\t\t\t\t      Terima kasih sudah menggunakan aplikasi ini.\n");
    		printf("\t\t\t\t      ============================================\n");
			printf("%s", NORMAL);
    		exit(1);
	}
}
void turunan(){
	int tingkat, pass, z;
	system("cls");
	printf("%s", KUNING);
	printf("\n");
	printf("\t\t\t\t\t\t       1. TURUNAN\n");
	printf("\t\t\t\t\t\t       ==========\n\n");
	printf("%s", NORMAL);
	printf("Masukkan nilai pangkat tertinggi persamaan yang ingin digunakan. Ikutilah persamaan berikut sebagai acuan:\n\n");
	printf("%s", BIRU);
	printf("y = ax^n + bx^(n - 1) + cx^(n - 2) + ... + z\n\n");
	printf("%s", NORMAL);
	do{
		printf("Masukkan berapa kali turunan akan dilakukan (<= 5)\t: ");
		z = scanf("%d", &tingkat);
		fflush(stdin);
		if(tingkat < 1 || tingkat > 5 || z == 0){
			error();
		}
	}
	while(tingkat < 1 || tingkat > 5 || z == 0);
	hit_turunan(pass, tingkat);
	printf("\nTekan tombol apapun untuk kembali ke menu...");
  	getch();
  	menu();
}
void integral(){
	system("cls");
	int a, b = 1, key;
  	char list[3][19]={"Integral Tak Tentu", "Integral Tentu", "Kembali ke Menu"};
	while(key != 13){
    	system("cls");
	    fflush(stdin);
		printf("%s", KUNING);
		printf("\n");
		printf("\t\t\t\t                      2. INTEGRAL\n");
		printf("\t\t\t\t                      ============\n\n");
		printf("%s", NORMAL);
		printf("\t\t\t\t      Tentukan jenis integral yang akan digunakan:\n\n");
		for(a = 0; a < 3; ++a){
       		if(a + 1 == b){
    			printf("%s", BIRU);
  			}
			else{
    			printf("%s", NORMAL);
  			}
			printf("\t\t\t\t\t\t %d. %s\n", a + 1, list[a]);
      		printf("\t\t\t\t\t\t ----------------------\n\n");
    	}
    	key = getch();
    	if(key == 80 && b != 3){
      		++b;
    	}
    	else if(key == 72 && b != 1){
      		--b;
    	}
    	else if(key == 72 && b == 1){
      		b = 3;
    	}
    	else if(key == 80 && b == 3){
      		b = 1;
    	}
  	}
  	switch(b){
  		case 1:
  			hit_integral();
    		printf("\nTekan tombol apapun untuk kembali ke menu...");
  			getch();
  			menu();
  		case 2:
  			hit_integral2();
    		printf("\nTekan tombol apapun untuk kembali ke menu...");
  			getch();
  			menu();
		case 3:
  			menu();
	}
}
void matriks(){
	system("cls");
	int a, b = 1, key;
  	char list[6][16]={"Penjumlahan", "Pengurangan", "Perkalian", "Transpos", "Determinan", "Kembali ke Menu"};
	while(key != 13){
    	system("cls");
	    fflush(stdin);
		printf("%s", KUNING);
		printf("\n");
		printf("\t\t\t\t                       3. MATRIKS\n");
		printf("\t\t\t\t                       ==========\n\n");
		printf("%s", NORMAL);
		printf("\t\t\t\t     Tentukan operasi matriks yang ingin digunakan:\n\n");
		for(a = 0; a < 6; ++a){
       		if(a + 1 == b){
    			printf("%s", BIRU);
  			}
			else{
    			printf("%s", NORMAL);
  			}
			printf("\t\t\t\t\t\t   %d. %s\n", a + 1, list[a]);
      		printf("\t\t\t\t\t\t   ------------------\n\n");
    	}
    	key = getch();
    	if(key == 80 && b != 6){
      		++b;
    	}
    	else if(key == 72 && b != 1){
      		--b;
    	}
    	else if(key == 72 && b == 1){
      		b = 6;
    	}
    	else if(key == 80 && b == 6){
      		b = 1;
    	}
  	}
  	switch(b){
  		case 1:
  			m_tambah();
    		printf("\nTekan tombol apapun untuk kembali ke menu...");
  			getch();
  			menu();
  		case 2:
  			m_kurang();
    		printf("\nTekan tombol apapun untuk kembali ke menu...");
  			getch();
  			menu();
  		case 3:
  			m_kali();
    		printf("\nTekan tombol apapun untuk kembali ke menu...");
  			getch();
  			menu();
  		case 4:
  			m_trans();
    		printf("\nTekan tombol apapun untuk kembali ke menu...");
  			getch();
  			menu();
  		case 5:
  			m_det();
    		printf("\nTekan tombol apapun untuk kembali ke menu...");
  			getch();
  			menu();
  		case 6:
  			menu();
	}
}
void bantuan(){
	system("cls");
    printf("\n");
    printf("%s", KUNING);
	printf("\t\t\t\t\t\t       4. BANTUAN\n");
	printf("\t\t\t\t\t\t       ==========\n\n");
	printf("%s", MERAH);
	printf("\t\t\t\t\t\t    Symbolab KW v1.0\n\n");
    printf("%s", NORMAL);
	printf("    Aplikasi ini berguna untuk membantu Anda dalam menyelesaikan permasalahan persamaan matematika dasar maupun\n");
	printf("lanjutan. Tujuan utama aplikasi ini adalah untuk mempermudah pengerjaan tugas matematika Anda dalam dunia perkuliahan.\n\n");
	printf("    Dalam penggunaan aplikasi ini, ada beberapa himbauan yang diperuntukkan untuk pengguna:\n\n");
	printf(" 1. Sampai saat ini, ada beberapa fitur dari aplikasi yang belum lengkap, seperti invers matriks. Diharapkan agar\n");
	printf("    pengguna memakluminya.\n");
	printf(" 2. Diharapkan untuk selalu memperhatikan petunjuk-petunjuk dan batasan-batasan pada setiap bagian aplikasi.\n");
	printf(" 3. Aplikasi ini hanya diperuntukkan untuk mempermudah pengerjaan permasalahan persamaan matematika Anda. Diharapakan\n");
	printf("    untuk tidak menggunakan aplikasi ini disaat tidak diizinkan, seperti saat ujian.\n\n");
	printf("    Semoga aplikasi ini dapat membantu Anda dalam dunia perkuliahan.\n\n");
	printf("Tekan tombol apapun untuk kembali ke menu...");
  	getch();
  	menu();
}
void tentang(){
	system("cls");
    printf("\n");
    printf("%s", KUNING);
	printf("\t\t\t\t\t               5. TENTANG\n");
	printf("\t\t\t\t\t               ==========\n\n");	
	printf("%s", MERAH);
	printf("\t\t\t\t\t         Symbolab KW Super v2.0\n\n");
    printf("%s", NORMAL);
	printf("\t\t\t\t\t              Dibuat oleh:\n\n");
	printf("%s", BIRU);
	printf("\t\t\t\t\t               Kelompok 7\n");
	printf("\t\t\t\t\t          Pemrograman Lanjut 1\n\n");
	printf("%s", NORMAL);
    printf("\t\t\t\t\t                Anggota:\n");    
	printf("\t\t\t\t\t  Jidan Dhirayoga Gumbira (1806200116)\n");
    printf("\t\t\t\t\t Philipus Kristian Renaldy (1806200053)\n\n");
	printf("Tekan tombol apapun untuk kembali ke menu...");
  	getch();
  	menu();
}
void error(){
	printf("%s", MERAH);
	printf("Maaf, nilai yang dimasukkan tidak sesuai. Silahkan coba lagi.\n");
	printf("%s", NORMAL);
}

