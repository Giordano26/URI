#include <stdio.h>

int main(){

    char name[20];
    float salary,sells,fvalue;

    fgets(name,20,stdin);
    scanf("%f%f",&salary,&sells);

    fvalue = salary + (sells * 15) / 100;

    printf("TOTAL = R$ %.2f\n",fvalue);



    return 0;
}