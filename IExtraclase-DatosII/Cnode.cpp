#include "Cnode.h"

/**
 * Constructor del nodo del Collector
 * @param value
 */
Cnode::Cnode(int *value) : value(value) { }

int Cnode::getValue() const {
    return *value;
}

void Cnode::setValue(int value) {
    *Cnode::value = value;
}

Cnode *Cnode::getNext() const {
    return next;
}

void Cnode::setNext(Cnode *next) {
    Cnode::next = next;
}