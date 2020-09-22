#include "PilhaEncadeada.h"
#include <cstddef>

PilhaEncadeada::PilhaEncadeada() : Pilha() {
	topo = NULL;
}
PilhaEncadeada::~PilhaEncadeada() {
	Limpa();
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
void PilhaEncadeada::Limpa(){
	while(!Vazia()) {
		Desempilha();
	}
}
