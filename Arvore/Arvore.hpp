#ifndef ARVORE_CLASSE
#define ARVORE_CLASSE
#include "Nodo.hpp"

//Arvore ainda não definida se será binária ou não
class Arvore {
   private:
    Nodo raiz;
    int inciou = 0;

   public:
    Arvore();
    Arvore(int i);
    Nodo getRaiz();
    void setRaiz(Nodo rz);
};
#endif