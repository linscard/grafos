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



int main() {
    char metodoOrdenacao;
    int numVertices;

    cin >> metodoOrdenacao >> numVertices;

     Vertex graph[numVertices];


    // Ler a vizinhança de cada vértice
    for (int i = 0; i < numVertices; ++i) {
        int numNeighbors;
        std::cin >> numNeighbors;
        graph[i].index = i;
        graph[i].neighbors = new int[numNeighbors];
        graph[i].numNeighbors = numNeighbors;

        // Ler os neighbors do vértice e adicionar ao grafo
        for (int j = 0; j < numNeighbors; ++j) {
            int neighbor;
            std::cin >> neighbor;

            graph[i].neighbors[j] = neighbor;

            // Adicionar neighbor ao grafo
            // (depende da implementação da classe Graph)
        }
    }

    // Ler as cores de cada vértice
    for (int i = 0; i < numVertices; ++i) {
        int cor;
        std::cin >> cor;
        graph[i].color = cor;
        // Atribuir cor ao vértice no grafo
        // (depende da implementação da classe Graph)
    }

    for (int i = 0; i < numVertices; ++i) {
       cout << "Vertex: " << graph[i].index << " Color: " << graph[i].color << endl;
        for (int j = 0; j < graph[i].numNeighbors; ++j) {
            cout << graph[i].neighbors[j] << " ";
        }
        cout << endl;
    }

    ShellSort(graph, numVertices);

    for (int i = 0; i < numVertices; ++i) {
        cout << "Vertex: " << graph[i].index << " Color: " << graph[i].color << endl;
        for (int j = 0; j < graph[i].numNeighbors; ++j) {
            cout << graph[i].neighbors[j] << " ";
        }
        cout << endl;
    }
    return 0;
}
