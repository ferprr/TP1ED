#include <cstdio>
#include <iostream>
#include <ios>
#include "headers/PilhaEncadeada.h"
#include "headers/FilaEncadeada.h"

using std::cout;
using std::cin;
using std::endl;

int main() {

  PilhaEncadeada waiting_for_combat;
  FilaEncadeada in_combat;
  FilaEncadeada broken;

  int ship_size;
  cin >> ship_size;
  while (ship_size<0 || ship_size>5000) {
    cin >> ship_size;
  }

  for(int i=0; i < ship_size; i++){
    int id_ship;
    cin >> id_ship;

    waiting_for_combat.Empilha(id_ship);
  }

  int option;

  while(scanf("%d", &option) != EOF) {
    switch (option) {
      case 0 : { //enviar nave mais apta da fila para combate
        int combat = waiting_for_combat.Desempilha();
        in_combat.Enfileira(combat);
        cout << "nave " << combat << " em combate" << endl;
        break;
      }
      case -1 : { //nave avariada consertada
        int fixed = broken.Desenfileira();
        waiting_for_combat.Empilha(fixed);
        cout << "nave " << fixed << " consertada" << endl;
        break;
      }
      case -2 : { //impressão de naves aguardando para combate
        waiting_for_combat.Print();
        break;
      }
      case -3 : { //impressão de naves avariadas
        broken.Print();
        break;
      }
      default: {
        int position = in_combat.EncontraPosicao(option);
        if (position == -1) {
          cout << "Invalid option." << endl;
        } else {
          in_combat.Remove(position);
          broken.Enfileira(option);
          cout << "nave " << option << " avariada" << endl;
        }
        break;
      }
    }
  }
  return 0;
}
