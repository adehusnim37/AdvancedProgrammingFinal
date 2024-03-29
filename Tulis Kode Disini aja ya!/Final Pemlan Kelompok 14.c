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
    if(brg[i].kategori_barang==1){
        printf("\n Kategori Barang : Makanan");
    }
    else if(brg[i].kategori_barang==2){
        printf("\n Kategori Barang : Minuman");
    }
    else if(brg[i].kategori_barang==3){
        printf("\n Kategori Barang : ATK");
    }
    else if(brg[i].kategori_barang==4){
        printf("\n Kategori Barang : Elektronik");
    }
    else if(brg[i].kategori_barang==5){
        printf("\n Kategori Barang : Pakaian");
    }
    else{
        printf("\n Kategori Barang : EROR");
    }
    printf("\n Harga Barang    : %f",brg[i].harga);
    printf("\n No Rak Barang   : %d",brg[i].rak);
    printf("\n Jumlah Barang   : %d\n",brg[i].jumlah_barang);
}

void viewsort(struct barang brg[10],int i){
    for (int j=0; j<i; j++){
        printf("\n Id Barang       : %d",brg[j].id);
        printf("\n Nama Barang     : %s",brg[j].nama_barang);
        if(brg[j].kategori_barang==1){
            printf("\n Kategori Barang : Makanan");
        }
        else if(brg[j].kategori_barang==2){
            printf("\n Kategori Barang : Minuman");
        }
        else if(brg[j].kategori_barang==3){
            printf("\n Kategori Barang : ATK");
        }
        else if(brg[j].kategori_barang==4){
            printf("\n Kategori Barang : Elektronik");
        }
        else if(brg[j].kategori_barang==5){
            printf("\n Kategori Barang : Pakaian");
        }
        else{
            printf("\n Kategori Barang : EROR");
        }
        printf("\n Harga Barang    : %f",brg[j].harga);
        printf("\n No Rak Barang   : %d",brg[j].rak);
        printf("\n Jumlah Barang   : %d\n",brg[j].jumlah_barang);
    }
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
    //searchid(brg,n);
}

void sortnama(struct barang brg[10],int n){//sort nama(insertion)
    struct barang temp;
    int i,j;
    for(i=0; i<n; i++){
        temp=brg[i];
        j=i-1;
        while(strcmp(temp.nama_barang,brg[j].nama_barang )<0&& j>=0){
            brg[j+1]=brg[j];
            j=j-1;
        }
        brg[j+1]=temp;
    }
}


void sortkategori(struct barang brg[10],int z){
    struct barang temp;
    int i,j;
    for (int i = 0; i<z; ++i) {
        temp=brg[i];
        j=i-1;
        while (temp.kategori_barang<brg[j].kategori_barang && j>=0){
            brg[j+1]=brg[j];
            j=j-1;
        }
        brg[j+1]=temp;
    }
}

void sortharga(struct barang brg[10],int x){
    struct barang temp;
    int i,j;
    for (int i = 0; i<x ; ++i) {
        temp=brg[i];
        j=i-1;
        while (temp.harga<brg[j].harga && j>=0){
            brg[j+1]=brg[j];
            j=j-1;
        }
        brg[j+1]=temp;
    }
}

void sortrak(struct barang brg[10],int n){//sort nama(insertion)
    struct barang temp;
    int i,j;
    for(i=0; i<n; i++){
        temp=brg[i];
        j=i-1;
        while(temp.rak<brg[j].rak && j>=0){
            brg[j+1]=brg[j];
            j=j-1;
        }
        brg[j+1]=temp;
    }
}

void sortjmlbrgasc(struct barang brg[10],int y){//sort jumlah ascending
    struct barang temp;
    int i,j;
    for (i = 0; i < y ; i++) {
        temp=brg[i];
        j=i-1;
        while (temp.jumlah_barang < brg[j].jumlah_barang && j>=0){
            brg[j+1]=brg[j];
            j=j-1;
        }
        brg[j+1]=temp;
    }
}

void sortjmlbrgdsc(struct barang brg[10],int y){//sort jumlah descending
    struct barang temp;
    int i,j;
    for (i = 0; i < y ; i++) {
        temp=brg[i];
        j=i-1;
        while (temp.jumlah_barang > brg[j].jumlah_barang && j>=0){
            brg[j+1]=brg[j];
            j=j-1;
        }
        brg[j+1]=temp;
    }
}

void searchnama(struct barang brg[10], int n){
    struct barang banding;
    int j,flag=0;
    printf("Masukkan Nama Yang Ingin Dicari : ");
    scanf("%s",&banding.nama_barang);
    for (int i = 0; i < n ; ++i){
        if (strcmp(banding.nama_barang,brg[i].nama_barang)==0) {
            j=i;
            flag=1;
        }
    }
    if(flag!=1){
        printf("Data Tidak Ditemukan");
    }
    else{
        view(brg,j);
    }
}

int searchid(struct barang brg[10],int n){//search id(interpolation)
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
            searchid(brg,n);
            getch ();
            break;
        case 2 : //nama barang
            sortnama(brg,n);
            searchnama(brg,n);
            getch ();
            break;
        default :
            printf ("Error");
    }
}

int update(struct barang brg[10],int n){
    printf("- Update Harga Barang        : ");//input harga
    scanf("%f",&brg[n].harga);
    printf("- Update No Rak Untuk Barang : ");// inout rak
    scanf("%d",&brg[n].rak);
    printf("- Update Jumlah Barang       : ");//input jumlah
    scanf("%d",&brg[n].jumlah_barang);
}

int searchupdt(struct barang brg[10],int n){//search update(interpolation)
    int car,d;
    printf("Masukkan Id Yang Ingin Update : ");
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
        update(brg,d);
        view(brg,d);
    }
}

int main(){
    struct barang brg[10];
    int pil=0;
    int i=0;
    while (pil != 5) {
        printf ("=====================================");
        printf ("\nAplikasi Kasir\n");
        printf ("=====================================\n");
        printf ("1.Input \n2.Update \n3.Search & View \n4.Sort & View\n5.Exit\n");
        printf ("Pilih : ");
        scanf ("%d", &pil);
        printf ("=====================================\n");

        switch (pil) {
            case 1 :
                input(brg,i);
                i++;
                break;
            case 2 :
                sortid(brg,i);
                searchupdt(brg,i);
                break;
            case 3 :
                sortsearch(brg,i);
                break;
            case 4 :
                printf ("=====================================");
                printf ("\nMenampilkan Data Urut Berdasarkan\n");
                printf ("=====================================\n");
                printf ("1.Id \n2.Nama \n3.Kategori \n4.Harga \n5.Rak \n6.jumlah\n");
                printf ("Pilih : ");
                scanf ("%d", &pil);

                switch (pil) {
                    case 1 :
                        sortid(brg,i);
                        printf("\nUrut Berdasarkan Id\n");
                        viewsort(brg,i);
                        break;
                    case 2 :
                        sortnama(brg,i);
                        printf("\nUrut Berdasarkan Nama\n");
                        viewsort(brg,i);
                        break;
                    case 3 :
                        sortkategori(brg,i);
                        printf("\nUrut Berdasarkan Kategori\n");
                        viewsort(brg,i);
                        break;
                    case 4 :
                        sortharga(brg,i);
                        printf("\nUrut Berdasarkan Harga\n");
                        viewsort(brg,i);
                        break;
                    case 5 :
                        sortrak(brg,i);
                        printf("\nUrut Berdasarkan No Rak\n");
                        viewsort(brg,i);
                        break;
                    case 6 :
                        printf ("=====================================");
                        printf ("\nMenampilkan Jumlah Urut Berdasarkan\n");
                        printf ("=====================================\n");
                        printf ("1.Terkecil-Terbesar \n2.Terbesar-Terkecil\n");
                        printf ("Pilih : ");
                        scanf ("%d", &pil);

                        switch (pil) {
                            case 1 :
                                sortjmlbrgasc(brg,i);
                                printf("\nUrut Berdasarkan Jumlah Barang\n");
                                viewsort(brg,i);
                                break;
                            case 2 :
                                sortjmlbrgdsc(brg,i);
                                printf("\nUrut Berdasarkan Jumlah Barang\n");
                                viewsort(brg,i);
                                break;
                        }
                        break;
                        default :
                        	printf("Menu Error");
                }
            break;
            case 5 :
            	pil=5;
            	break;
            default :
                printf ("Menu Error");
        }
    }
}
