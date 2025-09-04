#include<stdio.h>
int main()
{
    int a,b,i,sum=0,summ=0;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&b);
        if(b>=10 && b<=20)
        {
            sum=sum+1;
        }
        else{
            summ=summ+1;
        }
    }
    printf("%d in\n",sum);
    printf("%d out\n",summ);
    return 0;
}
