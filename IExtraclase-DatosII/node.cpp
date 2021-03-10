#include "node.h"
#include "Collector.h"


/**
 * Constructor para el nodo de la lista
 * @param value Valor que se guardara en el nodo
 */
node::node(int value) : value(value) { }


int node::getValue() const {
    return value;
}

void node::setValue(int value) {
    node::value = value;
}

node *node::getNext() const {
    return next;
}

void node::setNext(node *next) {
    node::next = next;
}


/**
 * Overloading del operador new. Valida si existe una dirreccion
 * para reciclar
 * @param sz Size del puntero, al ser int recibe 16
 * @return puntero en donde se guardara el nuevo valor del nodo
 */
void *node::operator new(size_t sz){
    Collector* prueba = Collector::getInstance();
    Cnode *temp = prueba->empty();

    if (temp == NULL){
        void * p = malloc(sz);
        cout << " -Nuevo espacio- " << p << "\n";
        return p;
    }else{
        cout << " -Espacio Reciclado- " << temp << "\n";
        return temp;
    }
}


/**
 * Overloading del operador delete. Agrega la direccion del nodo desechado
 * a la lista Collector
 * @param p Direccion a reciclar
 */
void node::operator delete (void * p){
    Collector* prueba = Collector::getInstance();
    prueba->add(static_cast<Cnode *>(p));
    cout<<"Un espacio de memoria ha sido agregado al Collector\n";
}
