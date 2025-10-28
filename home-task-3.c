#include <stdio.h>

int main()
{
    int image[4][4] = {
        {1, 0, 1, 0},
        {0, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 0, 1, 1}

    };
    int total_ons=0;
    printf("Original Image:\n");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            total_ons += image[i][j];
            printf("%d ", image[i][j]);
        }
        printf("\n");
    }

    printf("Inverted Image:\n");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("%d ", !image[i][j]);
        }
        printf("\n");
    }

    printf("Comparison:\n");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("%d ", image[i][j]);
        }
        printf("\t");
        for (int j = 0; j < 4; j++){
            printf("%d ", !image[i][j]);
        }
        printf("\n");
    }

    printf("White pixels : %d",total_ons);
    
    return 0;
}