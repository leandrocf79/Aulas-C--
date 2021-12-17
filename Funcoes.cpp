#include <iostream>
#include <locale.h>
#include <cmath> // para usar Raiz quadrada, sqrt(), e potencia, pow(2, 3) --> 2**3 

//FUN��ES: Iniciar com letra maiuscula por padr�o.
float Soma(float num1, float num2);
float Subtracao(float num1, float num2);
double Divisao(double num1, double num2);
float Multiplicacao(float num1, float num2);
float Media(float num1, float num2);
double Potencia(double num1, double num2);
float RaizQuadrada(float num1); // <--- unico n�mero
float RaizQuadrada2(float num2);

int main(){
	setlocale(LC_ALL, "portuguese");
	float Num01, Num02;
	std::cout<<"Digite o primero n�mero: ";
	std::cin>>Num01;
	
	std::cout<<"\n\nDigite o segundo n�mero: ";
	std::cin>>Num02;

	std::cout<< "\n\nSoma: "<<Soma(Num01, Num02);
	std::cout<< "\nSubtra��o: "<<Subtracao(Num01, Num02);
	std::cout<< "\nDivis�o: " <<Divisao(Num01, Num02);
	std::cout<< "\nMultiplica��o: "<<Multiplicacao(Num01, Num02);
	std::cout<< "\nM�dia: "<<Media(Num01, Num02);
	std::cout<< "\nPotencia��o: "<<Potencia(Num01, Num02);
	std::cout<< "\nRaiz Quadrada do primeiro n�mero: "<<RaizQuadrada(Num01);
	std::cout<< "\nRaiz Quadrada do segundo n�mero: " <<RaizQuadrada2(Num02)<<"\n";
	std::cout<<std::endl;
system("PAUSE");
return 0;
}


float Soma(float num1, float num2){
	return num1 + num2;
}

float Subtracao(float num1, float num2){
	return num1 - num2;
}

double Divisao(double num1, double num2){
	return num1 / num2;
}

float Multiplicacao(float num1, float num2){
	return num1 * num2;
}

float Media(float num1, float num2){
	return (num1 + num2)/2;
}

double Potencia(double num1, double num2){
	return pow(num1, num2);
}

float RaizQuadrada(float num1){
	return sqrt(num1);
}

float RaizQuadrada2(float num2){
	return sqrt(num2);
}


