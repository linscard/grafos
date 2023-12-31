#include "Vertex.h"
#ifndef GRAFOS_CHECK_H
#define GRAFOS_CHECK_H


class Check {
public:
    Check(Vertex* array, int size){
//    for (int i = 0; i < size; ++i) {
//        cout << "Vertex: " << array[i].index << " Color: " << array[i].color << endl;
//        for (int j = 0; j < array[i].numNeighbors; ++j) {
//            cout << array[i].neighbors[j] << " ";
//        }
//        cout << endl;
//    }
        for (int i = 0; i < size; ++i) {
            Vertex vertex = array[i];
            if(vertex.color == 1) continue;
            int neighborsColors[vertex.numNeighbors +1 ];
            for (int j = 0; j < vertex.numNeighbors; ++j) {

                Vertex neighbor =  vertex.pointNeighbors[j];
                neighborsColors[j] = neighbor.color;
            }
            neighborsColors[vertex.numNeighbors] = vertex.color;
            ShellSortForInt(neighborsColors, vertex.numNeighbors + 1);

            for (int z = 1; z < vertex.numNeighbors + 1; ++z) {
                if(neighborsColors[z] - neighborsColors[z - 1] > 1){
                    cout << 0 << endl;
                    return;
                }
            }
        }
        cout << 1;
        for (int i = 0; i < size; ++i) {
            cout << " " << array[i].index;
        }
        cout << endl;

    };


};


#endif //GRAFOS_CHECK_H
