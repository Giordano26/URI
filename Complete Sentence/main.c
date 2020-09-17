#include <stdio.h>
#include <string.h>
#include <stdbool.h>


void flush_in(){

    int ch;

    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){

    }
}

int main(){

    bool sentinel;
    int n,tamfrase,tamalph,count = 0,k,j;
    char frase[1100];
   
    
    scanf("%d",&n);
    flush_in();
   while(n > 0){
        char alfabeto[28] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
        tamalph = strlen(alfabeto);


        fgets(frase,1100,stdin);
        tamfrase = strlen(frase);

        for(k = 0; k < tamfrase; k++){

            for(j = 0; j < tamalph; j++){
                if(frase[k] == alfabeto[j]){
                    sentinel = true;
                    alfabeto[j] = '7';
                    break;
                }   
            }

            if(sentinel)
                count++;
            sentinel = false;
        }



        if(count == 26)
            printf("frase completa\n");
        else if(count >= 13)
            printf("frase quase completa\n");
        else
            printf("frase mal elaborada\n");
        
        count = 0;
        n--;

        
    }

    
    
    
    return 0;
}