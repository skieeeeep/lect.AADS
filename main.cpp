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