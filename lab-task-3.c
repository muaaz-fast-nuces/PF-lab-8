#include <stdio.h>


int main(){
    printf("Classroom Seating Chart:\n");
    printf("======================\n");
    printf("(x= Student , o = Empty)\n");
    int total_students =    0; 
    int total  =5;
    for (int i = 0; i < 5; i++){
        printf("Row %d ",i+1);
        for (int j = 0; j < 5; j++){
            int m = 1 ;
            if(i%2 ==0)  m=0;
            if(((j+m) % 2)==0){
            printf("%2s" ,"x" );
            }
            else{
            total_students++;
            printf("%2s" ,"o" );
            }
        }
        printf("\n");
    }

    printf("\nSummary \n");
    printf("Students seated: %s \n",total_students);
    printf("Empty desks: %s \n",total-total_students);
    printf("Total desks: %s \n",total);

}
