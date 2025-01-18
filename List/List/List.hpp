//
//  List.hpp
//  List
//
//  Created by Анастасия Мехова on 15.01.2025.
//

#ifndef List_hpp
#define List_hpp

#include <stdio.h>

#include "ListData.hpp"

class List {
public:
    List();
    void Add(int data);
    void Remove(size_t index);
    ListData& operator[](size_t index);
private:
    ListData* head;
    ListData* tail;
    int current_size;
};




#endif /* List_hpp */
