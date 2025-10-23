#include <stdio.h>


int main(){

    int m[3][3] = {
        {12,45,32},
        {2,13,45},
        {56,72,41}
    };
    int max = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if(max < m[i][j]) max = m[i][j];
        }

    }
 printf("Max : %d",max);   
}
