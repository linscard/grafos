#include "../include/SelectionSort.h"

SelectionSort::SelectionSort(Vertex *vector, int size) {
    for (int i = 0; i < size-1; ++i) {
        int min = i;
        for (int j = i + 1; j < size; ++j) {
            Vertex test1 = vector[i];
            Vertex test2 = vector[j];
            if (vector[min].color == vector[j].color){
                if (vector[min].index > vector[j].index) {
                    min = j;
                }
            } else if(vector[min].color > vector[j].color){
                min = j;
            }
        }
        Vertex temp = vector[i];
        vector[i] = vector[min];
        vector[min] = temp;
    }

}
