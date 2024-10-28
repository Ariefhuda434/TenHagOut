/************************
 *   file : coba.c      *
 *   form nama umur     *
 ************************/
#include <stdio.h>

int main(){
    char nama[50],umur[50];
  

    printf("masukan nama: ");
    fgets(nama, sizeof(nama),stdin);

    printf("masukan umur: ");
    fgets(umur, sizeof(umur),stdin);

    printf("All right data masuk GOOD JOB!!\n");
    printf("Nama kamu %s",nama);
    printf("Umur kamu %s tahun",umur);

    return 0;
}

