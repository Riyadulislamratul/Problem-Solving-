#include<stdio.h>
int main()
{
    int a,b,c,x,y,z;
    scanf("%d%d%d",&a,&b,&c);
   if(a<b && a<c)
   {
       x=a;
       if(b<c)
       {
          y=b;
          z=c;
       }
       else{
        y=c;
        z=b;
       }
   }
   else if(b<a && b<c)
   {
       x=b;
       if(a<c)
       {
          y=a;
          z=c;
       }
       else{
        y=c;
        z=a;
       }
   }
   else if(c<a && c<b)
   {
       x=c;
       if(b<a)
       {
          y=b;
          z=a;
       }
       else{
        y=a;
        z=b;
       }
   }
   printf("%d\n",x);
   printf("%d\n",y);
   printf("%d\n\n",z);

   printf("%d\n",a);
   printf("%d\n",b);
   printf("%d\n",c);

    return 0;
}

