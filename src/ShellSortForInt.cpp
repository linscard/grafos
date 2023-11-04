#include "ShellSortForInt.h"



ShellSortForInt::ShellSortForInt(int* array, int size) : size(size) {
    sort(array);
}

ShellSortForInt::~ShellSortForInt() {}

void ShellSortForInt::sort(int* array) {
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
}

