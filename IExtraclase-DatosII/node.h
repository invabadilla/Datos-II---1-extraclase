#ifndef IEXTRACLASE_DATOSII_NODE_H
#define IEXTRACLASE_DATOSII_NODE_H

#include "iostream"
#include "Collector.h"
#include "node.h"

/**
 *Clase para la creacion y funciones para el nodo de la lista
 */

using namespace std;

class node {

public:
    /**
     * value: valor que guarda el nodo
     * *next: puntero al siguiente nodo de la lista
     */
    int value;
    node *next = NULL;



    node(int value);

    int getValue() const;

    void setValue(int value);

    node *getNext() const;

    void setNext(node *next);

    void* operator new(size_t sz);

    void operator delete(void * p);

};

#endif //IEXTRACLASE_DATOSII_NODE_H
