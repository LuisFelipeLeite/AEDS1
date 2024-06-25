/**
 * Trabalho dos triângulos 
 * Luis Felipe Barbosa Leite 2024.1.08.018  
 * AEDs 1 - 14/03 
*/

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    
  float lado1, lado2,lado3;

  cout << "Digite o tamanho do primeiro lado: ";
  cin>>lado1;
  cout<<"Digite o tamanho do segundo lado: ";
  cin>>lado2;
  cout<<"Digite o tercerio lado: ";
  cin>>lado3;

  if (lado1+lado2<=lado3 || lado1+lado3<=lado2 || lado2+lado3<=lado1 ) {
    cout << "\tNão é um triângulo.\n";
  }else{
    if (lado1==lado2 && lado2==lado3) {
      cout << "\tÉ um triângulo equilátero.\n";
    } else {
      if(lado1==lado2 || lado1==lado3 || lado2==lado3){
        cout << "\tÉ um triângulo Isósceles.\n";
      } else {
        cout<<"\tÉ um triângulo escaleno.\n";
      }
      if (lado1*lado1+lado2*lado2==lado3*lado3 || lado1*lado1+lado3*lado3==lado2*lado2 || lado2*lado2+lado3*lado3==lado1*lado1 ){
        cout<<"\tÉ um triângulo retãngulo.\n";
      }
    }
  }

  return 0;
}
