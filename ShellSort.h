#include "Vertex.h"
#ifndef GRAFOS_SHELLSORT_H
#define GRAFOS_SHELLSORT_H


class ShellSort {
public:
    ShellSort(Vertex* array, int size) {
        sort(array, size);
    };
    ~ShellSort() {};

    void sort(Vertex* array,  int size) {
        for (int gap = size / 2; gap > 0; gap /= 2) {
            for (int i = gap; i < size; i++) {
                Vertex temp = array[i];
                int j;


                for (j = i; j >= gap && ((array[j - gap].color == temp.color && array[j - gap].index > temp.index ) || array[j - gap].color > temp.color); j -= gap) {
                    array[j] = array[j - gap];
                }

                array[j] = temp;
            }
        }
    };

private:
    int size;
};


#endif //GRAFOS_SHELLSORT_H
