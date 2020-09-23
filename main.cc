#include <cstdio>
#include <iostream>
#include <ios>
#include "PilhaEncadeada.h"
#include "FilaEncadeada.h"

using std::cout;
using std::cin;
using std::endl;

void print_waiting_for_combat(PilhaEncadeada &waiting_for_combat){
    while(!waiting_for_combat.Vazia()){
      int x = waiting_for_combat.Desempilha();
      cout << "Id ship: ";
      cout << x << endl;
    }
}
void print_broken(FilaEncadeada &broken){
  while(!broken.Vazia()){
      int x = broken.Desenfileira();
      cout << "Id ship: ";
      cout << x << endl;
  }
}
int main() {

  PilhaEncadeada waiting_for_combat;
  FilaEncadeada in_combat;
  FilaEncadeada broken;

  int ship_size;
  cout << "Enter a size for the ship: ";
  cin >> ship_size;
  while (ship_size<0 || ship_size>5000) {
    cout << "Size ship invalid. Enter a number from 0 to 5000.";
    cin >> ship_size;
  }

  for(int i=0; i < ship_size; i++){
    int id_ship;
    cout << "Enter an id for the ship: ";
    cin >> id_ship;

    waiting_for_combat.Empilha(id_ship);
  }

  int option;
  cout << "Enter an option: ";

  while(cin >> option) {
    switch (option) {
      case 0 : { //enviar nave mais apta da fila para combate
        int combat = waiting_for_combat.Desempilha();
        in_combat.Enfileira(combat);
        cout << "Ship " << combat << " in combat" << endl;
        break;
      }
      case -1 : { //nave avariada consertada
        int fixed = broken.Desenfileira();
        waiting_for_combat.Empilha(fixed);
        cout << "Ship fixed." << endl;
        break;
      }
      case -2 : { //impressão de naves aguardando para combate
        print_waiting_for_combat(waiting_for_combat);
        break;
      }
      case -3 : { //impressão de naves avariadas
        print_broken(broken);
        break;
      }
      default: {
        if (in_combat.FindKey(option)) {
          broken.Enfileira(option);
          cout << "Ship " << option << "broken." << endl;
        } else {
          cout << "Invalid option. Try again: " << endl;
        }
        break;
      }
    }
  }
  return 0;
}
