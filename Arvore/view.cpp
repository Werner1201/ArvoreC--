#include "view.hpp"
#include <iostream>
#include "controle.hpp"

using namespace std;

int inicio() {
    cout << "Arvore Tree";
    return 0;
}

int valorNo(Nodo noh) {
    cout << "Valor do Noh: " << noh.getChave();
    return 0;
}