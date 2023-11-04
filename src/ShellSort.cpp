#include "ShellSort.h"


ShellSort::ShellSort(Vertex* array, int size) : size(size) {
    sort(array);
}

ShellSort::~ShellSort() {}

void ShellSort::sort(Vertex* array) {
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
}

