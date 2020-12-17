#include "headers/PilhaEncadeada.h"
#include <cstddef>
#include <iostream>

using std::cout;
using std::endl;

PilhaEncadeada::PilhaEncadeada() : Pilha() {
	topo = NULL;
}
void PilhaEncadeada::Empilha(int item){
	TipoCelula *nova;

	nova = new TipoCelula();
	nova->item = item;
	nova->prox = topo;
	topo = nova;
	tamanho++;
}
int PilhaEncadeada::Desempilha(){
	int aux;
	TipoCelula *p;

	if(tamanho == 0) {
		throw "Pilha vazia!";
	}

	aux = topo->item;
	p = topo;
	topo = topo->prox;
	delete p;
	tamanho--;

	return aux;
}
void PilhaEncadeada::Print() {
    TipoCelula *p;
    p = topo;

    while (p!=NULL) {
        cout << p->item << endl;
        p = p->prox;
    }
}
