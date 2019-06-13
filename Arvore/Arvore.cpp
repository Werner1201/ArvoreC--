#include "Arvore.hpp"

//Constrói uma arvore vazia
Arvore::Arvore() {
}

Arvore::Arvore(int i) {
    inciou = i;
}

Nodo Arvore::getRaiz() {
    return raiz;
}

void Arvore::setRaiz(Nodo rz) {
    raiz = rz;
}