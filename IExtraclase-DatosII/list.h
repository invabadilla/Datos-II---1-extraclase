#ifndef IEXTRACLASE_DATOSII_LIST_H
#define IEXTRACLASE_DATOSII_LIST_H

#include "node.h"
#include "iostream"


/**
 * Clase para la creacion y funciones de la lista simple enlazada
 */
class list {
private:
    /**
     * Puntero al primer elemento de la lista
     */
    node *head;

public:
    list();

    node *getHead() const;

    void setHead(node *head);

    void add(int value);

    void remove(int position);

    void printList();

    int size = 0;
};

#endif //IEXTRACLASE_DATOSII_LIST_H
