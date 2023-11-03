#include <iostream>
using namespace std;

#include "Vertex.h"
#include "BubbleSort.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "QuickSort.h"
#include "MergeSort.h"
#include "HeapSort.h"
#include "ShellSort.h"
#include "ShellSortForInt.h"
#include "Check.h"



int main() {
    char metodoOrdenacao;
    int numVertices;

    cin >> metodoOrdenacao >> numVertices;

     Vertex graph[numVertices];

    for (int i = 0; i < numVertices; ++i) {
        int numNeighbors;
        std::cin >> numNeighbors;
        graph[i].index = i;
        graph[i].neighbors = new int[numNeighbors];
        graph[i].numNeighbors = numNeighbors;

        for (int j = 0; j < numNeighbors; ++j) {
            int neighbor;
            std::cin >> neighbor;

            graph[i].neighbors[j] = neighbor;
        }
    }

    int colors[numVertices];

    for (int i = 0; i < numVertices; ++i) {
        int cor;
        std::cin >> cor;
        graph[i].color = cor;
        colors[i] = cor;
    }

    for (int i = 0; i < numVertices; ++i) {
        Vertex item = graph[i];
        int numNeighbors = item.numNeighbors;

        graph[i].pointNeighbors = new Vertex[numNeighbors];
        for (int j = 0; j < numNeighbors; ++j) {
            Vertex neighbor = graph[item.neighbors[j]];
            graph[i].pointNeighbors[j] = neighbor;
        }
    }


    ShellSortForInt(colors, numVertices);


    for (int i = 1; i < numVertices; ++i) {
        int num1 = colors[i-1];
        int num2 = colors[i];
        int result = colors[i] - colors[i-1] ;

        if(colors[i] - colors[i-1] > 1){
            cout << 0 << endl;
            return 0;
        }
    }

    switch (metodoOrdenacao) {
        case 'b':
            BubbleSort(graph, numVertices);
            break;
        case 's':
            SelectionSort(graph, numVertices);
            break;
        case 'i':
            InsertionSort(graph, numVertices);
            break;
        case 'q':
            QuickSort(graph, numVertices);
            break;
        case 'm':
            MergeSort(graph, numVertices);
            break;
        case 'p':
            HeapSort(graph, numVertices);
            break;
        case 'y':
            ShellSort(graph, numVertices);
            break;
    }



    Check(graph, numVertices);
//    ShellSort(graph, numVertices);
//
//    for (int i = 0; i < numVertices; ++i) {
//        cout << "Vertex: " << graph[i].index << " Color: " << graph[i].color << endl;
//        for (int j = 0; j < graph[i].numNeighbors; ++j) {
//            cout << graph[i].neighbors[j] << " ";
//        }
//        cout << endl;
//    }
    return 0;
}
