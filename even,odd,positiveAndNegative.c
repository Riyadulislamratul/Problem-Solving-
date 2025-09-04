#include <stdio.h>
int main()
{
    int i,x,even=0,odd=0,pos=0,neg=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&x);
        if (x%2==0)
        {
            even=even+1;
        }
        if(x%2!=0)
        {
            odd=odd+1;
        }
        if(x>0)
        {
            pos=pos+1;
        }
        if(x<0)
        {
            neg=neg+1;
        }
    }
    printf("%d valor(es) par(es)\n",even);
    printf("%d valor(es) impar(es)\n",odd);
    printf("%d valor(es) positivo(s)\n",pos);
    printf("%d valor(es) negativo(s)\n",neg);

    return 0;
}


