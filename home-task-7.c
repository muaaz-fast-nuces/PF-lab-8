#include <stdio.h>

int main(){
    
    printf("\n");
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 1; k <= (11 - ((i*2)+1)); k++){
                printf(" ");
            }
            for (int k = 1; k <= ((i*2)+1); k++){
                printf(" ");
                if (j==0) printf("*");
                else if (j==1) printf("%d",k);
                else printf("%c",65+k-1);
            }
            for (int k = 1; k <= (11 - ((i*2)+1)); k++){
                printf(" ");
            }

         if(j!=2) printf(" |");
        }
        printf("\n");
        
    }
    
    

    return  0;

}