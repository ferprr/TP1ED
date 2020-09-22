#include "TipoCelula.h"

class Pilha { // @suppress("Class has a virtual method and non-virtual destructor")
	public:
		Pilha() { tamanho = 0; };
		int GetTamanho() { return tamanho; };
		bool Vazia() { return tamanho == 0; };

		virtual void Empilha(TipoCelula) = 0;
		virtual int Desempilha() = 0;
		virtual void Limpa() = 0;

	protected:
		int tamanho;
};
