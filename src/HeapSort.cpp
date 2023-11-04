#include "../include/HeapSort.h"

HeapSort::HeapSort(Vertex* array, int size) : size(size) {
    sort(array);
}

HeapSort::~HeapSort() {}

void HeapSort::sort(Vertex* array) {
    buildHeap(array);

    for (int i = size - 1; i > 0; i--) {
        // Trocar a raiz (maior elemento) com o último elemento não ordenado
        Vertex temp = array[0];
        array[0] = array[i];
        array[i] = temp;

        // Recriar a max-heap para o restante do array não ordenado
        heapify(array, i, 0);
    }
}

void HeapSort::heapify(Vertex* array, int n, int i) {
    int largest = i;    // Inicializa o maior como a raiz
    int left = 2 * i + 1;  // Índice do filho esquerdo
    int right = 2 * i + 2; // Índice do filho direito

    // Se o filho esquerdo é maior que a raiz

    if (left < n && ((array[left].color == array[largest].color && array[left].index > array[largest].index ) || array[left].color > array[largest].color)) {
        largest = left;
    }

    // Se o filho direito é maior que o maior até agora
    if (right < n && ((array[right].color == array[largest].color && array[right].index > array[largest].index ) || array[right].color > array[largest].color)) {
        largest = right;
    }

    // Se o maior não é a raiz
    if (largest != i) {
        Vertex temp = array[i];
        array[i] = array[largest];
        array[largest] = temp;

        // Recursivamente continuar a heapify na subárvore afetada
        heapify(array, n, largest);
    }
}

void HeapSort::buildHeap(Vertex* array) {
    // Construir uma max-heap (rearranjar array)
    for (int i = size / 2 - 1; i >= 0; i--) {
        heapify(array, size, i);
    }
}


