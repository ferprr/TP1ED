# == VARIAVEIS ===
# ================
#
# Podemos declarar algumas variaveis dentro do Makefile (sintaxe similar a bash)
# Isso facilita o seu trabalho caso voce opte trocar alguma versao do
# compilador ou flag para seu processo de compilacao
# Uma variavel com nome VAR eh declarada da seguinte maneira:
# 	VAR=conteudo
# e eh chamada atraves do comando $(VAR)

CC=g++ # compilador, troque para gcc se preferir utilizar C
CFLAGS=-Wall -Wextra # compiler flags, troque o que quiser, exceto bibliotecas externas
EXEC=./tp1 # nome do executavel que sera gerado, nao troque
TMPOUT=tp1.testresult

# === REGRAS =====
# ================
# 
# Aqui declaramos as nossas regras de compilacao.
# Para chamar uma regra, podemos simplesmente digitar
# 	make nome_regra
# Exs.:
# 	make ./tp1
# 	make foo.o
# 	make clean
# Cada regra de compilacao tem a seguinte sintaxe:
#
# NOME_OUTPUT: DEPENDENCIAS
# 	CMD
#
# NOME_OUTPUT eh o nome do arquivo que vai ser gerado (ou qualquer nome caso
# nenhum arquivo seja gerado, ex. clean)
# DEPENDENCIAS sao os nomes dos arquivos necessarios para executar essa regra
# de compilacao
# CMD sao os comandos necessarios para executar a regra (por exemplo, chamar o
# gcc)

$(EXEC): main.cc TipoCelula.o FilaEncadeada.o PilhaEncadeada.o
	$(CC) $(CFLAGS) main.cc TipoCelula.o FilaEncadeada.o PilhaEncadeada.o -o $(EXEC)

testing: main.cc TipoCelula.o FilaEncadeada.o PilhaEncadeada.o
	$(CC) $(CFLAGS) main.cc TipoCelula.o FilaEncadeada.o PilhaEncadeada.o -o ./testing

TipoCelula.o: TipoCelula.cc
	$(CC) $(CFLAGS) -c TipoCelula.cc -o TipoCelula.o

FilaEncadeada.o: FilaEncadeada.cc
	$(CC) $(CFLAGS) -c FilaEncadeada.cc -o FilaEncadeada.o

PilhaEncadeada.o: PilhaEncadeada.cc
	$(CC) $(CFLAGS) -c PilhaEncadeada.cc -o PilhaEncadeada.o

test: $(EXEC) 
	@bash run_tests.sh $(EXEC) $(TMPOUT)

clean: # remove todos os arquivos temporarios que forem gerados pela compilacao
	rm -rf TipoCelula.o
	rm -rf FilaEncadeada.o
	rm -rf PilhaEncadeada.o

# === OUTROS =====
# ================
# 
# Para mais informacoes sobre o Makefile, procure os monitores ou consulte
# outras referencias disponiveis na internet como:
# https://opensource.com/article/18/8/what-how-makefile
