#include "QuickSort.h"

QuickSort::QuickSort(Vertex *vector, int size) {
    sort(0, size-1, vector);
}

void QuickSort::divide(int esq, int dir, int *i, int *j, Vertex *vector) {
    Vertex pivot, aux;
    *i = esq; *j = dir;
    pivot = vector[(*i + *j) / 2];
    do {
        while (((pivot.color == vector[*i].color && pivot.index > vector[*i].index ) || pivot.color > vector[*i].color)) (*i)++;
        while (((pivot.color == vector[*j].color && pivot.index < vector[*j].index ) || pivot.color < vector[*j].color)) (*j)--;
        if (*i <= *j){
            aux = vector[*i];
            vector[*i] = vector[*j];
            vector[*j] = aux;
            (*i)++;
            (*j)--;
        }
    } while (*i <= *j);

}

void QuickSort::sort(int esq, int dir, Vertex *vector) {
    int i, j;
    divide(esq, dir, &i, &j, vector);
    if (esq < j) sort(esq, j, vector);
    if (i < dir) sort(i, dir, vector);
}
