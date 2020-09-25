#include "headers/FilaEncadeada.h"
#include <cstddef>
#include <iostream>

using std::cout;
using std::endl;

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
int FilaEncadeada::FindPosition(int key) {
    TipoCelula *p;
    int aux = -1;
    int pos = 0;
    p = frente->prox;

    while (p!=NULL) {
        if(p->item == key){
            aux = pos;
            return aux;
        }
        pos++;
        p = p->prox;
    }
    return aux;
}
void FilaEncadeada::Remove(int pos) {
    TipoCelula *p = frente -> prox;
    TipoCelula *aux = frente;
    int i = 0;

    while (i<=pos) {
        if(i==pos) {
            aux -> prox = p -> prox;
            p->prox = NULL;
            delete p;
            tamanho--;
            if(p == tras){
                tras = aux;
            }
            break;
        }
        i++;
        aux = aux->prox;
        p = p->prox;
    }
}
void FilaEncadeada::Print() {
    TipoCelula *p;
    p = frente->prox;

    while (p!=NULL) {
        cout << p->item << endl;
        p = p->prox;
    }
}
