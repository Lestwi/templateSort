#pragma once
#include "Planet.hpp"

#include <vector>

template<class T>
bool isSorted (T arr[], int size){
    
    for (int i = 0; i < size - 1; i++){
        if (arr[i] > arr[i+1])
            return false;
    }
    return true;
}

template<class T>
void array_Bozosort (T arr[], int size){
    
    int first = 0;
    int second = 0;
    T temp;
    
    srand (time(NULL));
    
    while (!isSorted(arr, size)){
        first = rand() % size;
        second = rand() % size;
        
        temp = arr[first];
        arr[first] = arr[second];
        arr[second] = temp;
    }
}

template<class T>
bool is_sorted(const std::vector<T>& vsort)
{
    for (typename std::vector<T>::size_type i = 1; i < vsort.size(); ++i)
        if (vsort[i] < vsort[i-1])
            return false;
    return true;
}

template<class T>
void bozosort(std::vector<T>& vsort)
{
    int first = 0;
    int second = 0;
    
    while (!is_sorted(vsort)){
        first = rand() % vsort.size();
        second = rand() % vsort.size();
        
        std::swap(vsort[first], vsort[second]);
    }
}

