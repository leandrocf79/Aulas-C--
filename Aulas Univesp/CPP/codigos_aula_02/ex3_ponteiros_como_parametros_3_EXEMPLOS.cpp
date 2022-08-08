#include <iostream>

using namespace std;

void valor_alocando_memoria(int* p)  //Ponteiro por valor
{
  p = new int; // Aqui vai chamar para outra regi�o de mem�ria. NADA MUDA FORA DA FUN��O. Esse efeito � somente aqui dentro.
  *p = 7; 
}


void valor_modificando_memoria(int* p)  //Ponteiro por valor 
{
  *p = 8;  // Trocando valor do ponteiro na mesma regi�o de mem�ria.
}


void referencia(int*& p)  // Ponteiro por refer�ncia.
{
  p = new int; // Aqui vai chamar para outra regi�o de mem�ria. POR REFER�NCIA, FORA DA FUN��O, O PONTEIRO QUE CHAMOU TAMB�M VAI APONTAR PARA O NOVO VALOR.
  *p = 9;
}

int main()
{
  int a  = 1;
  int b  = 2;
  int c  = 3; 
  int* p1 = &a;
  int* p2 = &b;
  int* p3 = &c;

  cout <<"Antes: "<<  p1 <<" "<<  p2 <<" "<<  p3 << endl;
  cout <<"Antes: "<< *p1 <<" "<< *p2 <<" "<< *p3 << endl;
  cout << endl;
  
  valor_alocando_memoria(p1); 
  valor_modificando_memoria(p2);
  referencia(p3);  

  std::cout <<"Observe os valores modificados e se houve mudan�a na regi�o, endere�o de mem�ria. 
  cout << "Depois: "<<  p1 <<" "<<  p2 <<" "<<  p3 << endl;
  cout << "Depois: "<< *p1 <<" "<< *p2 <<" "<< *p3 << endl;
  cout << "Depois: "<< a <<" "<< b <<" "<< c << endl;

  return 0;
}
