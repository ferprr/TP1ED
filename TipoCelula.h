#ifndef celula
#define celula
#define NULL nullptr

class TipoCelula {
	public:
		TipoCelula();

	private:
		int item;
		TipoCelula *prox;

	friend class PilhaEncadeada;
};

#endif