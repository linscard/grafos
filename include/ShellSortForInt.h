#include "Vertex.h"
#ifndef GRAFOS_SHELLSORTFORINT_H
#define GRAFOS_SHELLSORTFORINT_H


class ShellSortForInt {
public:
    ShellSortForInt(int* array, int size);
    ~ShellSortForInt();

    void sort(int* array);

private:
    int size;
};


#endif //GRAFOS_SHELLSORTFORINT_H
