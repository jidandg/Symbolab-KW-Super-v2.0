#define BIRU "\033[1;34m"
#define KUNING "\033[1;33m"
#define MERAH "\033[1;31m"
#define NORMAL "\033[0m"
void m_kurang(), m_kali(), m_trans(), m_det(), error();
void m_tambah(){
	int m, n, x = 0, y, z;
	system("cls");
	printf("%s", KUNING);
	printf("\n");
	printf("\t\t\t\t\t\t     1. Penjumlahan\n");
	printf("\t\t\t\t\t\t     --------------\n\n");
	printf("%s", NORMAL);
	printf("Masukkan jumlah baris dan kolom matriks yang ingin digunakan. Ikutilah bentuk berikut sebagai acuan:\n\n");
	printf("%s", BIRU);
	printf("[ a(1, 1) a(1, 2)   ...   a(1, n) ]\n");
	printf("[ a(2, 1) a(2, 2)   ...   a(2, n) ]\n");
	printf("[   ...     ...     ...     ...   ]\n");
	printf("[ a(m, 1) a(m, 2)   ...   a(m, n) ]\n\n");
	printf("%s", NORMAL);
	printf("Catatan: untuk saat ini, aplikasi hanya dapat menghitung penjumlahan dari matriks dengan ukuran maksimal 10 x 10, dan\n");
	printf("dengan nilai elemen matriks dari -100 hingga 100. Silahkan melihat bantuan pada menu utama untuk petunjuk lebih lanjut\n");
	printf("mengenai aplikasi.\n\n");
	do{
		printf("Masukkan jumlah baris (<= 10)\t: ");
		scanf("%d", &m);
		fflush(stdin);
		if(m < 1 || m > 10){
			error();
		}
	}
	while(m < 1 || m > 10);
	do{
		printf("Masukkan jumlah kolom (<= 10)\t: ");
		scanf("%d", &n);
		fflush(stdin);
		if(n < 1 || n > 10){
			error();
		}
	}
	while(n < 1 || n > 10);
	int a[m][n], b[m][n];
	memset(a, 0, sizeof(a[0][0]) * m * n);
	memset(b, 0, sizeof(b[0][0]) * m * n);
	printf("%s", KUNING);
	printf("\nMatriks:\n");
	printf("%s", NORMAL);
	for(x; x < m; ++x){
		printf("[ ");
        for(y = 0; y < n; ++y){
            printf("a(%2d, %2d) ", x + 1, y + 1);
        }
        printf("]\n");
    }
    printf("%s", KUNING);
	printf("\nMasukkan isi matriks A:\n");
	printf("%s", NORMAL);
    for(x = 0; x < m; ++x){
        for(y = 0; y < n; ++y){
            do{
				printf("Masukkan isi matriks a(%2d, %2d)\t: ", x + 1, y + 1);
				z = scanf("%d", &a[x][y]);
				fflush(stdin);
				if(a[x][y] < -100 || a[x][y] > 100 || z == 0){
					error();
				}
        	}
        	while(a[x][y] < -100 || a[x][y] > 100 || z == 0);
		}
        printf("\n");
    }
	printf("%s", KUNING);
	printf("Masukkan isi matriks B:\n");
	printf("%s", NORMAL);
    for(x = 0; x < m; ++x){
        for(y = 0; y < n; ++y){
            do{
				printf("Masukkan isi matriks b(%2d, %2d)\t: ", x + 1, y + 1);
				z = scanf("%d", &b[x][y]);
				fflush(stdin);
				if(b[x][y] < -100 || b[x][y] > 100 || z == 0){
					error();
				}
        	}
        	while(b[x][y] < -100 || b[x][y] > 100 || z == 0);
		}
        printf("\n");
    }
	printf("%s", KUNING);
	printf("Matriks A:\n");
	printf("%s", NORMAL);
	for(x = 0; x < m; ++x){
		printf("[ ");
        for(y = 0; y < n; ++y){
            printf("%4d ", a[x][y]);
        }
        printf("]\n");
    }
	printf("%s", KUNING);
	printf("\nMatriks B:\n");
	printf("%s", NORMAL);
	for(x = 0; x < m; ++x){
		printf("[ ");
        for(y = 0; y < n; ++y){
            printf("%4d ", b[x][y]);
        }
        printf("]\n");
    }
	printf("%s", KUNING);
	printf("\nHasil penjumlahan matriks:\n");
	printf("%s", NORMAL);
	for(x = 0; x < m; ++x){
		printf("[ ");
        for(y = 0; y < n; ++y){
        	a[x][y] += b[x][y];
            printf("%4d ", a[x][y]);
        }
        printf("]\n");
    }
}
void m_kurang(){
	int m, n, x = 0, y, z;
	system("cls");
	printf("%s", KUNING);
	printf("\n");
	printf("\t\t\t\t\t\t     2. Pengurangan\n");
	printf("\t\t\t\t\t\t     --------------\n\n");
	printf("%s", NORMAL);
	printf("Masukkan jumlah baris dan kolom matriks yang ingin digunakan. Ikutilah bentuk berikut sebagai acuan:\n\n");
	printf("%s", BIRU);
	printf("[ a(1, 1) a(1, 2)   ...   a(1, n) ]\n");
	printf("[ a(2, 1) a(2, 2)   ...   a(2, n) ]\n");
	printf("[   ...     ...     ...     ...   ]\n");
	printf("[ a(m, 1) a(m, 2)   ...   a(m, n) ]\n\n");
	printf("%s", NORMAL);
	printf("Catatan: untuk saat ini, aplikasi hanya dapat menghitung pengurangan dari matriks dengan ukuran maksimal 10 x 10, dan\n");
	printf("dengan nilai elemen matriks dari -100 hingga 100. Silahkan melihat bantuan pada menu utama untuk petunjuk lebih lanjut\n");
	printf("mengenai aplikasi.\n\n");
	do{
		printf("Masukkan jumlah baris (<= 10)\t: ");
		scanf("%d", &m);
		fflush(stdin);
		if(m < 1 || m > 10){
			error();
		}
	}
	while(m < 1 || m > 10);
	do{
		printf("Masukkan jumlah kolom (<= 10)\t: ");
		scanf("%d", &n);
		fflush(stdin);
		if(n < 1 || n > 10){
			error();
		}
	}
	while(n < 1 || n > 10);
	int a[m][n], b[m][n];
	memset(a, 0, sizeof(a[0][0]) * m * n);
	memset(b, 0, sizeof(b[0][0]) * m * n);
	printf("%s", KUNING);
	printf("\nMatriks:\n");
	printf("%s", NORMAL);
	for(x; x < m; ++x){
		printf("[ ");
        for(y = 0; y < n; ++y){
            printf("a(%2d, %2d) ", x + 1, y + 1);
        }
        printf("]\n");
    }
    printf("%s", KUNING);
	printf("\nMasukkan isi matriks A:\n");
	printf("%s", NORMAL);
    for(x = 0; x < m; ++x){
        for(y = 0; y < n; ++y){
            do{
				printf("Masukkan isi matriks a(%2d, %2d)\t: ", x + 1, y + 1);
				z = scanf("%d", &a[x][y]);
				fflush(stdin);
				if(a[x][y] < -100 || a[x][y] > 100 || z == 0){
					error();
				}
        	}
        	while(a[x][y] < -100 || a[x][y] > 100 || z == 0);
		}
        printf("\n");
    }
	printf("%s", KUNING);
	printf("Masukkan isi matriks B:\n");
	printf("%s", NORMAL);
    for(x = 0; x < m; ++x){
        for(y = 0; y < n; ++y){
            do{
				printf("Masukkan isi matriks b(%2d, %2d)\t: ", x + 1, y + 1);
				z = scanf("%d", &b[x][y]);
				fflush(stdin);
				if(b[x][y] < -100 || b[x][y] > 100 || z == 0){
					error();
				}
        	}
        	while(b[x][y] < -100 || b[x][y] > 100 || z == 0);
		}
        printf("\n");
    }
	printf("%s", KUNING);
	printf("Matriks A:\n");
	printf("%s", NORMAL);
	for(x = 0; x < m; ++x){
		printf("[ ");
        for(y = 0; y < n; ++y){
            printf("%4d ", a[x][y]);
        }
        printf("]\n");
    }
	printf("%s", KUNING);
	printf("\nMatriks B:\n");
	printf("%s", NORMAL);
	for(x = 0; x < m; ++x){
		printf("[ ");
        for(y = 0; y < n; ++y){
            printf("%4d ", b[x][y]);
        }
        printf("]\n");
    }
	printf("%s", KUNING);
	printf("\nHasil pengurangan matriks:\n");
	printf("%s", NORMAL);
	for(x = 0; x < m; ++x){
		printf("[ ");
        for(y = 0; y < n; ++y){
        	a[x][y] -= b[x][y];
            printf("%4d ", a[x][y]);
        }
        printf("]\n");
    }
}
void m_kali(){
	int m, n, s, w, x = 0, y, z;
	system("cls");
	printf("%s", KUNING);
	printf("\n");
	printf("\t\t\t\t\t\t      3. Perkalian\n");
	printf("\t\t\t\t\t\t      ------------\n\n");
	printf("%s", NORMAL);
	printf("Masukkan jumlah baris dan kolom matriks yang ingin digunakan. Ikutilah bentuk berikut sebagai acuan:\n\n");
	printf("%s", BIRU);
	printf("[ a(1, 1) a(1, 2)   ...   a(1, n) ]\n");
	printf("[ a(2, 1) a(2, 2)   ...   a(2, n) ]\n");
	printf("[   ...     ...     ...     ...   ]\n");
	printf("[ a(m, 1) a(m, 2)   ...   a(m, n) ]\n\n");
	printf("%s", NORMAL);
	printf("Catatan: untuk saat ini, aplikasi hanya dapat menghitung perkalian dari matriks dengan ukuran maksimal 10 x 10, dan\n");
	printf("dengan nilai elemen matriks dari -100 hingga 100. Silahkan melihat bantuan pada menu utama untuk petunjuk lebih lanjut\n");
	printf("mengenai aplikasi.\n\n");
	do{
		printf("Masukkan jumlah baris matriks A (<= 10)\t: ");
		scanf("%d", &m);
		fflush(stdin);
		if(m < 1 || m > 10){
			error();
		}
	}
	while(m < 1 || m > 10);
	do{
		printf("Masukkan jumlah kolom matriks A (<= 10)\t: ");
		scanf("%d", &n);
		fflush(stdin);
		if(n < 1 || n > 10){
			error();
		}
	}
	while(n < 1 || n > 10);
	printf("%s", KUNING);
	printf("\nJumlah baris matriks B sudah ditentukan\t: %d\n\n", n);
	printf("%s", NORMAL);
	do{
		printf("Masukkan jumlah kolom matriks B (<= 10)\t: ");
		scanf("%d", &s);
		fflush(stdin);
		if(s < 1 || s > 10){
			error();
		}
	}
	while(s < 1 || s > 10);
	int a[m][n], b[n][s], c[m][s];
	memset(a, 0, sizeof(a[0][0]) * m * n);
	memset(b, 0, sizeof(b[0][0]) * n * s);
	memset(c, 0, sizeof(c[0][0]) * m * s);
	printf("%s", KUNING);
	printf("\nMatriks A:\n");
	printf("%s", NORMAL);
	for(x; x < m; ++x){
		printf("[ ");
        for(y = 0; y < n; ++y){
            printf("a(%2d, %2d) ", x + 1, y + 1);
        }
        printf("]\n");
    }
    printf("%s", KUNING);
	printf("\nMasukkan isi matriks A:\n");
	printf("%s", NORMAL);
    for(x = 0; x < m; ++x){
        for(y = 0; y < n; ++y){
            do{
				printf("Masukkan isi matriks a(%2d, %2d)\t: ", x + 1, y + 1);
				z = scanf("%d", &a[x][y]);
				fflush(stdin);
				if(a[x][y] < -100 || a[x][y] > 100 || z == 0){
					error();
				}
        	}
        	while(a[x][y] < -100 || a[x][y] > 100 || z == 0);
		}
        printf("\n");
    }
	printf("%s", KUNING);
	printf("Matriks B:\n");
	printf("%s", NORMAL);
	for(x = 0; x < n; ++x){
		printf("[ ");
        for(y = 0; y < s; ++y){
            printf("a(%2d, %2d) ", x + 1, y + 1);
        }
        printf("]\n");
    }
    printf("%s", KUNING);
	printf("\nMasukkan isi matriks B:\n");
	printf("%s", NORMAL);
    for(x = 0; x < n; ++x){
        for(y = 0; y < s; ++y){
            do{
				printf("Masukkan isi matriks b(%2d, %2d)\t: ", x + 1, y + 1);
				z = scanf("%d", &b[x][y]);
				fflush(stdin);
				if(b[x][y] < -100 || b[x][y] > 100 || z == 0){
					error();
				}
        	}
        	while(b[x][y] < -100 || b[x][y] > 100 || z == 0);
		}
        printf("\n");
    }
	printf("%s", KUNING);
	printf("Matriks A:\n");
	printf("%s", NORMAL);
	for(x = 0; x < m; ++x){
		printf("[ ");
        for(y = 0; y < n; ++y){
            printf("%4d ", a[x][y]);
        }
        printf("]\n");
    }
	printf("%s", KUNING);
	printf("\nMatriks B:\n");
	printf("%s", NORMAL);
	for(x = 0; x < n; ++x){
		printf("[ ");
        for(y = 0; y < s; ++y){
            printf("%4d ", b[x][y]);
        }
        printf("]\n");
    }
	printf("%s", KUNING);
	printf("\nHasil perkalian matriks:\n");
	printf("%s", NORMAL);
	for(x = 0; x < m; ++x){
		printf("[ ");
        for(y = 0; y < s; ++y){
        	for(w = 0; w < n; ++w){
        		c[x][y] += a[x][w] * b[w][y];
			}
            printf("%6d ", c[x][y]);
        }
        printf("]\n");
    }
}
void m_trans(){
	int m, n, x = 0, y, z;
	system("cls");
	printf("%s", KUNING);
	printf("\n");
	printf("\t\t\t\t\t\t      4. Transpos\n");
	printf("\t\t\t\t\t\t      ------------\n\n");
	printf("%s", NORMAL);
	printf("Masukkan jumlah baris dan kolom matriks yang ingin digunakan. Ikutilah bentuk berikut sebagai acuan:\n\n");
	printf("%s", BIRU);
	printf("[ a(1, 1) a(1, 2)   ...   a(1, n) ]\n");
	printf("[ a(2, 1) a(2, 2)   ...   a(2, n) ]\n");
	printf("[   ...     ...     ...     ...   ]\n");
	printf("[ a(m, 1) a(m, 2)   ...   a(m, n) ]\n\n");
	printf("%s", NORMAL);
	printf("Catatan: untuk saat ini, aplikasi hanya dapat menghitung transpos dari matriks dengan ukuran maksimal 10 x 10, dan\n");
	printf("dengan nilai elemen matriks dari -100 hingga 100. Silahkan melihat bantuan pada menu utama untuk petunjuk lebih\n");
	printf("lanjut mengenai aplikasi.\n\n");
	do{
		printf("Masukkan jumlah baris (<= 10)\t: ");
		scanf("%d", &m);
		fflush(stdin);
		if(m < 1 || m > 10){
			error();
		}
	}
	while(m < 1 || m > 10);
	do{
		printf("Masukkan jumlah kolom (<= 10)\t: ");
		scanf("%d", &n);
		fflush(stdin);
		if(n < 1 || n > 10){
			error();
		}
	}
	while(n < 1 || n > 10);
	int a[m][n], b[m][n];
	memset(a, 0, sizeof(a[0][0]) * m * n);
	memset(b, 0, sizeof(b[0][0]) * m * n);
	printf("%s", KUNING);
	printf("\nMatriks:\n");
	printf("%s", NORMAL);
	for(x; x < m; ++x){
		printf("[ ");
        for(y = 0; y < n; ++y){
            printf("a(%2d, %2d) ", x + 1, y + 1);
        }
        printf("]\n");
    }
    printf("%s", KUNING);
	printf("\nMasukkan isi matriks: \n");
	printf("%s", NORMAL);
    for(x = 0; x < m; ++x){
        for(y = 0; y < n; ++y){
            do{
				printf("Masukkan isi matriks a(%2d, %2d)\t: ", x + 1, y + 1);
				z = scanf("%d", &a[x][y]);
				fflush(stdin);
				if(a[x][y] < -100 || a[x][y] > 100 || z == 0){
					error();
				}
        	}
        	while(a[x][y] < -100 || a[x][y] > 100 || z == 0);
		}
        printf("\n");
    }
	printf("%s", KUNING);
	printf("Matriks awal:\n");
	printf("%s", NORMAL);
	for(x = 0; x < m; ++x){
		printf("[ ");
        for(y = 0; y < n; ++y){
            printf("%4d ", a[x][y]);
        }
        printf("]\n");
    }
	printf("\n");
	printf("%s", KUNING);
	printf("\nTranspos matriks:\n");
	printf("%s", NORMAL);
	for(x = 0; x < n; ++x){
		printf("[ ");
        for(y = 0; y < m; ++y){
        	b[x][y] = a[y][x];
            printf("%4d ", b[x][y]);
        }
        printf("]\n");
    }
}
void m_det(){
	int a, b, c, d, e, f, m, x = 0, y = 0, z;
	system("cls");
	printf("%s", KUNING);
	printf("\n");
	printf("\t\t\t\t\t\t     5. Determinan\n");
	printf("\t\t\t\t\t\t     --------------\n\n");
	printf("%s", NORMAL);
	printf("Masukkan jumlah baris dan kolom matriks yang ingin digunakan. Ikutilah bentuk berikut sebagai acuan:\n\n");
	printf("%s", BIRU);
	printf("[ a(1, 1) a(1, 2)   ...   a(1, n) ]\n");
	printf("[ a(2, 1) a(2, 2)   ...   a(2, n) ]\n");
	printf("[   ...     ...     ...     ...   ]\n");
	printf("[ a(m, 1) a(m, 2)   ...   a(m, n) ]\n\n");
	printf("%s", NORMAL);
	printf("Catatan: untuk saat ini, aplikasi hanya dapat menghitung determinan dari matriks dengan ukuran maksimal 3 x 3, dan\n");
	printf("dengan nilai elemen matriks dari -100 hingga 100. Silahkan melihat bantuan pada menu utama untuk petunjuk lebih lanjut\n");
	printf("mengenai aplikasi.\n\n");
	do{
		printf("Masukkan jumlah baris dan kolom (<= 10)\t: ");
		scanf("%d", &m);
		fflush(stdin);
		if(m < 1 || m > 3){
			error();
		}
	}
	while(m < 1 || m > 3);
	int array[m][m];
	memset(array, 0, sizeof(array[0][0]) * m * m);
	printf("%s", KUNING);
	printf("\nMatriks:\n");
	printf("%s", NORMAL);
	for(x = 0; x < m; ++x){
		printf("[ ");
        for(y = 0; y < m; ++y){
            printf("a(%d, %d) ", x + 1, y + 1);
        }
        printf("]\n");
    }
    printf("%s", KUNING);
	printf("\nMasukkan isi matriks: \n");
	printf("%s", NORMAL);
    for(x = 0; x < m; ++x){
        for(y = 0; y < m; ++y){
            do{
				printf("Masukkan isi matriks a(%d, %d)\t\t: ", x + 1, y + 1);
				z = scanf("%d", &array[x][y]);
				fflush(stdin);
				if(array[x][y] < -100 || array[x][y] > 100 || z == 0){
					error();
				}
        	}
        	while(array[x][y] < -100 || array[x][y] > 100 || z == 0);
		}
        printf("\n");
    }
	printf("%s", KUNING);
	printf("Matriks awal:\n");
	printf("%s", NORMAL);
	for(x = 0; x < m; ++x){
		printf("[ ");
        for(y = 0; y < m; ++y){
            printf("%4d ", array[x][y]);
        }
        printf("]\n");
    }
	printf("%s", KUNING);
	printf("\nDeterminan matriks:\n");
	printf("%s", NORMAL);
	if(m == 1){
		printf("= %d\n", array[0][0]);
	}
	else if(m == 2){
		a = array[0][0] * array[1][1];
		b = array[0][1] * array[1][0];
		printf("= %d\n", a - b);
	}
	else{
		a = array[0][0] * array[1][1] * array[2][2];
    	b = array[0][1] * array[1][2] * array[2][0];
    	c = array[0][2] * array[1][0] * array[2][1];
   		d = array[0][2] * array[1][1] * array[2][0];
    	e = array[0][1] * array[1][0] * array[2][2];
    	f = array[0][0] * array[1][2] * array[2][1];
		printf("= %d\n", a + b + c - d - e - f);
	}
}

