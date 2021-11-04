#include "libraries.h"

int oldestValues (int ages[], int size){
    int largest = ages [0];
    for (int i = 1;i < size; i++ ){
        if (ages[i] > largest){
            largest = ages[i];
        }
    }
    return largest;
}
