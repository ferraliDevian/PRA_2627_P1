#ifndef NODE_H
#define NODE_H

#include <ostream>

template <typename T>
class Node {
public:
    T data;              // elemento almacenado
    Node<T>* next;       // siguiente nodo (nullptr si es el último)

    Node(T data, Node<T>* next = nullptr) {
        this->data = data;
        this->next = next;
    }

    friend std::ostream& operator<<(std::ostream& out, const Node<T>& node) {
        out << node.data;
        return out;
    }
};

#endif	
