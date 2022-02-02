#pragma once
#include <iostream>
#include "set.h"
int main()
{
    CSet set1, set2, result_set;
    set1.include(1); set1.include(2); set1.include(3);
    set2.include(4); set2.include(5); set2.include(6);
    std::cout << "Welcome to the sets demo program!\n Printing sets:\nSet 1:\n";
    set1.print();
    std::cout << "\nSet 2:\n";
    set2.print();
    std::cout << "\nUnion of the sets:\n";
    result_set = set1 + set2;
    result_set.print();
    std::cout << "\nIntersection of sets:\n";
    result_set = set1 * set2;
    result_set.print();
    std::cout << "\nSets difference:\n";
    result_set = set2 - set1;
    result_set.print();
    std::cout << "\nSelecting a value from the set by index (first el. from the Set 1):\n";
    std::cout << set1[0];
    std::cout << "\nÑheck for the occurrence (number 1 in set1):\n";
    std::cout << set1.contains(1);
    std::cout << "\nGetting the length of Set 1:\n";
    std::cout << set1.length();


    return 0;
}