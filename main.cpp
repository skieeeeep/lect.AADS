#include <iostream>

template <class T>
struct BiList {
    T val;
    BiList<T> * next;
    BiList<t> * prev;
};

template<class T>
BiList<T>* create_list() {
    BiList<T>* fake = new BiList<T>;
    fake->next = fake;
    fake->prev = fake;
    return fake;
}

template<class T>
void add_to_tail(BiList<T>* fake, T value) {
    BiList<T>* newNode = new BiList<T>;
    newNode->val = value;
    BiList<T>* last = fake->prev;
    newNode->next = fake;
    newNode->prev = last;
    last->next = newNode;
    fake->prev = newNode;
}

