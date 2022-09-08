#ifndef STRUCTURES_H_INCLUDED
#define STRUCTURES_H_INCLUDED

template<typename T>
struct Node
{
    T data;
    int key;
    Node<T>* next;
};

#endif // STRUCTURES_H_INCLUDED
