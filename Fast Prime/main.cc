#include <stdio.h>
#include <stdbool.h>

int is_prime(int n){
    if (n == 1)
        return true;
    int i = 2;
    while(i * i <= n){
        if(n % i == 0){
            return false;
            break;
        }
        i += 1;
    } 
    return true;
}

int main(){
    int number;
    int times;
    scanf("%d",&times);

    for(int k = 0; k < times; k++){
        scanf("%d", &number);
        int prime = is_prime(number);

        if(prime == true){
            printf("Prime\n");
        }else{
            printf("Not Prime\n");
        }
    }

    return 0;
}