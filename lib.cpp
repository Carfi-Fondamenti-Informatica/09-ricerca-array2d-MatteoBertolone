#include "lib.h"

int comp(char list[10][20], char name[]){
    for(int i=0;i<10;i++){
        for(int j=0;j<20;j++){
            if(list[i][j] != name[j])
                break;
            else{
                if(j==19){
                    return i+1;
                }
            }
        }
    }
    return -1;
}
