
#ifndef STL_CODE_3MYLIST_ITER_H
#define STL_CODE_3MYLIST_ITER_H

#include "3mylist.h"

template<class Item>
struct ListIter
{
    Item* ptr;

    ListIter(Item* p = 0): ptr(p) {}

    Item& operator*() const { return *ptr; }
    Item* operator->() const { return ptr; }

    ListIter& operator++()
    {
        ptr = ptr->next();
        return *this;
    }

    ListIter operator++(int)
    {
        ListIter tmp = *this;
        ++*this;
        return tmp;
    }

    bool operator==(const ListIter& i) const
    {
        return ptr == i.ptr;
    }

    bool operator!=(const ListIter& i) const
    {
        return ptr != i.ptr;
    }



};

#endif //STL_CODE_3MYLIST_ITER_H
