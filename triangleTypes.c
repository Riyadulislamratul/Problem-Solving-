#include<stdio.h>
int main()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a>=(b+c))
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if(a*a == b*b+c*c)
        printf("TRIANGULO RETANGULO\n");
    return 0;
}
