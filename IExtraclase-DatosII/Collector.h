#ifndef IEXTRACLASE_DATOSII_COLLECTOR_H
#define IEXTRACLASE_DATOSII_COLLECTOR_H

#include "Cnode.h"
#include "iostream"

/**
 * Clase para la cracion y funciones del Collector
 */
class Collector {
private:
    Cnode *C_head;

    static Collector* instance;

    Collector();

public:

    static Collector* getInstance();

    int size = 0;

    Cnode *getCHead() const;

    void setCHead(Cnode*cHead);

    void add(Cnode *value);

    Cnode *empty();

    void printList();

};

#endif //IEXTRACLASE_DATOSII_COLLECTOR_H
