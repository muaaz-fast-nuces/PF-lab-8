#include <stdio.h>

int main(){
    int scores[3][3] = {
        {1,0,1},
        {0,0,1},
        {1,1,0}
    };
    int total_available_seats = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
                if(scores[i][j]) {
                    printf("Row : %d , Seat Number : %d\n",i+1,j+1);
                    total_available_seats++;
                }
        }
    }
    printf("Total available seats : %d",total_available_seats);

    return  0;

}