#include <stdio.h>
 
int main() {
 
    int dayI,year,month,day;
    scanf("%d",&dayI);

    year = dayI /365;
    month = (dayI%365)/30;
    day = (dayI%365)%30;


    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",year,month,day);
    
    return 0;
}