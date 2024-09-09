#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int angka;
    scanf("%d", &angka);
    if (angka % 2 !=0){
        printf("Ganjil"); 
    } else {
        printf("Genap");
    }
    return 0;
}