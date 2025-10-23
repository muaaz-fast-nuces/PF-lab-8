#include <stdio.h>

int main(){
    printf("Multiplication Table (1-5):\n");
for (int i = 1; i <= 5; i++){
    printf("%d:",i);
    for (int j = 1; j <= 5; j++){
        printf("%5d",j*i);
    }
    printf("\n");
    
}
    
}
