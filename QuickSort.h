#include "Vertex.h"
#ifndef GRAFOS_QUICKSORT_H
#define GRAFOS_QUICKSORT_H


class QuickSort {
public:
    QuickSort(Vertex* vector, int size);
    void sort(int esq, int dir,Vertex* vector );
    void divide(int esq, int dir, int* i, int* j, Vertex* vector );

};


#endif //GRAFOS_QUICKSORT_H
