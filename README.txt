README

Para o desenvolvimento deste trabalho prático foi utilizada a IDE Visual Studio Code com um terminal linux(Ubuntu).
Ele contém:
    > Um projeto básico de estruturação de código considerando a linguagem C++
    > Um arquivo de MakeFile básico
    > Um arquivo "run_testes.sh" que executa os testes (ele já é incorporado pelo Makefile)
    > Um diretório com 6 testes disponíveis para comparação, na qual:
        - Os arquivos ".in" representam a entrada do teste
        - Os arquivos ".out" representam a saída esperada do teste

> Como compilar o projeto:
    - Acesse o diretorio Fernanda_Pereira/src via terminal e digite o seguinte comando:
        make

> Como fazer os testes:
    - Acesse o diretorio Fernanda_Pereira/src via terminal e digite o seguinte comando:
        make test

> Como executar o código individualmente (sem a realização da bateria de testes):
    - Acesse o diretorio Fernanda_Pereira/src via terminal e digite o seguinte comando:
        ./tp1
    - Com esse comando, você pode inserir manualmente uma entrada para o algoritmo.

> Como executar o código individualmente baseado num arquivo de entrada:
    - Acesse o diretorio Fernanda_Pereira/src via terminal e digite o seguinte comando:
        ./tp1 < arquivodeentrada.extensao

> Como executar o código individualmente baseado num arquivo de entrada e inserir a resposta dada num arquivo de saida:
    - Acesse o diretorio Fernanda_Pereira/src via terminal e digite o seguinte comando:
        ./tp1 < arquivodeentrada.extensao > arquivodesaida.extensao
