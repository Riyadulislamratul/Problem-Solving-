#include<stdio.h>
int main()
{
    int a,b,temp,*ptr1,*ptr2;
    printf("Enter value of a & b:");
    scanf("%d%d",&a,&b);
    ptr1=&a;
    ptr2=&b;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    printf("After swapping: A = %d, b =%d",*ptr1,*ptr2);
    return 0;
}
