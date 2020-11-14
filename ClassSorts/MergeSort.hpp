#pragma once

#include "Planet.hpp"

#include <vector>

template<class T>
void merge (T arr[], int left, int midle, int right){
    
   int n1 = midle - left + 1;
   int n2 = right - midle;
 
   T L[n1], R[n2];
 
   for(int i = 0; i < n1; i++)
       L[i] = arr[left + i];
   for(int j = 0; j < n2; j++)
       R[j] = arr[midle + 1 + j];
 
   int i = 0;
   int j = 0;
   int k = left;
     
   while (i < n1 && j < n2){
       if (L[i] <= R[j]){
           arr[k] = L[i];
           i++;
       }
       else{
           arr[k] = R[j];
           j++;
       }
       k++;
   }

   while (i < n1){
       arr[k] = L[i];
       i++;
       k++;
   }
   
   while (j < n2){
       arr[k] = R[j];
       j++;
       k++;
   }
}

template<class T>
void array_mergeSort(T arr[], int left, int right)
{
   if (left < right)
   {
       int midle = left + (right - left) / 2;

       array_mergeSort(arr, left, midle);
       array_mergeSort(arr, midle + 1, right);
 
       merge(arr, left, midle, right);
   }
}

template<class T>
std::vector<T> vector_mergeSort(std::vector<T>& sortv) {
    
    if (sortv.size()>1) {
        int mid = sortv.size()/2;
       
        std::vector<T> lefthalf(sortv.begin(),sortv.begin()+mid);
        std::vector<T> righthalf(sortv.begin()+mid,sortv.begin()+sortv.size());

        lefthalf = vector_mergeSort(lefthalf);
        righthalf = vector_mergeSort(righthalf);

        unsigned i = 0;
        unsigned j = 0;
        unsigned k = 0;
        
        while (i < lefthalf.size() && j < righthalf.size()) {
            if (lefthalf[i] < righthalf[j]) {
                sortv[k]=lefthalf[i];
                i++;
            } else {
                sortv[k] = righthalf[j];
                j++;
            }
            k++;
        }

        while (i<lefthalf.size()) {
            sortv[k] = lefthalf[i];
            i++;
            k++;
        }

        while (j<righthalf.size()) {
            sortv[k]=righthalf[j];
            j++;
            k++;
        }
    }    
    return sortv;
}
