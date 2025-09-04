#include <stdio.h>

int main()
{
    float pi = 3.14159,R,A,cir;
    scanf("%f", &R);
    A = pi * (R * R);
    cir = 2 * pi * R;
    printf("Area = %.4f\nCircumference = %.4f", A,cir);
    return 0;
}

