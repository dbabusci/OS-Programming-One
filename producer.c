#include "pc.h"

int main()
{
    //printf("enter producer");
    for(int i = 0; i < 2; ++i){
        ++mutex;
        if(mutex == 1){
            printf("\nEnter a number");
            scanf("%d", &stuff[i]);
        }
        //printf("Produced");
        ++full;
        --mt;
        --mutex;
    }
}