//Definicao dos Metodos
#include "Nodo.hpp"

Nodo::Nodo() {
    chave = -1;
    esq = nullptr;
    dir = nullptr;
}

Nodo::Nodo(int num) {
    chave = num;
};

int Nodo::getChave() {
    return chave;
};

void Nodo::setChave(int num) {
    chave = num;
};

Nodo Nodo::getEsq() {
    return *esq;
};

void Nodo::setEsq(Nodo noh) {
    esq = &noh;
};

Nodo Nodo::getDir() {
    return *dir;
};

void Nodo::setDir(Nodo noh) {
    dir = &noh;
};
