#ifndef LIST_H
#define LIST_H

#include <iostream>

using namespace std;

#include "Structures.h"

template<typename T>
class List
{
    public:
        List();
        ~List();
        List(const List<T>& other);
        List<T>& operator = (const List<T>& Right);
        void PrintList() const;
        void AddAtEnd(T data);
        void IsListEmpty() const;
        void AddAtBeginning(T data);
        void DeleteList();
        void SearchList(T data) const;
        void RemoveAtEnd();
        void RemoveAtBeginning();
        void AddAfter(T nextto, T data);
        void RemoveItermAfter(T data);

    private:
        Node<T>* head;
        Node<T>* tail;
        int length;

        /// helper functions
        void CopyList(const List<T>& other);

};
#include "list.imp"
#endif // LIST_H
