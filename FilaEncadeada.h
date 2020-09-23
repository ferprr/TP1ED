#ifndef filaEncadeada
#define filaEncadeada
#include "Fila.h"
#include "TipoCelula.h"

class FilaEncadeada : public Fila {
    public:
        FilaEncadeada();
        virtual ~FilaEncadeada();

        void Enfileira(int item);
        int Desenfileira();
        void Limpa();
        bool FindKey(int key);

    private:
        TipoCelula* frente;
        TipoCelula* tras;
};

#endif