//
//  ListData.cpp
//  List
//
//  Created by Анастасия Мехова on 15.01.2025.
//

#include "ListData.hpp"

ListData::ListData(int _data) : data(_data) {}
void ListData::SetNext(ListData* _next) {
    next = _next;
}

ListData* ListData::GetNext() const {
    return next;
}

int& ListData::GetData() {
    return data;
}
