#include <stdio.h>

int main()
{
    double R,pi = 3.14159,radius;
    scanf("%lf",&R);
    radius = (4.0/3) * pi * (R*R*R);
    printf("VOLUME = %.3lf\n",radius);
    return 0;
}
