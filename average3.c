#include<stdio.h>
int main()
{
    float a,b,c,d,e,avg,n;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    avg=(a*2+b*3+c*4+d*1)/10;
    printf("Media: %.1f\n",avg);
    if(avg>=7)
    {
        printf("Aluno aprovado.\n");
    }
    else if(avg<5)
    {
        printf("Aluno reprovado.\n");
    }
    else if(avg>=5 && avg<=6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%f",&e);
        printf("Nota do exame: %.1f\n",e);
        n=(avg+e)/2;
        if(n>=5)
        {
           printf("Aluno aprovado.\n");
        }
        else if(n<=4.9)
        {
             printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n",n);
    }
    return 0;
}
