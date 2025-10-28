    
#include <stdio.h>

int main(){
    int spots[4][4] = {
        {12, 15, 10, 9},
        {11, 8,  12, 13},
        {14, 13, 9,  7},
        {16, 11, 10, 8}
};
    printf("Cold spots found :\n");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
        int checks = 0;
        // right_check
        checks += j+1 > 3 ? 1 : spots[i][j] < spots[i][j+1] ; 
        // left_check
        checks += j-1 < 0 ? 1 : spots[i][j] < spots[i][j-1] ; 
        // top_check
        checks += i-1 < 0 ? 1 : spots[i][j] < spots[i-1][j] ; 
        // bottom_check
        checks += i+1 > 3 ? 1 : spots[i][j] < spots[i+1][j] ; 

        if(checks ==4) printf("- At position (%d,%d) with temperature %d C\n",i,j,spots[i][j]);

        }
    }
    

    return  0;

}