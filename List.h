#ifndef LIST_H
#define LIST_H

template <typename T>
class List {
public:
    // Lanza std::out_of_range si pos no está en [0, size()]
    virtual void insert(int pos, T e) = 0;
    virtual void append(T e) = 0;
    virtual void prepend(T e) = 0;

    // Lanzan std::out_of_range si pos no está en [0, size()-1]
    virtual T remove(int pos) = 0;
    virtual T get(int pos) = 0;

    // Devuelve -1 si e no está en la lista
    virtual int search(T e) = 0;

    virtual bool empty() = 0;
    virtual int size() = 0;

    virtual ~List() = default;
};

#endif
