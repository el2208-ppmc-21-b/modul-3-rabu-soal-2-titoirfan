/** EL2208 Praktikum Pemecahan Masalah dengan C 2019/2020
*   Modul               : 3
*   Nama (NIM)          : Danu Ihza Pamungkas (13218022)
*   Nama File           : M3.c
*   Deskripsi           : Program search engine sederhana.
*/

#include <stdio.h> 
#include <string.h> 

void bubble_sort(char list[], int n){
    int c, d, t;

    for (c = 0 ; c < n - 1; c++) {
        for (d = 0 ; d < n - c - 1; d++) {
            if (list[d] > list[d+1]) {
                /* Swapping */
                t         = list[d];
                list[d]   = list[d+1];
                list[d+1] = t;
            }
        }
    }
}

int main(){                               //ganti spasi dengan underline
    char cowo[20], cewe[20];           //panjang maksimal 20 huruf 

    // char *cowo, *cewe;
    int count=0;                           
    printf("Masukkan nama cowo: ");
    scanf("%s", &cowo);
    printf("Masukkan nama cewe: ");
    scanf("%s", &cewe);

    bubble_sort(cowo, strlen(cowo));
    bubble_sort(cewe, strlen(cewe));
    
    int shortest=strlen(cowo);
    if(shortest>strlen(cewe)){
        shortest=strlen(cewe);
    }
    
    for(int i=0; i<shortest; i++){
        if(cowo[i]==cewe[i]){
            count++;
        }
    }

    if(count>0){
        printf("\nKecocokan: %d Persen", count*100/shortest);
    } else{
        printf("\nMaaf Anda berdua tidak cocok.");
    }
}
