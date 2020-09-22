#ifndef celula
#define celula

class TipoCelula {
	public:
		TipoCelula();

	private:
		int item;
		TipoCelula *prox;

	friend class PilhaEncadeada;
};

#endif