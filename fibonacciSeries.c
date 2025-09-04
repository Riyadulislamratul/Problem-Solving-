#include<stdio.h>
int main()
{
int i,n, f0=0, f1=1, f2;
printf("Enter the value of n: ");
scanf("%d", &n );
for(i=1; i<=n; i++ )
{
printf("%d\n",f0);
f2=f0+f1;
f0=f1;
f1=f2;
}
return 0;
}
