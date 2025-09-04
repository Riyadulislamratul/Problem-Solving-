#include<stdio.h>
int main()
{
    float a,tax,tex;
    scanf("%f",&a);
    if(a<=2000)
    {
        printf("Isento\n");
    }
    else if(a>2000 && a<=3000)
    {
        printf("R$ %.2f\n",(a-2000.00)*0.08);
    }
    else if(a>3000 && a<=4500)
    {
       printf("R$ %.2f\n",(a-3000.00)*0.18+1000.00*0.08);
    }
    else if(a>4500)
    {
        printf("R$ %.2f\n",(a-4500.00)*0.28+1500.00*0.18+1000.00*0.08);
    }
    return 0;
}
