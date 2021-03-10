#include "list.h"
#include "node.h"

/**
 * Constructor de la lista simple enlazada
 */
list::list()  {
    list::head = NULL;
}

node *list::getHead() const {
    return head;
}

void list::setHead(node *head) {
    list::head = head;
}


/**
 * Agrega un nuevo nodo a la lista en la primera posicion
 * @param value
 */
void list::add(int value) {
    if(list::head == NULL){
        size_t sz;
        node* mynode = new node(value);

        list::head = mynode;

    } else{
        node* mynode = new node(value);
        mynode ->setNext(list::head);
        list::head = mynode;
    }
    list::size++;
}


/**
 * Remueve el nodo en la posicion seleccionada
 * @param position
 */
void list::remove(int position) {
    if (position > size-1){
        cout << " *** POSICION NO VALIDA *** \n";
    }
    else if(position == 0){
        node *temp = list::head; //guardo la referencia del head
        list::head = list::getHead()->getNext(); //Le asigno la segunda posicion al puntero
        list::size--;
        delete temp; //Sobreescritura del delete
        //free(temp); //libero el espacio reservado de temp
    } else{
        node *before = list::head;
        for (int i=0; i<position; i++){
            if (i == position-1){
                node *temp = before->getNext();
                before->setNext(before->getNext()->getNext());
                list::size--;
                delete temp;
            }
            before = before->getNext();
        }
    }
}


/**
 * Imprime la lista simple enlazada
 */
void list::printList() {
    cout <<"List Size: " << list::size << " || ";
    node *i_pointer = list::head;
    while (i_pointer != NULL){
        cout << i_pointer->getValue() << " -> " ;
        i_pointer = i_pointer->getNext();
    }
    cout<<"NULL \n";
}