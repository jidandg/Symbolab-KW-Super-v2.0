#define BIRU "\033[1;34m"
#define KUNING "\033[1;33m"
#define MERAH "\033[1;31m"
#define NORMAL "\033[0m"
void hit_integral2(), hasil_integral(int m, int n, int y, float a, float b, float koef[21]), hasil_integral2(int m, int n, float koef[21], float p, float q), grafik(int m, int n, float a, float b, float koef[21]), error();
void hit_integral(){
	int m, n, pass = 0, tingkat = 0, x = 0, y = 0, z;
	float a, b, koef[21];
	memset(koef, 0, sizeof(koef[0]) * 21);
	system("cls");
	printf("%s", KUNING);
	printf("\n");
	printf("\t\t\t\t\t\t 1. Integral Tak Tentu\n");
    printf("\t\t\t\t\t\t ----------------------\n\n");
	printf("%s", NORMAL);
	printf("Masukkan nilai pangkat tertinggi persamaan yang ingin digunakan. Ikutilah persamaan berikut sebagai acuan:\n\n");
	printf("%s", BIRU);
	printf("y = ax^n + bx^(n - 1) + cx^(n - 2) + ... + z\n\n");
	printf("%s", NORMAL);
	do{
		printf("Masukkan berapa kali turunan akan dilakukan (<= 3)\t: ");
		z = scanf("%d", &tingkat);
		fflush(stdin);
		if(tingkat < 1 || tingkat > 3 || z == 0){
			error();
		}
	}
	while(tingkat < 1 || tingkat > 3 || z == 0);
	printf("\n");
	do{
		printf("Masukkan nilai pangkat tertinggi\t\t\t: ");
		z = scanf("%d", &n);
		fflush(stdin);
		if(z == 0){
			error();
		}
	}
	while(z == 0);
	do{
		printf("Masukkan nilai pangkat terendah\t\t\t\t: ");
		z = scanf("%d", &m);
		fflush(stdin);
		if(m > n || z == 0){
			error();
		}
	}
	while(m > n || z == 0);
	printf("\n");
	for(x; n - x >= m; ++x){
		do{
			if(n - x == 0){
				printf("Masukkan nilai konstanta\t\t\t\t: ");
			}
			else if(n - x == 1){
				printf("Masukkan nilai koefisien untuk x\t\t\t: ");
			}
			else{
				printf("Masukkan nilai koefisien untuk x^(%d)\t\t\t: ", n - x);
			}
			z = scanf("%f", &koef[x]);
			fflush(stdin);
			if(z == 0){
				error();
			}
		}
		while(z == 0);
	}
	printf("\n");
	do{
		printf("Masukkan batas maksimal x grafik\t\t\t: ");
		z = scanf("%f", &b);
		fflush(stdin);
		if(z == 0){
			error();
		}
	}
	while(z == 0);
	do{
		printf("Masukkan batas minimal x grafik\t\t\t\t: ");
		z = scanf("%f", &a);
		fflush(stdin);
		if(a > b || z == 0){
			error();
		}
	}
	while(a > b || z == 0);
	printf("%s", KUNING);
	printf("\nPersamaan awal:\n");
	printf("%s", NORMAL);
	printf("= ");
	for(x = 0; n - x >= m; ++x){
		if(koef[x] == 0){
			continue;
		}
		if(pass == 1){
			printf(" + ");
		}
		printf("(%.2f)", koef[x]);
		if(n - x != 0){
			printf("x");
		}
		if(n - x != 0 && n - x != 1){
			printf("^(%d)", n - x);
		}
		pass = 1;
	}
	if(pass == 0){
		printf("0");
	}
	printf("\n");
	grafik(m, n, a, b, koef);
	for(y; y < tingkat; ++y){
		hasil_integral(m, n, y, a, b, koef);
	}
}
void hasil_integral(int m, int n, int y, float a, float b, float koef[21]){
	int pass = 0, x = 0;
	printf("%s", KUNING);
	printf("\nHasil integral ke-%d dari persamaan tersebut:\n", y + 1);
	printf("%s", NORMAL);
	printf("= ");
	for(x; n - x >= m; ++x){
		if(koef[x] == 0){
			continue;
		}
		if(pass == 1){
			printf(" + ");
		}
		if(n - x + y + 1 == 0){
			if(koef[x] != 1){
				printf("(%.2f)", koef[x]);
			}
			printf("ln(x)");
			continue;
		}
		if(n - x + y != 0){
			koef[x] /= n - x + y + 1;
		}
		printf("(%.2f)", koef[x]);
		if(n - x + y + 1 != 0){
			printf("x");
		}
		if(n - x + y + 1 != 0 && n - x + y + 1 != 1){
			printf("^(%d)", n - x + y + 1);
		}
		pass = 1;
	}
	if(pass == 1){
		printf(" + ");
	}
	printf("c\n");
}
void hit_integral2(){
	int m, n, pass = 0, x = 0, z;
	float a, b, koef[21], p, q;
	memset(koef, 0, sizeof(koef[0]) * 21);
	system("cls");
	printf("%s", KUNING);
	printf("\n");
	printf("\t\t\t\t\t\t   2. Integral Tentu\n");
    printf("\t\t\t\t\t\t   ------------------\n\n");
	printf("%s", NORMAL);
	printf("Masukkan nilai pangkat tertinggi persamaan yang ingin digunakan. Ikutilah persamaan berikut sebagai acuan:\n\n");
	printf("%s", BIRU);
	printf("y = ax^n + bx^(n - 1) + cx^(n - 2) + ... + z\n\n");
	printf("%s", NORMAL);
	do{
		printf("Masukkan nilai batas atas integral\t\t: ");
		z = scanf("%f", &q);
		fflush(stdin);
		if(z == 0){
			error();
		}
	}
	while(z == 0);
	do{
		printf("Masukkan nilai batas bawah integral\t\t: ");
		z = scanf("%f", &p);
		fflush(stdin);
		if(p > q || z == 0){
			error();
		}
	}
	while(p > q || z == 0);
	printf("\n");
	do{
		printf("Masukkan nilai pangkat tertinggi\t\t: ");
		z = scanf("%d", &n);
		fflush(stdin);
		if(z == 0){
			error();
		}
	}
	while(z == 0);
	do{
		printf("Masukkan nilai pangkat terendah\t\t\t: ");
		z = scanf("%d", &m);
		fflush(stdin);
		if(m > n || z == 0){
			error();
		}
	}
	while(m > n || z == 0);
	printf("\n");
	for(x; n - x >= m; ++x){
		do{
			if(n - x == 0){
				printf("Masukkan nilai konstanta\t\t\t: ");
			}
			else if(n - x == 1){
				printf("Masukkan nilai koefisien untuk x\t\t: ");
			}
			else{
				printf("Masukkan nilai koefisien untuk x^(%d)\t\t: ", n - x);
			}
			z = scanf("%f", &koef[x]);
			fflush(stdin);
			if(z == 0){
				error();
			}
		}
		while(z == 0);
	}
	printf("%s", KUNING);
	printf("\nPersamaan awal:\n");
	printf("%s", NORMAL);
	printf("= ");
	for(x = 0; n - x >= m; ++x){
		if(koef[x] == 0){
			continue;
		}
		if(pass == 1){
			printf(" + ");
		}
		printf("(%.2f)", koef[x]);
		if(n - x != 0){
			printf("x");
		}
		if(n - x != 0 && n - x != 1){
			printf("^(%d)", n - x);
		}
		pass = 1;
	}
	if(pass == 0){
		printf("0");
	}
	printf("\n");
	grafik(m, n, p, q, koef);
	hasil_integral2(m, n, koef, p, q);
}
void hasil_integral2(int m, int n, float koef[21], float p, float q){
	int x = 0;
	float ba, bb;
	printf("%s", KUNING);
	printf("\nHasil integral dari persamaan tersebut:\n");
	printf("%s", NORMAL);
	printf("= ");
	for(x = 0; n - x >= m; ++x){
		if(p < 0){
			break;
		}
		if(n - x + 1 == 0){
			ba += koef[x] * log(q);
			bb += koef[x] * log(p);
			continue;
		}
		ba += (koef[x] / (n - x + 1)) * pow(q, n - x + 1);
		bb += (koef[x] / (n - x + 1)) * pow(p, n - x + 1);
	}
	if(m < 0){
		printf("Integral tidak konvergen\n");
	}
	else{
		printf("%.2f\n", ba - bb);
	}
}
void grafik(int m, int n, float a, float b, float koef[21]){
	int x, y;
	float c, p;
	FILE *xy = fopen("xy.txt", "w");
	for(c = a; c <= b ; c += 0.1){
        p = 0;
		for(y = 0; n - y >= m; ++y){
        	p += koef[y] * pow(c, n - y);
		}
        fprintf(xy, "%f %f\n", c, p);
    }
	fclose(xy);
	printf("%s", BIRU);
	printf("\nTekan tombol apapun untuk menampilkan grafik persamaan...\n");
	printf("%s", NORMAL);
	getch();
	system("gnuplot.lnk -p -e \"set term wxt title 'Symbolab KW 1.0'\" -e \"set grid\" -e \"set yrange [-10:50]\" -e \"plot '..\\..\\xy.txt' with lines notitle\"");
}

