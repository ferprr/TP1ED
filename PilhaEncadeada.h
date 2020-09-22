#ifndef pilhaEncadeada
#include "Pilha.h"
#define NULL nullptr

class PilhaEncadeada : public Pilha {
	public:
		PilhaEncadeada();
		virtual ~PilhaEncadeada();

		void Empilha(int item);
		int Desempilha();
		void Limpa();

	private:
		TipoCelula* topo;
};

#endif