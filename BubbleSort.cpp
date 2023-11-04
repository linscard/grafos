
#include "../include/BubbleSort.h"

BubbleSort::BubbleSort(Vertex* vector, int size) {
    for (int i = 0; i < size-1; ++i) {
        for (int j = 1; j < size-i; ++j) {
            if (vector[j-1].color == vector[j].color){
                if (vector[j-1].index > vector[j].index) {
                    Vertex temp;
                    temp = vector[j-1];
                    vector[j-1] = vector[j];
                    vector[j] = temp;
                }
            } else if(vector[j-1].color > vector[j].color){
                Vertex temp;
                temp = vector[j-1];
                vector[j-1] = vector[j];
                vector[j] = temp;
            }
        }
    }
}
