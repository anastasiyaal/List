//
//  ListData.hpp
//  List
//
//  Created by Анастасия Мехова on 15.01.2025.
//

#ifndef ListData_hpp
#define ListData_hpp

#include <stdio.h>

class ListData {
public:
    ListData(int _data);
    int& GetData();
private:
    void SetNext(ListData* _next);
    ListData* GetNext() const;
    ListData* next;
    int data;
    friend class List;
};






#endif /* ListData_hpp */

