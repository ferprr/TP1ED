#include <cstdio>
#include <iostream>
#include "PilhaEncadeada.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {

  PilhaEncadeada wait_for_combat;

  int fleet_size;
  cout << "Enter a size for the fleet: ";
  cin >> fleet_size;
  while (fleet_size<0 || fleet_size>5000) {
    cout << "Size fleet invalid. Enter a number from 0 to 5000.";
    cin >> fleet_size;
  }

  for(int i=0; i < fleet_size; i++){
    int id_nave;
    cin >> id_nave;

    wait_for_combat.Empilha(id_nave);
  }

  while(!wait_for_combat.Vazia()){
      int x = wait_for_combat.Desempilha();
      cout << "Id nave: ";
      cout << x;
  }
  
  //int operacao;
  //while(scanf("%d", &operacao) != EOF) {
    //desenvolver o código relacionado as operações a serem realizadas
  //}
  return 0;
}
