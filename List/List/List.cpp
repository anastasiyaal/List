//
//  List.cpp
//  List
//
//  Created by Анастасия Мехова on 15.01.2025.
//

#include "List.hpp"
#include <stdexcept>

List::List() : head(nullptr), tail(nullptr), current_size(0) {}
void List::Add(int data) {
    if(!current_size) {
        head = new ListData(data);
        tail = head;
        ++current_size;
    }
    else {
        ListData* temp = tail;
        tail = new ListData(data);
        temp->SetNext(tail);
        ++current_size;
    }
}

void List::Remove(size_t index) {
    if((index < 0) || (index >= current_size)) {
        throw std::out_of_range("");
    }
    ListData* current = head;
    ListData* prev = nullptr;
    for (int i = 0; i < index; ++i) {
        prev = current;
        current = current->GetNext();
    }
    if(!index) {
        delete current;
        --current_size;
    }
    else {
        prev->SetNext(current->GetNext());
        delete current;
        --current_size;
    }
}

ListData& List::operator[](size_t index) {
    ListData* current = head;
    for (int i = 0; i < index; ++i) {
        current = current->GetNext();
    }
    return *current;
}
