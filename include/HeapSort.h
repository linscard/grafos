#include "Vertex.h"
#ifndef GRAFOS_HEAPSORT_H
#define GRAFOS_HEAPSORT_H


class HeapSort {
public:
    HeapSort(Vertex* array, int size);
    ~HeapSort();

    void sort(Vertex* array);


private:
    int size;

    void heapify(Vertex* array, int n, int i);
    void buildHeap(Vertex* array);
};


#endif //GRAFOS_HEAPSORT_H
