#include <stdio.h>
int main (){
    int a, b, c;
    printf("Masukkan angka :");
    scanf("%d", &c);
    for (a = 1; a <= c; a++){
        for(b = 1; b <= c; b++){
            printf("*");
        }
        printf("\n");
    }
}