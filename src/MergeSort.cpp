#include "../include/MergeSort.h"

MergeSort::MergeSort(Vertex* array, int size) : size(size) {
    mergeSort(0, size - 1, array);
}

MergeSort::~MergeSort() {}



void MergeSort::mergeSort(int low, int high, Vertex* array) {
    if (low < high) {
        int mid = low + (high - low) / 2;

        mergeSort(low, mid, array);
        mergeSort(mid + 1, high, array);

        merge(low, mid, high, array);
    }
}

void MergeSort::merge(int low, int mid, int high, Vertex* array) {
    int leftSize = mid - low + 1;
    int rightSize = high - mid;

    // Criação de arrays temporários
    Vertex* leftArray = new Vertex[leftSize];
    Vertex* rightArray = new Vertex[rightSize];

    // Copia os dados para os arrays temporários
    for (int i = 0; i < leftSize; i++) {
        leftArray[i] = array[low + i];
    }

    for (int j = 0; j < rightSize; j++) {
        rightArray[j] = array[mid + 1 + j];
    }

    // Merge dos arrays temporários de volta ao array original
    int i = 0, j = 0, k = low;
    while (i < leftSize && j < rightSize) {
        if (leftArray[i].color <= rightArray[j].color) {
            array[k] = leftArray[i];
            i++;
        } else {
            array[k] = rightArray[j];
            j++;
        }
        k++;
    }

    // Copia os elementos restantes, se houver
    while (i < leftSize) {
        array[k] = leftArray[i];
        i++;
        k++;
    }

    while (j < rightSize) {
        array[k] = rightArray[j];
        j++;
        k++;
    }


    delete[] leftArray;
    delete[] rightArray;
}
