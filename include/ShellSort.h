#include "Vertex.h"
#ifndef GRAFOS_SHELLSORT_H
#define GRAFOS_SHELLSORT_H


class ShellSort {
public:
    ShellSort(Vertex* array, int size);
    ~ShellSort();

    void sort(Vertex* array);

private:
    int size;
};


#endif //GRAFOS_SHELLSORT_H
