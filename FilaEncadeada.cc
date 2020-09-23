#include "FilaEncadeada.h"
#include <cstddef>

FilaEncadeada::FilaEncadeada() : Fila() {
    frente = new TipoCelula();
    tras = frente;
}
FilaEncadeada::~FilaEncadeada() {
    Limpa();
    delete frente;
}
void FilaEncadeada::Enfileira(int item) {
    TipoCelula *nova;

    nova = new TipoCelula();
    nova->item = item;
    tras->prox = nova;
    tras = nova;
    tamanho++;
}
int FilaEncadeada::Desenfileira() {
    TipoCelula *p;
    int aux;

    if (tamanho == 0) {
        throw "Fila vazia!";
    }

        aux = frente->prox->item;
        p = frente;
        frente = frente->prox;
        delete p;
        tamanho--;
        return aux;
}
void FilaEncadeada::Limpa() {
    TipoCelula *p;
    p = frente->prox;

    while (p!=NULL) {
        frente->prox = p->prox;
        delete p;
        p = frente->prox;
    }
    tamanho = 0;
    tras = frente;
}
bool FilaEncadeada::FindKey(int key) {
    TipoCelula *p;
    int aux;
    p = frente->prox;

    while (p!=NULL) {
        if(p->item == key){
            //aux = p->item;
            return true;
        }
        p = frente->prox;
    }
    return false;
}