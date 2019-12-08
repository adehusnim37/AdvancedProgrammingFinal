#include <stdio.h>
#include <conio.h>
#include <string.h>

int n=0;
int i, a;//untuk looping
int id[10]; //array id
char nabar[10][100]; //array nama barang
int katbar[10]; //array kategory barang
float harga[10]; //array harga
int rak[10][5]; //array rak
int jumbar[10]; //array jumlah barang

void input(){
	printf("\n%d",n);
	printf("- Masukkan Id Barang           : ");
	scanf("%d",&id[n]);
	printf("- Masukkan Nama Barang         : ");
	scanf("%s",&nabar[n][100]);
	fflush(stdin);
	printf("- Masukkan Kategori Barang \n  1.Makanan	3.ATK		5.Pakaian \n  2.Minuman	4.Elektronik \n  Pilih : ");
	scanf("%d",&katbar[n]);
	printf("\n%d",katbar[n]);
	printf("- Masukkan Harga Barang        : ");
	scanf("%f",&harga[n]);
	printf("- Masukkan No Rak Untuk Barang : ";
	scanf("%d",&rak[n]);
	printf("- Masukkan Jumlah Barang       : ");
	scanf("%d",&jumbar[n]);
	n++;
}

void update(){
	int scr;
	printf("\nUbah Data Barang\n");
	printf("Masukkan Id Barang Yang Ingin Di Ubah : ");
	printf("%d",&scr);
	for(i=0;i<n;i++){
		if(id[i]==scr){		
		}
	}
}

void search(){
	printf("")
}

void sortview(){
	int pilsw, t;
	printf("Pilih Menampilkan Data Urut(asscending) Berdasarkan");
	printf("1. Id Barang \n2. Nama \n3. Kategori \n4. Harga \n5. No Rak \n6. Jumlah Barang");
	printf("Pilih : ");
	scanf("%d",&pilsw);
	
	switch (pilsw){
			case 1 : //id barang
				system("cls");
				for(i=0; i<n; i++){
					for(a=i ; a>0 && id[a] < id[a-1] ; a--){
						t = vid[a-1];//swap id
						vid[a-1] = id[a];
						id[a] = t;
						t = vnabar[a-1];//swap nama
						vnabar[a-1] = nabar[a];
						nabar[a] = t;
						t = vkatbar[a-1];//swap kategori
						vkatbar[a-1] = katbar[a];
						katbar[a] = t;
						t = vharga[a-1];//swap harga
						vharga[a-1] = harga[a];
						harga[a] = t;
						t = vrak[a-1];//swap rak
						vrak[a-1] = rak[a];
						rak[a] = t;
						t = vjumlah[a-1];//swap jumlah
						vjumlah[a-1] = jumlah[a];
						jumlah[a] = t;
					}
				}
				for(i=0; i<n; i++){
					view()	
				}
				getch();
				break;
			case 2 : //nama barang
				system("cls");
				getch();
				break;
			case 3 : //kategori
				system("cls");
				getch();
				break;
			case 4 : //harga
				system("cls");
				getch();
				break;
			case 5 ://no rak
				system("cls");
				getch();
				break;
			case 6 ://jumlah barang
				system("cls");
				getch();
				break;
			default :
				printf("Eror");
		}
}

void view(){
	int no=i+1;
	printf("\n%d. Id Barang       : %d",no,vid[n]);
	printf("\n   Nama Barang     : %s",vnabar[n][100]);
	printf("\n   Kategori Barang : %d",vkatbar[n]);
	printf("\n   Harga Barang    : %d",vharga[n]);
	printf("\n   No Rak Barang   : %d",vrak[n]);
	printf("\n   Jumlah Barang   : %d\n",vjumbar[n]);
}

int main(){
	int y=1, pil;
	while(y==1){
		system("cls");
		printf("\nAplikasi Kasir\n");
		printf("=====================================\n");
		printf("1.Input \n2.Update \n3.Search & View \n4.Sort & View\n");
		printf("Pilih : ");
		scanf("%d",&pil);
		
		switch (pil){
			case 1 :
				system("cls");
				input();
				break;
			case 2 :
				system("cls");
				update();
				getch();
				break;
			case 3 :
				system("cls");
				search();
				getch();
				break;
			case 4 :
				view();
				getch();
				break;
			default :
				printf("Menu Eror");
		}
	}
}
