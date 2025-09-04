#include <stdio.h>
int main()
{
    int i,sum=0,x;
    for(i=0;i<5;i++)
    {
        scanf("%d",&x);
        if (x%2==0)
        {
            sum=sum+1;
        }
    }
    printf("%d valores pares\n",sum);
    return 0;
}

