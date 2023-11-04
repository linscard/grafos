cmake_minimum_required(VERSION 3.26)
project(grafos)

set(CMAKE_CXX_STANDARD 17)

add_executable(grafos src/main.cpp
        src/BubbleSort.cpp
        include/BubbleSort.h
        include/Vertex.h
        src/SelectionSort.cpp
        include/SelectionSort.h
        src/InsertionSort.cpp
        include/InsertionSort.h
        src/QuickSort.cpp
        include/QuickSort.h
        src/MergeSort.cpp
        include/MergeSort.h
        src/HeapSort.cpp
        include/HeapSort.h
        include/ShellSort.h
        include/ShellSortForInt.h
        include/Check.h
)
