#ifndef pilhaEncadeada
#define pilhaEncadeada
#include "Pilha.h"
#include "PilhaEncadeada.h"
#include "TipoCelula.h"

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