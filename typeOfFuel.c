#include<stdio.h>
int main()
{
    int a,Alcohol=0,Gasoline=0,Diesel=0;
    while(1)
    {
    scanf("%d",&a);
    if(a==1)
    {
        Alcohol++;
    }
    else if(a==2)
    {
        Gasoline++;
    }
   else if(a==3)
    {
        Diesel++;
    }
   else if(a==4)
    {
        break;
    }
    else{
        continue;
    }
  }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",Alcohol);
    printf("Gasolina: %d\n",Gasoline);
    printf("Diesel: %d\n",Diesel);

    return 0;
}
