#include <iostream> /*Permite la interacción I/O para cout */
#include "list.h"
#include "Collector.h"

int main(){
    Collector* prueba = Collector::getInstance();

    list* pList = new list();
    pList->add(6);
    pList->add(7);
    pList->printList();

    prueba->printList();

    pList->remove(1);
    prueba->printList();

    pList->printList();
    pList->add(10);

    prueba->printList();

    pList->printList();

    return 0;
}