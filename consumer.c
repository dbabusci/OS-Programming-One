#include "pc.h"

int main(){
    //printf("enter consumer");
    for(int i = 2; i > 0; i-- ){
        ++mutex;
        if(mutex == 1 && full != 0){
            stuff[i] = 0;
            printf("\nConsumed");
        }
        if(full == 0){
            printf("buffer is empty");
        }
        //printf("Consumed");
        --full;
        ++mt;
        --mutex;
    }
}