#include <stdio.h>

int main() {
    int a, b, c, d;
    printf("masukkan angka :");
    scanf("%d", &c);
    for(a = c; a >= 1; a--){
        for(d = 1; d <= c - a; d++){
            printf(" ");
        }
        for(b = 1; b <= a; b++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
