#ifndef celula
#define celula

class TipoCelula {
	public:
		TipoCelula();

	private:
		int item;
		TipoCelula *prox;

	friend class PilhaEncadeada;
	friend class FilaEncadeada;
	friend class ListaEncadeada;
};

#endif