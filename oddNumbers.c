#include<stdio.h>
int main()
{
    int a,i=0;
    scanf("%d",&a);
    if(a>=1 && a<=1000)
    {
        for(i=1;i<=a;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);

        }
    }
    }
    return 0;
}
