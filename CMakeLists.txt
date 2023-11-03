cmake_minimum_required(VERSION 3.26)
project(grafos)

set(CMAKE_CXX_STANDARD 17)

add_executable(grafos main.cpp
        BubbleSort.cpp
        BubbleSort.h
        Vertex.h
        SelectionSort.cpp
        SelectionSort.h
        InsertionSort.cpp
        InsertionSort.h
        QuickSort.cpp
        QuickSort.h
        MergeSort.cpp
        MergeSort.h
        HeapSort.cpp
        HeapSort.h
        ShellSort.cpp
        ShellSort.h
        ShellSortForInt.cpp
        ShellSortForInt.h
        Check.cpp
        Check.h
)
