#ifndef NODO_CLASSE
#define NODO_CLASSE  // <-- same string as above line

// Noh classico
class Nodo {
   private:
    int chave;
    Nodo* esq;
    Nodo* dir;

   public:
    Nodo();
    Nodo(int num);
    int getChave();
    void setChave(int num);
    Nodo getEsq();
    void setEsq(Nodo noh);
    Nodo getDir();
    void setDir(Nodo noh);
};
#endif