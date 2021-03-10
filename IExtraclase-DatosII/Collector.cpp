#include "Collector.h"
#include "iostream"
#include "Cnode.h"

/**
 * Inicializa la instancia del collector en 0
 */
Collector* Collector::instance = 0;


/**
 * Constructor del Collector
 */
Collector::Collector() {
    Collector::C_head = NULL;
}


/**
 * Verifica si existe un collector creado y lo retorna, si no existe
 * crea un nuevo Collector y lo retorna
 * @return
 */
Collector* Collector::getInstance() {
    if (instance == 0){
        instance = new Collector();
    }
    return instance;
}


/**
 * Agrega una nueva dirreccion al collector para reciclarla
 * @param value
 */
void Collector::add(Cnode *value) {

    if(Collector::C_head == NULL){
        Collector::C_head = value;

    } else{
        value ->setNext(Collector::C_head);
        Collector::C_head = value;
    }
    Collector::size++;
}


/**
 * verifica si el Collector esta vacio, si es asi retorna NULL
 * de lo contrario remueve la primera posicion reciclabe y la retorna
 * @return
 */
Cnode *Collector::empty() {
    if(Collector::C_head == NULL){
        return NULL;
    }else{
        Cnode *temp = Collector::C_head;
        Collector::C_head = Collector::C_head->getNext();
        Collector::size--;
        return temp;
    }
}


/**
 * Imprime la lista del Collector
 */
void Collector::printList() {
    Cnode *myPointer = Collector::C_head;
    cout <<"Collector Size: " << Collector::size << " || ";
    while (myPointer != NULL){
        cout << myPointer << " -> ";
        myPointer = myPointer->getNext();
    }
    cout<<"NULL \n";
}
