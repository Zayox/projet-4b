#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

void addValue (int *p,int pos,int value,int size){

    p[size+1]=p[size];

    for (int i=0;i<size-pos;i++){
        p[size-i] = p[size-i-1];
    }

    p[pos] = value;


}


void deleteVal (int *p, int size, int val){

    for (int i=0;i<size;i++){
        if (p[i] == val){
            while (i<size){
                p[i] = p[i+1];
                i++;
            }
        }
    }


}


int push (int x,int array[],int *pos){

    *pos = *pos+1;

    array[*pos] = x;

    return *pos;


}

int empty (int pos){
    if(pos == -1){
        return 55;
    }

}