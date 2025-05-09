#include<stdio.h>
int main ()
{
    int a[100],i,j,N,temp;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N-1;i++)
    {
        for(j=0;j<N-i-1;j++)
        {
           temp=0;
            if (a[j]>a[j+1])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
           }
        }
  printf("%d ", a[i]);
    return 0;
}
