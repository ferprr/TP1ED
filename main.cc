#include <cstdio>
#include <iostream>
#include "PilhaEncadeada.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {

  PilhaEncadeada wait_for_combat;

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

    wait_for_combat.Empilha(id_ship);
  }

  int option;
  cout << "Enter an option: ";
  cin >> option;
    //int operacao;
  //while(scanf("%d", &operacao) != EOF) {
    //desenvolver o código relacionado as operações a serem realizadas
  //}
  switch (option)
  {
  case 0 :
    /* code */
    break;
  case -1 :
    /* code */
    break;
  case -2 :
    /* code */
    break;
  case -3 :
    /* code */
    break;
  default:
  if ()
  {
    /* code */
  }
  
    break;
  }

  while(!wait_for_combat.Vazia()){
      int x = wait_for_combat.Desempilha();
      cout << "Id ship: ";
      cout << x << endl;
  }
  

  return 0;
}
