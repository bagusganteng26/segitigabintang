#include <stdio.h>

int main() {
    int a, b;
    printf("Masukkan : ");
    scanf("%d", &a);
    for(b = 1; b <= a; b++){
        printf("*");
    }

    return 0;
}
