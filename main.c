#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include "assert.h"

int main() {

    int array[5];
    int *pos = -1;


    push(3,array,&pos);
    push(7,array,&pos);
    push(9,array,&pos);
    push(12,array,&pos);
    push(15,array,&pos);


    printf("\n");


    for (int i=0;i<5;i++){
        printf("%d,",array[i]);
    }


    if(empty(pos)==55){
        printf("empty");
    }
    else
        printf("not empty");





    return 0;
}
