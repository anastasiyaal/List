//
//  main.cpp
//  List
//
//  Created by Анастасия Мехова on 15.01.2025.
//

#include <iostream>
#include "List.hpp"
#include "ListData.hpp"


int main(int argc, const char * argv[]) {
    List a;
    a.Add(12);
    a.Add(55);
    a.Add(9);
    
    std::cout<< a[1].GetData() << std::endl;
    
    a.Remove(1);
    
    std::cout<< a[1].GetData() << std::endl;
    
    return 0;
}
