#include <iostream>
using namespace std;
#ifndef VERTEX_H
#define VERTEX_H

struct Vertex {
    int index;
    int* neighbors;
    int numNeighbors;
    int color;
};

#endif // VERTEX_H
