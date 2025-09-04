#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,perimeter,Area;
    scanf("%f%f%f",&a,&b,&c);
    perimeter = a+b+c;
    s=perimeter/2;
    Area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area = %.4f\nPerimeter = %.4f",Area,perimeter);
    return 0;
}
