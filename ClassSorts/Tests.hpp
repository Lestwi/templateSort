#pragma  once

#include <iostream>
#include "MergeSort.hpp"
#include "BozoSort.hpp"

template<class T>
void print (T test[], int size){
    for (int i = 0; i<size; i++)
        std::cout << test[i] << " ";
}

template<class T>
void printl(std::vector<T> sortv) {
    for (unsigned int i=0; i < sortv.size(); i++) {
        std::cout << sortv[i] << std::endl;
    }
    std::cout << std::endl;
}

void test (){
    
    char test[] = {'F', 'B', 'D', 'E', 'A', 'E', 'C'};
    int test2[] = {7, 3, 5, 2, 4, 6, 1, 7};
    double test3[] = {7.2, 3.4, 5.25, 2.78, 4, 6.7, 1.1, 7.01};
    
    int size = sizeof(test) / sizeof(test[0]);
    int size2 = sizeof(test2) / sizeof(test2[0]);
    int size3 = sizeof(test3) / sizeof(test3[0]);
    
    std::vector<char> vtest (test, test + size);
    std::vector<int> vtest2 (test2, test2 + size2);
    std::vector<double> vtest3 (test3, test3 + size3);
    
    std::vector<Planet> planets {
         Planet("Earth", 1, 5.51),
         Planet("Jupiter", 5.2, 1.33),
         Planet("Mercury", 0.387, 13.6),
         Planet("Saturn", 9.58, 687),
         Planet("Venus", 0.723, 5.24),
         Planet("Neptun", 30.1, 1.64),
         Planet("Uranus", 19.1914, 1.27),
         Planet("Mars", 1.52, 3.93)
    };
    
    printl(planets);
    std::cout << "\tMERGE SORT: " << std::endl; std::cout << std::endl;
    std::cout << "\tFrom nearest to the Sun to farthest: " << std::endl;
    printl(vector_mergeSort(planets));
    
    std::cout << std::endl;
    std::cout << "---------------------------------------------------"<< std::endl;
    std::cout << "\tChar: "<< std::endl;;
    printl(vtest);
    std::cout << "\tSorted vector: " << std::endl;
    printl(vector_mergeSort(vtest));
    std::cout << "\tSorted array: " << std::endl;
    array_mergeSort(test, 0, size-1);
    print(test, size);
    
    std::cout << std::endl;
    std::cout << "---------------------------------------------------"<< std::endl;
    std::cout << "\tInt: "<< std::endl;;
    printl(vtest2);
    std::cout << "\tSorted vector: " << std::endl;
    printl(vector_mergeSort(vtest2));
    std::cout << "\tSorted array: " << std::endl;
    array_mergeSort(test2, 0, size2-1);
    print(test2, size2);
    
    std::cout << std::endl;
    std::cout << "---------------------------------------------------"<< std::endl;
    std::cout << "\tDouble: "<< std::endl;
    printl(vtest3);
    std::cout << "\tSorted vector: " << std::endl;
    printl(vector_mergeSort(vtest3));
    std::cout << "\tSorted array: " << std::endl;
    array_mergeSort(test3, 0, size3-1);
    print(test3, size3);
    
    std::cout << std::endl;
    std::cout << "\n\tBOZOSORT vector: " << std::endl; std::cout << std::endl;
    bozosort(planets);
    printl(planets);
    
    std::cout << std::endl;
    std::cout << "---------------------------------------------------"<< std::endl;
    std::cout << "\tChar: "<< std::endl;;
    std::cout << "\n\tSorted vector: " << std::endl;
    bozosort(vtest);
    printl(vtest);
    std::cout << "\tSorted array: " << std::endl;
    array_Bozosort(test, size);
    print(test, size);
    
    std::cout << std::endl;
    std::cout << "---------------------------------------------------"<< std::endl;
    std::cout << "\tInt: "<< std::endl;;
    std::cout << "\n\tSorted vector: " << std::endl;
    bozosort(vtest2);
    printl(vtest2);
    std::cout << "\tSorted array: " << std::endl;
    array_Bozosort(test2, size2);
    print(test2, size2);
    
    std::cout << std::endl;
    std::cout << "---------------------------------------------------"<< std::endl;
    std::cout << "\tDouble: "<< std::endl;;
    std::cout << "\n\tSorted vector: " << std::endl;
    bozosort(vtest3);
    printl(vtest3);
    std::cout << "\tSorted array: " << std::endl;
    array_Bozosort(test3, size3);
    print(test3, size3);

}
