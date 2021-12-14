#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>      // std::setw 
#include <locale.h>  // acentua��o.

int main(void){
setlocale (LC_ALL, "portuguese");  //Define idioma de acentua��o.   #include <locale.h>   	
char op;
char resposta;
float imc,  peso, altura;


do{ // Cria o loop para a solicitacao se deseja repetir operacao
	
	system("cls");
	printf("\n\t\t Calculadora IMC"); //Cabecalho
	printf("\n\t\t_________________\n\n\n");	
	std::cout<<"\t\tTecle: [1] - Calculadora IMC \n";
	std::cout<<"\t\t       [2] - Sair\n\n\n";
	std::cout<< std::setw(1)<<"Escolha uma op��o para iniciar: ";   // std::setw 
	std::cin>>std::setw(1)>>op;

	switch(op){
	case '1': 
		std::cout<<"\n\nEntre com seu peso em Kg: ";
		std::cin>>peso;
		
		std::cout<<"\nEntre com sua altura: ";
		std::cin>>altura;
		
		imc= peso/(altura*altura);
		std::cout<<"______________________________________________________";
		printf("\n\n\t\tValor do seu IMC: %.2f\n", imc);
		
		if (imc <18.5)
			std::cout<<"\n\t\tMagreza. Est� abaixo do peso ideal.\n______________________________________________________\n\n";
			
		
		else if (imc >=18.5 && imc <25)
			std::cout<<"\n\t\tPeso considerado normal.\n______________________________________________________\n\n";
		
			
		else if (imc >=25 && imc <30)
			std::cout<<"\n\t\tEst� com sobrepeso.\n______________________________________________________\n\n";
		
			
		else if (imc >=30 && imc <35)
			std::cout<<"\n\t\tObesidade grau I.\n______________________________________________________\n\n";
		
			 
		else if (imc >=35 && imc <40)
			std::cout<<"\n\t\tObesidade grau II. Procure ajuda m�dica.\n______________________________________________________\n\n";
		
			
		else
		std::cout<<"\n      Obesidade grau III, tamb�m chamada de m�rbida. \n\n\t   ***Altamente indicada ajuda m�dica.\n______________________________________________________\n\n";
		break;
	
	
	case '2':
		break;	
		
		 	
	default:
		std::cout<<"\n\n** Op��o inv�lida. **\n\n";
		std::cout<<"______________________________________________________\n\n";
		system("PAUSE");
		break;
			
} // chave do switch
	
	std::cout<<"\n\n\tDeseja voltar ao menu inicial?\n\n\tDigite S para sim ou N para n�o: ";
	std::cin>>resposta;
		
} //chave do DO

while (resposta=='s' || resposta=='S' || resposta=='1'); // Aqui vai fazer loop para o DO

//system("PAUSE");

return 0;
}
