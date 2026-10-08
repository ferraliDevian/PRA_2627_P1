#include <iostream>
#include "Node.h"

int main() {
    // Se insertan al principio: A, luego R, luego P
    Node<char>* first = nullptr;
    first = new Node<char>('A', first);
    first = new Node<char>('R', first);
    first = new Node<char>('P', first);

    std::cout << "Secuencia: ";
    Node<char>* aux = first;
    while (aux != nullptr) {
        std::cout << *aux << " ";
        aux = aux->next;
    }
    std::cout << std::endl;

    // Se libera la memoria
    while (first != nullptr) {
        aux = first->next;
        delete first;
        first = aux;
    }
}
