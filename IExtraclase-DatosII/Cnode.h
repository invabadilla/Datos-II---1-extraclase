#ifndef IEXTRACLASE_DATOSII_CNODE_H
#define IEXTRACLASE_DATOSII_CNODE_H

#include "iostream"

using namespace std;

/**
 * Clase para la creacion del nodo del Collector y sus funciones
 */
class Cnode {
private:
    int *value;
    Cnode *next = NULL;

public:

    Cnode(int *value);

    int getValue() const;

    void setValue(int value);

    Cnode *getNext() const;

    void setNext(Cnode *next);

};

#endif //IEXTRACLASE_DATOSII_CNODE_H
