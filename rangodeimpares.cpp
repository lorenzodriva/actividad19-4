#include <iostream>
using namespace std;

int main() {

  int valorInicial;
  int valorFinal;
  cout<< "Ingrese el valor inicial: ";
  cin>>valorInicial;
  cout<< "Ingrese el valor final: ";
  cin>>valorFinal;

  if(valorFinal<=valorInicial)
  {
    cout<< "Escriba un valor inical menor y distinto al valor final";
  }else if(valorFinal==(valorInicial+1))
  {
      cout<< "No se pueden expresar enteros impares entre "<<valorInicial<<" y "<<valorFinal;
  }else if((valorFinal==(valorInicial+2))&&((valorInicial%2)==0))
  {
    cout<< (valorInicial+1);
  }else
  {
    for(int i=(valorInicial+1); i<=(valorFinal-1); i++)
      {
        if((i%2)!=0)
        {
          cout<<i<<endl;
        }
      }
  }
  return 0;
}
