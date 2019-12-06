#include <stdio.h>
#include <conio.h>
#include <string.h>

int n;

int id[10]; //array id
char nabar[10][100]; //array nama barang
int katbar[10]; //array kategory barang
float harga[10]; //array harga
char narak[5][1]={"A","B","C","D","E"};//inisialisasi nama rak
int rak[10][5]; //array rak
int jumbar[10]; //array jumlah barang
int loginusr;
char user,pass; // create user
char userlog,passlog; //login user

void login(){
	printf ("Selamat datang di UPN Store Retail");
	printf ("==================================");
	printf ("1. Create User Admin.");
	printf ("2. Login");
	printf ("Masukkan Pilihan anda : ");
	scanf  ("%d", &loginusr);
	if (login == 1){
		printf ("Masukkan Username anda : ");
		scanf  ("%s", &user);
		printf ("Masukkan Password anda : ");
		scanf  ("%s", &pass);
	}
	else if (login == 2){
		printf ("Masukkan Username anda : ");
		scanf  ("%s", &userlog);
		printf ("Masukkan Password anda : ");
		scanf  ("%s", &passlog);
		if (userlog = user && passlog = pass){
			printf ("Login Telah berhasil.");
		}
		else {
			printf ("Username dan password yang anda masukkan salah.");
		}
	}
}
void input(){
    int d=0;
    n=n++;
    printf("\n%d",n);
    printf("- Masukkan Id Barang        : ");
    scanf("%d",&id[n]);
    printf("- Masukkan Nama Barang     : ");
    scanf("%s",&nabar[n][100]);
    fflush(stdin);
    printf("- Masukkan Kategori Barang \n  1.Makanan	3.ATK		5.Pakaian \n  2.Minuman	4.Elektronik \n  Pilih : ");
    scanf("%d",&katbar[n]);
    printf("\n%d",katbar[n]);
    d=katbar[n];
    printf("- Masukkan Harga Barang    : ");
    scanf("%f",&harga[n]);
    printf("\n%d",d);
    printf("\n%d",d-2);
    printf("\n%c",narak[d-2][1]);
    printf("- Masukkan Barang Pada Rak %c \nPada Lantai : ",narak[d-1][1]);
    scanf("%d",&rak[n][d]);
    printf("- Masukkan Jumlah Barang   : ");
    scanf("%d",&jumbar[n]);
}

void update(){

}

void search(){

}

void view(){
    int d=0;

    printf("\n- Id Barang       : %d",id[n]);
    printf("\n- Nama Barang     : %s",nabar[n][100]);
    printf("\n- Kategori Barang : %d",katbar[n]);
    d=katbar[n]-1;
    printf("\n- Harga Barang    : %d",harga[n]);
    printf("\n- Posisi Barang   : Rak-%c%d",narak[d][1],rak[n][d]);
    printf("\n- Jumlah Barang   : %d",jumbar[n]);
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

        if(pil==1){
            system("cls");
            login();
            input();
        }
        else if(pil==2){
            system("cls");
            update();
            getch();
        }
        else if(pil==3){
            system("cls");
            search();
            getch();
        }
        else{
            system("cls");
            view();
            getch();
        }
    }
}

