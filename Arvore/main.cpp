#include <iostream>

#include "controle.cpp"
#include "view.cpp"

int main() {
    Arvore arv(1);
    arv.setRaiz(instancia(2));
    cout << "\nA Raiz da Arvore eh: " << valorNo(arv.getRaiz());
    return 0;
}