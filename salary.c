#include <stdio.h>

int main()
{
    int em,hour;
    float money,salary;
    scanf("%d%d",&em,&hour);
    scanf("%f",&money);
    salary = hour * money;
    printf("NUMBER = %d\n",em);
    printf("SALARY = U$ %.2f\n",salary);
    return 0;
}

