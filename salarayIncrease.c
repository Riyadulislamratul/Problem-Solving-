#include<stdio.h>
int main()
{
    float a,salary,total,increase;
    scanf("%f",&a);
    if(a>=0 && a<401)
    {
        salary=(a*0.15);
        total=a+salary;
        printf("Novo salario: %.2f\n", total);
        printf("Reajuste ganho: %.2f\n", salary);
        printf("Em percentual: 15 %%\n");
    }
     if(a>400 && a<=800)
    {
        salary=(a*0.12);
        total=a+salary;
        printf("Novo salario: %.2f\n", total);
        printf("Reajuste ganho: %.2f\n", salary);
        printf("Em percentual: 12 %%\n");
    }
     if(a>800 && a<=1200)
    {
        salary=(a*0.1);
        total=a+salary;
        printf("Novo salario: %.2f\n", total);
        printf("Reajuste ganho: %.2f\n", salary);
        printf("Em percentual: 10 %%\n");
    }
     if(a>1200 && a<=2000)
    {
        salary=(a*0.07);
        total=a+salary;
        printf("Novo salario: %.2f\n", total);
        printf("Reajuste ganho: %.2f\n", salary);
        printf("Em percentual: 7 %%\n");
    }
    if(a>2000)
    {
        salary=(a*0.04);
        total=a+salary;
        printf("Novo salario: %.2f\n", total);
        printf("Reajuste ganho: %.2f\n", salary);
        printf("Em percentual: 4 %%\n");
   }
    return 0;
}
