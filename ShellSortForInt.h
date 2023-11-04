#include "Vertex.h"
#ifndef GRAFOS_SHELLSORTFORINT_H
#define GRAFOS_SHELLSORTFORINT_H


class ShellSortForInt {
public:
    ShellSortForInt(int* array, int size) {
        sort(array, size);
    }

    ~ShellSortForInt() {};

    void sort(int* array, int size)  {
        for (int gap = size / 2; gap > 0; gap /= 2) {
            for (int i = gap; i < size; i++) {
                int temp = array[i];
                int j;

                for (j = i; j >= gap && (array[j - gap] > temp); j -= gap) {
                    array[j] = array[j - gap];
                }

                array[j] = temp;
            }
        }
    };

private:
    int size;
};

#endif //GRAFOS_SHELLSORTFORINT_H