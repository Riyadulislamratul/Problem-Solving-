#include <stdio.h>

int main()
{
        float x,average,summation=0;
        int i,sum=0;
        for(i=0;i<6;i++)
        {
            scanf("%f",&x);

            if (x>0)
            {
               sum=sum+1;

                summation=summation+x;
            }
        }
        average=summation/sum;

 printf("%d valores positivos\n",sum);
 printf("%.1f\n",average);
    return 0;
}
