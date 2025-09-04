#include <stdio.h>

int main() {
    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);


    int greatest = A;
    if (B > greatest) {
        greatest = B;
    }
    if (C > greatest) {
        greatest = C;
    }
    printf("%d eh o maior\n", greatest);

    return 0;
}
