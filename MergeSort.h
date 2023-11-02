#include "Vertex.h"
#ifndef GRAFOS_MERGESORT_H
#define GRAFOS_MERGESORT_H

class MergeSort {
public:
    MergeSort(Vertex* array, int size);
    ~MergeSort();

    void sort( Vertex* array);

private:
    int size;


    void merge(int low, int mid, int high, Vertex* array);
    void mergeSort(int low, int high, Vertex* array);
};

#endif //GRAFOS_MERGESORT_H
