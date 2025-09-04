#include <stdio.h>

int main()
{
    char name;
    double total_sell,salary,total;
    scanf("%s%lf%lf",&name,&salary,&total_sell);
    total = (total_sell * 0.15) + salary;
    printf("TOTAL = R$ %.2f\n",total);
    return 0;
}

