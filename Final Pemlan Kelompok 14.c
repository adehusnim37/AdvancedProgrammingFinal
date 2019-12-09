#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

struct barang{
	int id; //array id
	char nama_barang[100]; //array nama barang
	int kategori_barang; //array kategory barang
	float harga; //array harga
	int rak; //array rak
	int jumlah_barang; //array jumlah barang
};

void input(struct barang brg[10],int n){
	printf("- Masukkan Id Barang           : ");//input id
	scanf("%d",&brg[n].id);
	printf("- Masukkan Nama Barang         : ");//input nama
	scanf("%s",&brg[n].nama_barang);
	printf("- Masukkan Kategori Barang \n  1.Makanan	3.ATK		5.Pakaian \n  2.Minuman	4.Elektronik \n  Pilih : ");//input kategori
	scanf("%d",&brg[n].kategori_barang);
	printf("- Masukkan Harga Barang        : ");//input harga
	scanf("%f",&brg[n].harga);
	printf("- Masukkan No Rak Untuk Barang : ");// inout rak
	scanf("%d",&brg[n].rak);
	printf("- Masukkan Jumlah Barang       : ");//input jumlah
	scanf("%d",&brg[n].jumlah_barang);
	n++;
}

void view(struct barang brg[10],int i){
	printf("\n Id Barang       : %d",brg[i].id);
	printf("\n Nama Barang     : %s",brg[i].nama_barang);
	printf("\n Kategori Barang : %d",brg[i].kategori_barang);
	printf("\n Harga Barang    : %f",brg[i].harga);
	printf("\n No Rak Barang   : %d",brg[i].rak);
	printf("\n Jumlah Barang   : %d\n",brg[i].jumlah_barang);
}

void sortid(struct barang brg[10],int n){//sort id(insertion)
	struct barang temp;
	int i,j;
	for(i=0; i<n; i++){
		temp=brg[i];
		j=i-1;
		while(temp.id<brg[j].id && j>=0){
			brg[j+1]=brg[j];
			j=j-1;
		}
		brg[j+1]=temp;
	}
	searchid(brg,n);	
}

void sortnama(struct barang brg[10],int n){//sort nama(insertion)
	struct barang temp;
	int i,j;
	for(i=0; i<n; i++){
		temp=brg[i];
		j=i-1;
		while(temp.nama_barang<brg[j].nama_barang && j>=0){
			brg[j+1]=brg[j];
			j=j-1;
		}
		brg[j+1]=temp;
	}	
}

void searchid(struct barang brg[10],int n){//search id(interpolation)
	int car,d;
	printf("Masukkan Id Yang Ingin Dicari : ");
	scanf("%d",&car);
	int low=0;
	int high=n-1;
	int flag=-1;
	while( low<=high && car>=brg[low].id  &&  car<=brg[high].id  ){
		d = (car-brg[low].id)/(brg[high].id-brg[low].id)*(high-low)+low;
		if(brg[d].id>car){
			high = d-1;
		} 	
		else if(brg[d].id<car){
			low = d+1;
		}
		else{
			flag=1;
			break;
		}	
	}
	if(flag!=1){
		printf("\nData tidak ditemukan");
	}
	else{
		view(brg,d);
	}
}

void sortsearch(struct barang brg[10],int n) {//menu sort dan search
    int pilss;
    printf ("Cari Barang Berdasarkan");
    printf ("\n1. Id Barang \n2. Nama Barang");
    printf ("\nPilih : ");
    scanf ("%d", &pilss);

    switch (pilss) {
        case 1 : //id barang
        	sortid(brg,n);
            getch ();
            break;
        case 2 : //nama barang
            sortnama(brg,n);
			getch ();
            break;
        default :
            printf ("Eror");
    }
}

main(){
	struct barang brg[10];
	int pil=0;
	int i=0;
	while (pil != 4) {
        printf ("\nAplikasi Kasir\n");
        printf ("=====================================\n");
        printf ("1.Input \n2.Update \n3.Sort & Search \n4.Exit\n");
        printf ("Pilih : ");
        scanf ("%d", &pil);

        switch (pil) {
            case 1 :
                input(brg,i);
                i++;
                break;
            case 2 :
                break;
            case 3 :
            	sortsearch(brg,i);
                break;
            default :
                printf ("Menu Eror");
        }
    }
}
