#include <stdio.h>

int main(){

    int id,hours;
    float rate,salary;

    scanf("%d%d%f",&id,&hours,&rate);

    salary = hours * rate;

    printf("NUMBER = %d\nSALARY = U$ %.2f\n",id,salary);


    return 0;
}