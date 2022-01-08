
#ifndef STL_CODE_3MYLIST_H
#define STL_CODE_3MYLIST_H

#include <iostream>

template <typename T>
class ListItem
{
public:
    ListItem(const T & value):_value(value),_next(NULL){}

    T value() const { return _value; }
    ListItem * next() const { return _next; }

    void set_next(ListItem * next)
    {
        _next = next;
    }

private:
    T _value;
    ListItem* _next;
};

template <typename T>
class List
{
public:

    List()
    {
        _front = NULL;
        _end = NULL;
        _size = 0;
    }

    void insert_front(T value)
    {
        ListItem<T> * temp = new ListItem<T>(value);
        temp->set_next(_front);
        _front = temp;
        _size++;
    }
    void insert_end(T value)
    {
        ListItem<T> * temp = new ListItem<T>(value);
        ListItem<T> *last = _front;
        while (last->next() != _end)
        {
            last = last->next();
        }
        last->set_next(temp);
        _end = temp->next();
        _size++;
    }
    void display(std::ostream &os = std::cout) const
    {
        ListItem<T> *temp = _front;
        while (temp != _end)
        {
            std::cout << temp->value() << " ";
            temp = temp->next();
        }
        std::cout << std::endl;
    }

    ListItem<T> * front()
    {
        return _front;
    }

private:
    ListItem<T>* _end;
    ListItem<T>* _front;
    long _size;
};


#endif //STL_CODE_3MYLIST_H
