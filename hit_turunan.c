#define BIRU "\033[1;34m"
#define KUNING "\033[1;33m"
#define MERAH "\033[1;31m"
#define NORMAL "\033[0m"
struct node{
	double koef;
	int pangkat;
	struct node* next;
};
struct node *head = NULL;
struct node *tail = NULL;
struct node *temp = NULL;
void input(double, int, int), display(), diff(), grafikT(), error();
void hit_turunan(int pass, int tingkat){
	int choice, key, pangkat, x = 0, z;
	double koef;
	while(1){
		printf("\n");
		do{
			printf("Masukkan nilai koefisien\t\t\t\t: ");
			z = scanf("%lf", &koef);
			fflush(stdin);
			if(z == 0){
				error();
			}
		}
		while(z == 0);
		do{
			printf("Masukkan nilai pangkat\t\t\t\t\t: ");
			z = scanf("%d", &pangkat);
			fflush(stdin);
			if(z == 0){
				error();
			}
		}
		while(z == 0);
		input(koef, pass, pangkat);
		display();
		printf("%s", BIRU);
		printf("\nTekan tombol Enter untuk melanjutkan input persamaan, atau Backspace untuk mengakhiri input.");
		printf("%s", NORMAL);
		key = getch();
		printf("\n");
		if(key == 8){
			break;
		}
	}
	printf("%s", KUNING);
	printf("\nPersamaan awal:");
	printf("%s", NORMAL);
	display();
	grafikT();
	for(x; x < tingkat; ++x){
		diff();
		printf("%s", KUNING);
		printf("\nPersamaan turunan ke-%d:", x + 1);
		printf("%s", NORMAL);
		display();
		grafikT();
	}
	pass = 1;
}
void input(double koef, int pass, int pangkat){
	if(pass == 1){
		head->koef = 0;
		head->pangkat = 0;
		head->next = 0;
		tail->koef = 0;
		tail->pangkat = 0;
		tail->next = 0;
		temp->koef = 0;
		temp->pangkat = 0;
		temp->next = 0;
	}
	if(koef != 0){
		if(tail == NULL){
			tail = (struct node*)malloc(sizeof(struct node));
			tail->koef = koef;
			tail->pangkat = pangkat;
			tail->next = NULL;
			head = tail;
		}
		else{
			temp = (struct node*)malloc(sizeof(struct node));
			temp->koef = koef;
			temp->pangkat = pangkat;
			tail->next = temp;
			tail = temp;
		}
	}
}
void display(){
	struct node *print = head;
	int pass = 0;
	printf("\n= ");
	for(print; print != tail; print = print->next){
		if(print->koef == 0){
			continue;
		}
		if(print->koef != 1){
			printf("(%.3f)", print->koef);
		}
		else if(print->koef == 1 && print->pangkat == 0){
			printf("1");
		}
		if(print->koef != 0 && print->pangkat != 0){
			printf("x");
			if(print->pangkat != 1){
				printf("^(%d)", print->pangkat);
			}
		}
		if(print->next->koef != 0 || print->next->next->koef != 0){
			printf(" + ");
		}
		if(print->koef != 0){
			pass = 1;
		}
	}
	if(print == tail){
		if(print->koef != 0){
			if(print->koef != 1){
				printf("(%.3f)", print->koef);
			}
			else if(print->koef == 1 && print->pangkat == 0){
				printf("1");
			}
		}
		if(print->koef != 0 && print->pangkat != 0){
			printf("x");
			if(print->pangkat != 1){
				printf("^(%d)", print->pangkat);
			}
		}
		if(print->koef != 0){
			pass = 1;
		}
	}
	if(pass == 0){
		printf("0");
	}
	printf("\n");
}
void diff(){
	struct node *diff = head;
	while(diff != tail){
		diff->koef *= diff->pangkat;
		--diff->pangkat;
		diff = diff->next;
	}
	if(diff == tail){
		diff->koef *= diff->pangkat;
		--diff->pangkat;
	}
}
void grafikT(){
	struct node *graph = head;
	double x = -10, y;
	FILE *xy = fopen("xy.txt", "w");
	for(x; x <= 10; x += 0.1){
		y = 0;
		graph = head;
		while(graph != tail){
			y += graph->koef * pow(x, graph->pangkat);
			graph = graph->next;
		}
		if(graph == tail){
			y += graph->koef * pow(x, graph->pangkat);
		}
		fprintf(xy, "%f %f\n", x, y);
	}
	fclose(xy);
	printf("%s", BIRU);
	printf("\nTekan tombol apapun untuk menampilkan grafik persamaan...\n");
	printf("%s", NORMAL);
	getch();
	system("gnuplot.lnk -p -e \"set term wxt title 'Symbolab KW 1.0'\" -e \"set grid\" -e \"set yrange [-10:50]\" -e \"plot '..\\..\\xy.txt' with lines notitle\"");
}

