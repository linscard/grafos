#include "InsertionSort.h"

InsertionSort::InsertionSort(Vertex *vector, int size) {
    for (int i = 1; i < size; ++i) {
        Vertex aux = vector[i];
        int j = i - 1;
        while ((j>=0) && ((aux.color == vector[j].color && aux.index < vector[j].index ) || aux.color < vector[j].color) ){
            vector[j + 1] = vector[j];
            j -= 1;
        }
        vector[j + 1] = aux;
    }

}
