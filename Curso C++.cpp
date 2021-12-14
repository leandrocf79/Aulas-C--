// PRATICANDO C e C++ com as aulas distribuidas no https://github.com/professormarcosp/AprendaCParaGamesUE4


                           ********** OBSERVA��O***********

O conte�do disponibilizado aqui serve para ajudar na hora do trabalho,portanto, 
este n�o se trata de um arquivo execut�vel.
Ser� atualizado constantemente e por isso pode apresentar desorganiza��o tempor�ria.
*************************************************************************************

//ACENTUA��O

#include <locale.h>  // acentua��o.

int main() {
	setlocale(LC_ALL, "portuguese");  //Define idioma de acentua��o.   #include <locale.h> 
	std:: ...
}

						   
***************************



#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>

// Comentario de uma linha
/* Comentario
de 
varias 
linhas*/

int main(int argc, char** argv) {
// o primeiro digito eh a cor do fundo(4) e a segunda (7) do texto
system("color 53");	
std::cout<<"Teste"<< std::endl;	
std::cout
	<<"1"<< std::endl
	<<"  2"<<std::endl
	<<"    3\n"<<std::endl
	<<"       4"<<"\n"
	<<"          5"<<
	std::endl;

std::cout<<"Eh possivel"<<std::endl<<"dar ENTER no texto"<<std::endl<<"mesmo escrevendo tudo na mesma"<<std::endl<<"linha"<< std::endl;
	
system("pause");
system("color 07");

//************

	int numero;
	numero = 45;
	
	std::cout<<"\n\n\nValor do numero:"<<numero<<std::endl;
	std::cout<<"Tamanho na memoria da variavel numero: "<<sizeof(numero)<<" Bytes"<<std::endl;
	std::cout<<"Endereco carregado na memoria: "<< &numero 
	<<"\n\n\n";
	system("PAUSE");

//************

int Num_Computadores=100;
int Serie_Computadores=11111;

std::cout<<"\n\n*****************************************"<<std::endl;
std::cout<<"\tNum_Computadores: "<<Num_Computadores<<std::endl;
std::cout<<"\tSerie_Computadores: "<<Serie_Computadores<<std::endl;
std::cout<<"*****************************************\n\n"<<std::endl;
system("PAUSE");

//*************

int Num;
	char Caractere = 'A';
        Num = Caractere;
        std::cout << "\nValor do numero do caracter A na tabela ASCII: "<< Num<<"\n\n";
 		system("PAUSE");

/* Enquanto tiver -->      int Num;
RESPOSTA � 65, pois N�mero � um inteiro e neste caso vai receber o 
valor contido na vari�vel Caractere. Como a vari�vel caractere cont�m 
dentro dela a letra A ser� coletado o valor inteiro de A na tabela ASCII que � 65

*** Se colocar -->     char Num;
a RESPOSTA ser� a letra A
*/

//***************************************
	if (system("cls")){
	}else{
system("PAUSE");}

int numero1 = 55;
float numero2 = 72.95;
double numero3 = 34.34536657567567456754453453452635756;
	std::cout<<"\n\n************************************************\n";
	std::cout<<"int";
	std::cout<<"\n\n\nValor do numero1: "<<numero<<std::endl;
	std::cout<<"Tamanho na memoria da variavel numero 1:  "<<sizeof(numero1)<<" Bytes"<<std::endl;
	std::cout<<"Endereco carregado na memoria: "<< &numero1 
	<<"\n\n";
	
	std::cout<<"\n_______________________\n";
	std::cout<<"float";
	std::cout<<"\n\n\nValor do numero2: "<<numero2<<std::endl;
	std::cout<<"Tamanho na memoria da variavel numero 2:  "<<sizeof(numero2)<<" Bytes"<<std::endl;
	std::cout<<"Endereco carregado na memoria: "<< &numero2<<"\n\n";
	
	std::cout<<"\n_______________________\n";
	std::cout<<"double";
	std::cout<<"\n\n\nValor do numero3: "<<numero3<<std::endl;
	std::cout<<"Tamanho na memoria da variavel numero 3:  "<<sizeof(numero3)<<" Bytes"<<std::endl;
	std::cout<<"Endereco carregado na memoria: "<< &numero3<<"\n\n";
	std::cout<<"\n************************************************\n\n";
	system("PAUSE");


//***************************************

//#include <iomanip>
std::cout<<"\n_______________________\n";
std::cout<<"Para double, neste caso, foi incluido iomanip"<<std::endl;
std::cout<<"\ndouble com include iomanip e setprecision (10)";



// incluso o     std::setprecision (10) 
	std::cout<<"\n\n\n\tValor do numero3: "<< std::setprecision (10)<<numero3<<std::endl;
	std::cout<<"\tTamanho na memoria da variavel numero 3:  "<<sizeof(numero3)<<" Bytes"<<std::endl;
	std::cout<<"\tEndereco carregado na memoria: "<< &numero3<<"\n\n";
	std::cout<<"\n************************************************\n\n";
system("PAUSE");
	if (system("cls")){
	}else{system("PAUSE");}

//****************************************

#include <iostream>

int main()
{
	std::cout << "Tamanho char : " << sizeof(char) << std::endl;
	std::cout << "Tamanho int : " << sizeof(int) << std::endl;
	std::cout << "Tamanho short int : " << sizeof(short int) << std::endl;
	std::cout << "Tamanho long int : " << sizeof(long int) << std::endl;
	std::cout << "Tamanho long long int : " << sizeof(long long int) << std::endl;
	std::cout << "Tamanho float : " << sizeof(float) << std::endl;
	std::cout << "Tamanho float : " << sizeof(long float) << std::endl;
	std::cout << "Tamanho double : " << sizeof(double) << std::endl;
	std::cout << "Tamanho long double : " << sizeof(long double) << std::endl;
	std::cout << "Tamanho wchar_t : " << sizeof(wchar_t) << std::endl;
	system("PAUSE");

	return 0;
}

/*C�digo alterado devido a excelente contribui��o do Aluno Thiago Castro de meu curso na UDEMUY que indicou que a sa�da estava incorreta para os modificadores unsigned
Fiz a altera��o e agora est� OK*/
#include <limits>
#include <iostream>

int main()
{
	// \t insere uma tabula��o 
	std::cout << "Tipo\t\t Minimo\t\t Maximo\n\n";

	std::cout << "bool\t\t"
		<< +std::numeric_limits<bool>::min() << '\t' << '\t'
		<< +std::numeric_limits<bool>::max() << '\n';
	std::cout << "char\t\t"
		<< +std::numeric_limits<char>::min() << '\t' << '\t'
		<< +std::numeric_limits<char>::max() << '\n';
	std::cout << "unsigned char\t"
		<< +std::numeric_limits<unsigned char>::min() << '\t' << '\t'
		<< +std::numeric_limits<unsigned char>::max() << '\n';
	std::cout << "short\t\t"
		<< +std::numeric_limits<short>::min() << '\t' << '\t'
		<< +std::numeric_limits<short>::max() << '\n';
	std::cout << "unsigned short\t"
		<< +std::numeric_limits<unsigned short>::min() << '\t' << '\t'
		<< +std::numeric_limits<unsigned short>::max() << '\n';
	std::cout << "int\t\t"
		<< +std::numeric_limits<int>::min() << '\t'
		<< +std::numeric_limits<int>::max() << '\n';
	std::cout << "unsigned int\t"
		<< +std::numeric_limits<unsigned int>::min() << '\t' << '\t'
		<< +std::numeric_limits<unsigned int>::max() << '\n';
	std::cout << "long int\t"
		<< +std::numeric_limits<long int>::min() << '\t'
		<< +std::numeric_limits<long int>::max() << '\n';
	std::cout << "unsigned long int "
		<< +std::numeric_limits<unsigned long int>::min() << '\t' << '\t'
		<< +std::numeric_limits<unsigned long int>::max() << '\n';
	std::cout << "long long int\t"
		<< +std::numeric_limits<long long int>::min() << '\t' << '\t'
		<< +std::numeric_limits<long long int>::max() << '\n';
	std::cout << "float\t\t"
		<< +std::numeric_limits<float>::min() << '\t' << '\t'
		<< +std::numeric_limits<float>::max() << '\n';
	std::cout << "double\t\t"
		<< +std::numeric_limits<double>::min() << '\t' << '\t'
		<< +std::numeric_limits<double>::max() << '\n';
	std::cout << "long double\t"
		<< +std::numeric_limits<long double>::min() << '\t' << '\t'
		<< +std::numeric_limits<long double>::max() << '\n';
	system("PAUSE");

}

#include <iostream>
//Para usar #define precisa colocar aqui abaixo dos includes
//#define NUM_VIDAS 10
//Observe que n�o tem ; no final!!!

int main()
{
	const int NUM_VIDAS = 10;
	int TotalDeVidas;
	TotalDeVidas = NUM_VIDAS - 1;
	std::cout << "Total de Vidas: " << TotalDeVidas << "\n";
	std::cout << "Valor Constante NUM_VIDAS: " << NUM_VIDAS << "\n";
	std::cout << "Endere�o de Mem�ria de NUM_VIDAS: " << &NUM_VIDAS << "\n";
	system("PAUSE");

}


Para ajustar de forma simples voc� pode usar espa�os via string - std::string(30, ' ')
Neste caso voc� est� colocando 30 caracteres espa�o ' ' na tela
veja o c�digo e sa�da dele e lembre de colocar #include <string>
#include <iostream>
#include <string>

#include <iostream>     // std::cout, std::endl
#include <iomanip>      // std::setw      std::cout<< std::setw(10)<<"Escolha uma opcao para iniciar: ";

int main()
{
int Numero01, Numero02;
std::cout << std::string(30, ' ') << "Digite o primeiro numero: ";
std::cin >> Numero01;
std::cout << std::string(30, ' ') << "Numero01 = " << Numero01 << std::endl;
std::cout << std::string(30, ' ') << "Digite o segundo numero: ";
std::cin >> Numero02;
std::cout << std::string(30, ' ') << "Numero02 = " << Numero02 << std::endl << std::string(30, ' ');
system("PAUSE");
}
Existem claro outras op��es mais elaboradas
Existe uma fun��o de nome std::setw(n ). A fun��o setw recebe como par�metro o tamanho do campo de texto que voc� deseja colocar na tela e justifica este texto � direita. Portanto na fun��o setw(n) este n
indica o tamanho de caracteres que o campo de sa�da do fluxo cout vai possuir, ou seja, define a largura do campo a ser usada nas opera��es de sa�da.
Como assim?
Considere e execute o c�digo abaixo
include <string>
#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
cout << setw(10) << "ABCDEFGHJ" << "\n";
system("PAUSE");
}
Observe que no c�digo acima queremos colocar na tela as letras ABCDEFGHIJ que possui 10 caracteres . Ocorre que se fizermos setw(10) n�o desloca nada, pois voc� definiu que o campo deve ter a largura de 10
caracteres, ou seja que o campo de sa�da do fluxo de cout deve ter tamanho 10. Mas ABCDEFGHIJ j� tem 10 de largura/tamanho. Logo a sa�da n�o desloca nada pois o texto vai se encaixar nesta largura de
tamanho 10 e n�o sobra nada.
Agora tente colocar setw(11) e veja o que acontece. Neste caso o tamanho, a largura que especificou em setw � 11. Como o texto tem 10 caracteres o comando setw justifica � direita este texto e o desloca uma
unidade
E se voc� colocar setw(20)? Veja que agora a largura do fluxo ser� 20 e ai o texto ser� deslocado 10 e ocupar� as 10 posi��es restantes � direita totalizando a largura de 20 especificada por setw(20)
Voc� pode usar o c�digo abaixo para por exemplo centralizar seu texto atrav�s da fun��o std::setw
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
 string str = "Texto Centralizado";
 int console_width = 120;// Largura do seu console.
 int len = str.length();// Tamanho da String
 cout << setw((console_width / 2) + (len / 2)) << str << endl;
 //ou seja o mesmo que 120/2 = 60 ou setw(60);
 system("PAUSE");
}
Observe que setw((console_width / 2) + (len / 2)) pega o tamanho(largura) da tela que � 120 e dividi por dois. Logo ser� 120/2 = 60. Por�m ainda temos que considerar o tamanho do texto que tem 18 contando
com o caractere espa�o. Ent�o para o texto ficar centralizado vai ficar metade na esquerda do centro e metade na direita do centro da tela. Assim temos que somar ao setw o tamamho da tela/2 mais o
tamamhodo texto/2.
Neste caso o texto ser� centralizado, mas estamos usando o que chamados de NUMERO M�GICO para a largura do console e isso n�o � recomendado. Mesmo porque a largura de cada console pode variar, no
geral � 40 mais no meu coloquei 120. Para funcionar voc� precisa configurar o tamanho do console como 120.
Para ver ou alterar a largura do console clique com bot�o direito do mouse sobre a barra branca e escolha propriedades
V� at� a aba layout e verifique que podemos ver ou alterar a largura e at� altura do terminal. A largura ser� usada no c�lculo para definir a posi��o do texto centralizado na tela
Execute o c�digo e veja a sa�da
Mas e se voc� quiser ao executar o programa j� modificar automaticamente o tamanho do console windows (CMD) ou prompt de comandos ? Voc� pode modificar as linhas e colunas da tela com o comando
system assim:
system("MODE CON: COLS=80 LINES=40");
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
 system("MODE CON: COLS=80 LINES=40"); // J� coloca a janela com 80 de largura e 40 altura
 string str = "Texto Centralizado";
 int console_width = 80;// Largura do seu console.
 int len = str.length();// Tamanho da String
 cout << setw((console_width / 2) + len / 2) << str << endl;
 system("PAUSE");
}
Execute o c�digo acima e veja o resultado
Obs: Caso voc� receba a informa��o de aviso(Warning) do compilador
fa�a o seguinte:
isso � apenas um aviso que indica que os valores limites das vari�veis podem ser ultrapassados pois s�o do tipo inteiro simples. Voc� pode seguir com o programa.
Mas se quiser que o erro desapare�a voc� pode fazer um CAST para que os valores sejam de um tipo mais robusto com precis�o maior de valores
fa�a o seguinte coloque desta forma a linha do c�lculo e compile
cout << setw(((unsigned __int64)console_width / 2) + (unsigned __int64)(len / 2)) << str << endl;
Veja que agora o aviso n�o aparece mais
Veja o que informa a Microsoft sobre o tipo __int64, basicamente � um tipo para valores alt�ssimos de vari�veis
Link para o artigo: https://docs.microsoft.com/pt-br/cpp/cpp/int8-int16-int32-int64?view=msvc-160
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Como podemos obter automaticamente o tamanho da tela do console?
Voc� pode usar a API do windows.h
obs: API(Interface de Programa��o de Aplicativos) � um conjunto de fun��es e padr�es de programa��o disponibilizadas por uma plataforma de software(neste caso a plataforma windows). Ou seja, os
programadores e programadoras do sistema operacional windows nos fornecem diversas fun��es, tipos de dados, etc que podemos usar para usar recursos do sistema operacional windows.
Veja
#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>
using namespace std;
int main()
{
 HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE); // Aqui voc� obtem a janela de Console e coloca em screen um endere�o para manipular(HANDLE) esta janela
 COORD max_size = GetLargestConsoleWindowSize(screen);
 //max_size ter� as coordenadas X (Largura) e Y (Altura)
 //Ent�o max_size.X ser� a Largura e max_size.Y ser� a altura
 //Precisamos apenas da Largura
 string str = "Texto Centralizado";
 int LarguraConsole = max_size.X;// Largura do seu console obtida automaticamente.
 int Tam = str.length();// Tamanho da String
 if (Tam % 2 == 0) str += " ";
 cout << setw((LarguraConsole / 2) + Tam / 2) << right << str << endl;
 system("PAUSE");
}
H� ainda o que voc� deseja que � colocar o texto em local espec�fico da tela
Na linguagem C existe um fun��o de nome gotoxy mas em C++ podemos criar a pr�pria fun��o usando a API do windows.h
#include <iostream>
#include <windows.h>
COORD GotoXY(int x, int y)
{
 HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
 COORD pos;
 pos.X = x;
 pos.Y = y;
 SetConsoleCursorPosition(hConsole, pos);
 return pos;
}
int main()
{
 COORD Posicao;
 Posicao = GotoXY(5, 5);
 std::cout << "TEXTO POSICIONADO";
 GotoXY(5, 6);
 std::cout << "Texto foi Deslocado " << Posicao.X << " (De largura ou coluna) e " << Posicao.Y << " de altura ou linha " << "\n";
 system("PAUSE");
 return 0;
}
Veja a sa�da
Voc� ainda pode usar bibliotecas feitas por terceiros e que simplificam o uso de gotoxy
v� at� o site
https://tapiov.net/rlutil/
Clique em .zip para fazer o download de um arquivo zipado
Descompacte e copie o arquivo rlutils.h para dentro da pasta de seu projeto
Agora dentro do visual studio clique com bot�o direito do mouse em header files e escolha ADD->Existing item
Escolha o arquivo que voc� copiou e clique no bot�o ADD
Veja que aparece agora
Ent�o no c�digo basta incluir entre aspas duplas este arquivo "rlutils.h". Em aspas duplas pois est� no mesmo diret�rio
Veja o c�digo bem mais simplicado
#include <iostream>
#include "rlutil.h"
int main()
{
 gotoxy(15,5);
 std::cout << "TEXTO POSICIONADO";
 gotoxy(15,6);
 system("PAUSE");
 return 0;
}

#include <iostream>

int main()
{
	int Numero01, Numero02;
	int Resultado;
	std::cout << "Digite o primeiro numero: ";
	std::cin >> Numero01;
	std::cout << "Numero01 = " << Numero01 << std::endl;
	std::cout << "Digite o segundo numero: ";
	std::cin >> Numero02;
	std::cout << "Numero02 = " << Numero02 << "\n";
	Resultado = Numero01 % Numero02; //   % mostra o resto da divisao
	std::cout << "A Resto da Divisao inteira dos dois Numeros: " << Resultado << "\n";
	system("PAUSE");
}



Para receber m�ltiplas entradas com std::cin basta colocar as entradas separadas com >>

Veja exemplo a seguir que consegue receber quatro n�meros em uma �nica linha de std::cin

std::cin >> Num1 >> Num2 >> Num3 >> Num4;

#include <iostream>
int main()
{
	int Num1, Num2, Num3, Num4;
	
	std::cout << "Digite Quatro numeros separados por espaco e pressione ENTER: ";
	
	std::cin >> Num1 >> Num2 >> Num3 >> Num4;
	
	std::cout << "\nSoma = " << (Num1 + Num2 +Num3 + Num4) << std::endl;
 
	return 0;
}


Para receber m�ltiplas entradas com std::cin basta colocar as entradas separadas com >>

Veja exemplo a seguir que consegue receber quatro n�meros em uma �nica linha de std::cin

std::cin >> Num1 >> Num2 >> Num3 >> Num4;

#include <iostream>
int main()
{
	int Num1, Num2, Num3, Num4;
	
	std::cout << "Digite Quatro numeros separados por espaco e pressione ENTER: ";
	
	std::cin >> Num1 >> Num2 >> Num3 >> Num4;
	
	std::cout << "\nSoma = " << (Num1 + Num2 +Num3 + Num4) << std::endl;
 
	return 0;
}






#include <iostream>

int main()
{
	int Num1, Num2;
	char Operacao;
	std::cout << "\nDigite Um Numero: ";
	std::cin >> Num1;
	std::cout << "\nDigite Outro Numero: ";
	std::cin >> Num2;
	std::cout << "\nQual Operacao Deseja Efetuar? \n+ Adicao \n- Substracao \n* Multiplicao\n/ Divisao?";
	std::cout << "\nDigite sua opcao: ";
	std::cin >> Operacao;

	//O Usuario vai digitar um caracter. Como um caracter � mapeado como inteiro da tabela ascii o switch este tipo de express�o.
	//Logo Operacao pode ser + - * /
	
	switch (Operacao)
	{
	//Caso seja + esta linha ser� executada
	case '+': 
		std::cout << "\nSoma de Num1 + Num2 = " << Num1 + Num2;
		break;
	case '-':
		std::cout << "\nSubtracao de Num1 - Num2 = " << Num1 - Num2;
		break;
	case '*':
		std::cout << "\nMultiplicacao de Num1 * Num2 = " << Num1 * Num2;
		break;
	case '/':
		std::cout << "\nDivisao de Num1 / Num2 = " << Num1 / Num2;
		break;
	//Caso Operador n�o tenha um valor de nenhum destas casos + - * ou /
	//voc� pode colocar de forma opcional um valor que padr�o(default)
	//que ser� executado se nenhum dos casos sejam v�lidos
	default:
		std::cout << "\nVoce nao digitou um operador valido! ";
		break;
	}
	std::cout << "\n";
	system("PAUSE");

}








Embora isso seja poss�vel e interessante para quem estar testando um programa, recomendo que na vers�o final voc� utilize cada entrada recebida separadamente para deixar o c�digo mais leg�vel....

Abra�o

Como voc� faria para n�o encerrar o programa depois do resultado?

Neste caso  seria com loop. Vai aparecer uma mensagem para o usu�rio e ai voc� indica S para Continuar no programa Ou  N para Sair

Ou seja um loop usando o do-while

veja o c�digo

#include <iostream>
#include <iomanip> // necess�rio para uso do set precision
 
int main()
{
	setlocale(LC_ALL, "portuguese");
	float Num1, Num2, Num3;
	float Media = 0.0;
	char Resposta;
	do // Cria loop at� que Resposta seja S e ai sai do loop
	{
		std::cout << "Digite o Primeiro N�mero: ";
		std::cin >> Num1;
		std::cout << "Digite o Primeiro N�mero: ";
		std::cin >> Num2;
		std::cout << "Digite o Primeiro N�mero: ";
		std::cin >> Num3;
 
		Media = (Num1 + Num2 + Num3) / 3;
 
		std::cout << "N�meros Digitados: " << Num1 << " " << Num2 << " " << Num3 << "\n";
		std::cout << "M�dia dos N�meros: " << std::fixed << std::setprecision(2) << Media << "\n";
		std::cout << "\nDeseja calcular outra M�dia Artm�tica? (Responda S para Sim e N para n�o:) ";
		std::cin >> Resposta;
	} while (Resposta == 'S' || Resposta == 's'); // Sai do loop apenas de o OU for falso ou seja se
//Se resposta for diferente de S e diferente de s. Lembre que o OU || s� ser� falso de todas as senten�as forem //falsas. Assim se o usu�rio digitar N ou qualquer outra coisa o programa sair� mas se digitar S ou s o programa volta e pede novamente os n�meros.
 
	std::cout << "\nSaindo do programa...";
	system("Pause");
	return 0;
} 


return 0;
}





#include <iostream>

int main()
{
	int Numero01, Numero02;
	bool Comparacao;
	std::cout << "Digite o primeiro Numero: ";
	std::cin >> Numero01;
	std::cout << "Numero01 = " << Numero01 << std::endl;	
        std::cout << "Digite o segundo Numero: ";
	std::cin >> Numero02;
	std::cout << "Numero02 = " << Numero02 << std::endl;	
	// = � comando de atribui��o
	//== � operador de igualdade. Para verificar se o operando � igual a outro operando
	Comparacao = (Numero01 == Numero02);
	std::cout << "Numero01 igual a Numero02?:  " << Comparacao << "\n";
	Comparacao = (Numero01 != Numero02);
	std::cout << "Numero01 Diferente a Numero02?:  " << Comparacao << "\n";

	Comparacao = (Numero01 > Numero02);
	std::cout << "Numero01 Maior que Numero02?:  " << Comparacao << "\n";
	Comparacao = (Numero01 < Numero02);
	std::cout << "Numero01 Menor que Numero02?:  " << Comparacao << "\n";

	Comparacao = (Numero01 >= Numero02);
	std::cout << "Numero01 Maior ou igual a Numero02?:  " << Comparacao << "\n";
	Comparacao = (Numero01 <= Numero02);
	std::cout << "Numero01 Menor ou igual a Numero02?:  " << Comparacao << "\n";

	system("PAUSE");
	return 0;
}


#include <iostream>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	double Numero;
	bool ResultadoLogico, ResultadoLogico2;
	std::cout << "Digite um Numero: ";
	std::cin >> Numero;
	std::cout << "True = 1 e False = 0" << "\n";
	//A vari�vel booleana MaiorQue100 ir� receber
	//o valor l�gico da compara��o (Numero > 100)
	// Numero � maior que cem? 
	ResultadoLogico = ((Numero > 100) && (Numero != 0)) ;
	std::cout << "O Resultado L�gico da Express�o ((Numero > 100) && (Numero != 0)) �: " << ResultadoLogico <<  std::endl;
	ResultadoLogico2 = ((Numero == 100) || (Numero > 200)) && (Numero < 1000);
	std::cout << "O Resultado L�gico da Express�o ((Numero == 100) || (Numero > 200)) && (Numero < 1000); �: " << ResultadoLogico2 << std::endl;
	system("PAUSE");
}





#include <iostream>
#include <tchar.h>
#include <string>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	//Voc� pode usar ( ) para iniciar vari�veis com valores literais
	//{  } � inicializa��o uniforme, permite tanto iniciar tanto valores literais (int, float, caractere, quanto valores escalares, vetores, enums etc.
	int NumeroInteiro{ 12 };
	float NumeroReal{ 34.56 };
	char Caractere{ 'c' };
	//String � um cadeia de caracteres, � um texto e deve estar entre aspas duplas "texto da string"
	//Para declarar uma string usamos std::string
	std::string Texto{ "Vou Aprender C++ e descobrir o lado sombrio da for�a!" };
	//%d indica que voc� quer que seja colocado na string:
	//"Valor N�mero Inteiro = %d " o valor da vari�vel NumeroInteiro
	std::printf("Valor Inteiro: %d - Real: %.2f - Caractere: %c - Texto: %s \n", NumeroInteiro, NumeroReal, Caractere, Texto.c_str());
	std::cout << "Texto da String: " << Texto << "\n";

	std::printf("O Valor do Caractere Digitado: %c na Tabela ASCII �: %d \n", Caractere, Caractere);
	/*%d N�mero decimal inteiro (int).
	%f	 N�mero decimal de ponto flutuante. serve tanto para float como para double.
	%lf  Serve para double. (l-long , f-float - lf)
	%c	 Caractere: imprime o caractere que tem o c�digo ASCII correspondente ao valor dado.
	%s	 Sequ�ncia de caracteres (string, em ingl�s).
	*/

	system("PAUSE");
	return 0;
}




//use este c�digo se estiver usando DEVC++
#include <iostream>
#include <string>
/*exclua tchar.h*/
#include <locale.h>
/*inclua cstdio para que std::printf funcione no DEV*/
#include <cstdio>


int main()
{
	/*Coloque desta forma para acentuar*/
	
	setlocale(LC_ALL, ("portuguese"));
	//Voc� pode usar ( ) para iniciar vari�veis com valores literais
	//{  } � inicializa��o uniforme, permite tanto iniciar tanto valores literais (int, float, caractere, quanto valores escalares, vetores, enums etc.
	//Coloque o igual antes das chaves
	int NumeroInteiro = { 12 };
	float NumeroReal = { 34.56 };
	char Caractere = {'c'};
	//String � um cadeia de caracteres, � um texto e deve estar entre aspas duplas "texto da string"
	//Para declarar uma string usamos std::string
	//Aqui coloque par�nteses ao inv�s de chaves
	std::string Texto = ("Vou Aprender C++ e descobrir o lado sombrio da for�a!");
	//%d indica que voc� quer que seja colocado na string:
	//"Valor N�mero Inteiro = %d " o valor da vari�vel NumeroInteiro
	std::printf("Valor Inteiro: %d - Real: %.2f - Caractere: %c - Texto: %s \n", NumeroInteiro, NumeroReal, Caractere, Texto.c_str());
	std::cout << "\nTexto da String: " << Texto << "\n";

	std::printf("O Valor do Caractere Digitado: %c na Tabela ASCII �: %d \n", Caractere, Caractere);
	/*%d N�mero decimal inteiro (int).
	%f	 N�mero decimal de ponto flutuante. serve tanto para float como para double.
	%lf  Serve para double. (l-long , f-float - lf)
	%c	 Caractere: imprime o caractere que tem o c�digo ASCII correspondente ao valor dado.
	%s	 Sequ�ncia de caracteres (string, em ingl�s).
	*/

	system("PAUSE");
	return 0;
}


Exemplo de um c�digo onde n�o importa se � pr� ou p�s-fixado

//p�s fixado
int num1 = 20;
num1++;
std::cout << num1;
 
pr�-fixado
int num1 = 20;
++num1;
std::cout << num1;


Veja que em ambos os c�digos acima n�o importa se � pr� ou p�s fixado pois, isso n�o ir� impactar no resultado!

Em ambos os casos num1++ ou ++num1 ser� o mesmo que num1 =  num + 1;

como aparece sozinho o compilador ir� passar esta linha de execu��o de c�digo e colocar�  na tela o valor de num1 adicionado de 1


********

Contudo  existem casos que o compilador precisar� saber se � para incrementar antes ou depois a vari�vel.

Observe este dois exemplos

//p�s fixado
int num1 = 20;
std::cout << num1++;
 
pr�-fixado
int num1 = 20;
std::cout << ++num1;
Agora as express�es num1++ e ++num1 aparecem como sa�da da fun��o cout. Sendo assim o compilador precisar� analisar como estas express�es pr� e p�s ser�o avaliadas

No caso da p�s-fixada a sa�da ser� 20 e depois o num1 ser� incrementado na mem�ria passando a ser 21

ent�o p�s fixado � o mesmo que dizer: use o valor atual da vari�vel num1 e s� depois incremente o valor dela na mem�ria

� como se tiv�ssemos simplificado o seguinte c�digo

std::cout << num1;
num1 = num1 + 1;
� exatamente assim que � o comportamento do operador de incremento p�s-fixado. Ser� usado primeiro o valor atual da vari�vel e s� depois esta vari�vel ser� incrementada

Logo 20 ir� para tela e depois num1 ser� 20+1 que � 21 e este valor ser� colocado na mem�ria em num1

Ou seja, no incremento p�s-fixado o compilador vai logo na mem�ria e verifica o valor atual de num1 e usa este valor em cout. Somente depois disso o valor de num1 � incrementado e passa a ser 21.

***************




J� na outra abordagem pr�-fixada temos

std::cout << ++num1;

Neste caso, temos o operador de incremento pr�-fixado

isso quer dizer que primeiro ser� feito o incremento da vari�vel para somente depois usar o valor desta vari�vel

� como se esta instru��o de c�digo std::cout << ++num1; fosse uma simplifica��o de

num1 = num1 + 1;
std::cout << num1
Logo primeiro num1 que � 20 ser� incrementado e fica com o valor 21 na mem�ria

e depois isso � mostrado este valor 21  de num1 na tela

Ou seja, no incremento pr�-fixado o compilador primeiro faz logo a opera��o de incremento e muda o valor da vari�vel na mem�ria para somente depois usar o valor desta vari�vel na mem�ria que neste caso colocar� 21 na tela

IMPORTANTE: Em programa��o existem comandos que efetivamente mudam os valores das vari�veis na mem�ria e existem outros comandos que apenas usam este valor da vari�vel sem mudar nada na mem�ria.

Como assim?

Vamos a um exemplo:

Eu comentei e j� ensinei que os �ndice de um array ou vetor come�am com zero, mas para o usu�rio eles come�am em 1

Por�m n�o � natural pedirmos ao usu�rio que digite o n�mero 0(zero):

Assim podemos recorrer a uma instru��o que pegue o  valor do �ndice somado a 1 e mostre na tela adequadamente para o o usu�rio desta forma: Digite o Numero 1, 2, 3, 4 etc

S� que precisamos usar os �ndices no c�digo come�ando em zero e ai fazemos isso a seguir

int Numeros[5];
for (int i=0; i < 5; i++) 
{
 std::cout << "Digite o Numero" << i+1;
 std::cin >> Numero[i]; 
} 
no caso acima temos a express�o i+1

i+1 apenas est� utilizando o valor de i somado a 1

n�o existe atribui��o a alguma lugar na mem�ria, logo o valor de i n�o ser� alterado!

O valor de i seria alterado somente se tiv�ssemos

i = i + 1; ou i++ pois i++ ou ++i � o mesmo que i = i +1

Veja que neste caso i = i + 1 ou i++ ou ainda ++i voc� est� indicando que se pegue o valor de i somente com 1 e coloque o resultado na vari�vel i. Existe efetivamente a atribui��o de uma valor a uma regi�o da mem�ria

i receba i + 1

Ent�o desta forma vai mudar o valor de i na mem�ria pois existe uma atribui��o

Por�m apenas i+1 solto n�o muda nada na mem�ria e assim podemos usar apenas o valor de i sem modificar seu valor

Quando o loop for vai para i++ ai sim o valor de i ser� modificado pois i++ � o mesmo que i = i +1 e neste caso o compilador vai modificar o valor de i a cada passada(itera��o) do loop for

Ent�o ser� assim a cada passada do loop for

para i = 0

std::cout << "Digite o Numero" << 0+1 que � 1;

std::cin >> Numero[0];

Na tela Digite o Numero1

mas lembre que i+1 n�o altera o valor de i

E ent�o o loop for volta e encontra i++

ai sim o i passa a ser i = i +1 ou i = 0 + 1 que � 1



para i= 1

std::cout << "Digite o Numero" << 1+1 que � 2;

std::cin >> Numero[1];

Na tela Digite o Numero2

mas lembre que i+1 n�o altera o valor de i

E ent�o o loop for volta e encontra i++

ai sim o i passa a ser i = i +1 ou i = 1 + 1 que � 2



para i= 2

std::cout << "Digite o Numero" << 2+1 que � 3;

std::cin >> Numero[2];

Na tela Digite o Numero3

mas lembre que i+1 n�o altera o valor de i

E ent�o o loop for volta e encontra i++

ai sim o i passa a ser i = i +1 ou i = 2 + 1 que � 3



para i= 3

std::cout << "Digite o Numero" << 3+1 que � 4;

std::cin >> Numero[3];

Na tela Digite o Numero4

mas lembre que i+1 n�o altera o valor de i

E ent�o o loop for volta e encontra i++

ai sim o i passa a ser i = i +1 ou i = 3 + 1 que � 4



para i= 4

std::cout << "Digite o Numero" << 4+1 que � 5;

std::cin >> Numero[4];

Na tela Digite o Numero4

mas lembre que i+1 n�o altera o valor de i

E ent�o o loop for volta e encontra i++

ai sim o i passa a ser i = i +1 ou i = 4 + 1 que � 5



para i =5 para o for pois i < 5 ou 5 < 5 � falso e o for loop � encerrado



Vamos imaginar agora este mesmo c�digo apenas modificando i+1 por i++



int Numeros[5];
for (int i=0; i < 5; i++) 
{
 std::cout << "Digite o Numero: " << i++;
 std::cin >> Numero[i]; 
} 


Neste caso  std::cout << "Digite o Numero: " << i++; seria o mesmo que

std::cout << "Digite o Numero: " << i = i + 1;

agora voc� est� modificando o valor de i na mem�ria



para i = 0

std::cout << "Digite o Numero" << 0+1 que � 1;

std::cin >> Numero[0];

Na tela Digite o Numero1

mas lembre que i++ altera o valor de i que vai ser i = 0 +1 que passa a ser 1

E ent�o o loop for volta e encontra i++

ai o i passa a ser i = 1 +1 ou i = 1 + 1 que � 2 logo i passa a ser 2



para i = 2

std::cout << "Digite o Numero" << 2+1 que � 3;

std::cin >> Numero[2];

Na tela Digite o Numero3

mas lembre que i++ altera o valor de i que vai ser i = 2 +1 que passa a ser 3

E ent�o o loop for volta e encontra i++

ai o i passa a ser i = 3 +1 ou i = 4  logo i passa a ser 4

e por ai vai e por isso , i = 0,2,4 pois o operador de incremento e decremento MODIFICA o valor da vari�vel incrementada ou decrementada da mem�ria, e apenas vai ser decidido quando isso ocorre(pr� e p�s-fixado)

claro que usar desta forma � incorreto para este caso pois ir� "bagun�ar" o �ndice i que controla o loop for



Vamos agora a  um exemplo de operadores de incremento com dois n�meros



int num1{10};
int num2{20}
 
num1 = num2++;
std::cout << num1 << "-" << num2;
A sa�da acima ser� 20 e 21

Vamos analisar

num1 = num2++;

acima temos um caso de incremento p�s-fixado logo como disse mais acima primeiro usa-se o valor da vari�vel e somente depois incrementa o valor desta vari�vel

logo a express�o num1 = num2++;

� o mesmo que

num1 = num2;
num2 =  num2 + 1;
std::cout << num1 << "-" << num2;
Veja que num1 recebe primeiro o valor contido na mem�ria de num2 e somente depois num2 ser� incrementado.

Isso segue a instru��o de incremento p�s-fixado

e se fosse assim?

int num1{10};
int num2{20}
 
num1 = ++num2;
std::cout << num1 << "-" << num2;
A sa�da acima ser� 21 e 21

Agora temos o incremento pr�-fixado e com isso primeiro a vari�vel deve ser incrementada na mem�ria para somente depois ser usado seu valor na mem�ria j� incrementado

� como se fosse assim:

num2 = num2 + 1;
num1 = num2;
std::cout << num1 << "-" << num2;
pois agora � pr�-fixado

Obs: Apesar de parecer uma simples simplifica��o estes comandos s�o importante e bem utilizados em estrutura de dados, aritm�tica de ponteiros e v�rios outros momentos de implementa��o de c�digo C++




************************

#include <iostream>
#include <string>

int main()
{
	bool bFezSol, bCarroPronto, bSalarioDepositado;
	bool bAcesso;
	std::string SenhaDeAcesso = "cmaismais";
	std::string SenhaDigitada;

	std::cout << "Digite a senha de acesso: ";
	std::cin >> SenhaDigitada;

	/*Se a senha digitada pelo usu�rio e armazenada na vari�vel SenhaDigitada for igual a senha de acesso as instru��es ap�s o if ser�o executadas pois a condi��o foi verdadeira true 1 */
	if (SenhaDigitada == SenhaDeAcesso)
	{
		std::cout << "\nAcesso Permitido!" << "\n";
		//aqui aproveitamos para indicar que o acesso foi concedido
		//atrav�s de outra vari�vel booleana bAcesso
		bAcesso = true;
		system("PAUSE");
	}
	/*Se a condi��o for falsa ent�o as isntru��es do else ser�o executadas*/
	else
	{
		std::cout << "\n Acesso Negado!!!" << "\n";
		system("PAUSE");
		exit(0); //sai do programa, for�a o fechamento da aplica��o
	}

	return 0;
}



#include <iostream>
#include <string>
#include <tchar.h>

int main()
{
	//aqui faltou o _T
	_tsetlocale(LC_ALL, _T("portuguese"));
	bool bFezSol, bCarroPronto, bSalarioDepositado;
	bool bAcesso;
	std::string SenhaDeAcesso = "cmaismais";
	std::string SenhaDigitada;

	std::cout << "Digite a senha de acesso: ";
	std::cin >> SenhaDigitada;

	/*Se a senha digitada pelo usu�rio e armazenada na vari�vel SenhaDigitada for igual a senha de acesso as instru��es ap�s o if ser�o executadas pois a condi��o foi verdadeira true 1 */
	if (SenhaDigitada == SenhaDeAcesso)
	{
		std::cout << "\nAcesso Permitido!" << "\n";
		//aqui aproveitamos para indicar que o acesso foi concedido
		//atrav�s de outra vari�vel booleana bAcesso
		bAcesso = true;
		//system("PAUSE");
	}
	/*Se a condi��o for falsa ent�o as isntru��es do else ser�o executadas*/
	else
	{
		std::cout << "\n Acesso Negado!!!" << "\n";
		system("PAUSE");
		exit(0); //sai do programa, for�a o fechamento da aplica��o
	}
	bFezSol = false; 
	bCarroPronto = false; 
	bSalarioDepositado = false;
	//Aqui podemos deixar apenas a vari�vel
	//N�o � necess�rio == pois ser� buscado o valor de bAcesso e ficar� assim:
	//if (true) ou if(false)
	if (bAcesso)
	{
		if (bFezSol || bCarroPronto || bSalarioDepositado)
		{
			std::cout << "\nVai dar Praia!!!" << std::endl;
		}
		//Aqui ser� executado se a condi��o do if falhar e se
		//bSalarioDepositado for false
		//Da mesma forma aqui
		//Como bSalarioDeposito � falso !(n�o) Falso dar� True e ai entra no else if
		else if (!bSalarioDepositado)
		{
			//corrigi o texto pois !bSalarioDepositado significa que agora ao inv�s de false ser� true
			//logo o bSalarioDepositado vir� verdadeiro e desta forma o sal�rio foi depositado
			std::cout << "N�o vai d� Praia, mas sal�rio tamb�m foi Depositado" << "\n";
		}
	}

	system("PAUSE");
	
}



*********************************
//operador ternario interroga��o  ?   e dois pontos :
#include <iostream>

int main()
{
	double MaiorNumero, Numero01, Numero02;

	std::cout << "Digite Primeiro Numero: ";
	std::cin >> Numero01;
	std::cout << "\nDigite Segundo Numero: ";
	std::cin >> Numero02;

	//Neste caso o operador ternario ? est� sendo utilizado para
	//Atribuir um valor a uma vari�vel
	//Se Numero01 for maior que Numero02 Maior numero recebe Valor de Numero01. Caso contr�rio(Sen�o) MaiorNumero Recebe Numero02
	MaiorNumero = (Numero01 > Numero02) ? Numero01 : Numero02;
	std::cout << "\nMaior Numero Digitado: " << MaiorNumero << "\n";
	//Aqui o operador ? esta sendo utilizado para decidir que comando ser� executado. Se for True o primeiro std:: vai para tela
	//Se for Falso o segundo std vai para a tela
	(Numero01 > Numero02) ? std::cout << "\nNumero01 Maior que Numero02\n" : std::cout << "Numero02 Maior que Numero01\n";

	system("PAUSE");
}





#include <iostream>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	int num; 
	std::cout << "Digite um N�mero: ";
	std::cin >> num;
	switch (num)
	{
	case 1:  std::cout << "\nEscolhido N�mero 1\n";
		break;
	case 2:  std::cout << "\nEscolhido N�mero 2\n";
		break;
	case 3:  std::cout << "\nEscolhido N�mero 3\n";
		break;
	default: std::cout << "\n1,2,3 n�o foram escolhidos\n";
		break;
	}
	system("PAUSE");
	return 0;
}



#include <iostream>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	char letra; // char � tratado como inteiro tabela ASCII 
	std::cout << "Entre com Letra: ";
	std::cin >> letra;
	switch (letra) // letra na realidade � um inteiro da tabela ASCII
	{
	case 'a': std::cout << "\nEscolhido a";
		break;
	case 'b': std::cout << "\nEscolhido b";
		break;
	case 'c': std::cout << "\nEscolhido c";
		break;
	default: std::cout << "\n1,2,3 n�o foram escolhidos";
		break;
	}
	system("PAUSE");
	return 0;
}




#include <iostream>

int main()
{
	int Numero = 0;
	while (Numero <= 10)
	{ 
		std::cout << Numero << std::endl;
		// ou Numero++;
		++Numero;
	}
	system("PAUSE");
	return 0;
}



#include <iostream>
int main()
{
	int Numero;
	Numero = 0;
	//loop infitivo!
	/* neste caso Numero nunca deixar� de ser 0 e a
	condi��o Numero <= 50 ser� sempre verdadeira!
	Logo ficar� sempre no While!!!*/
	while (Numero <= 50)
	{
		if (Numero % 2 != 0)
		{
			std::cout << Numero << " ";

		}
		//De alguma forma voc� precisa incrementar a vari�vel Numero para que ela chegue at� 50
		//Qual condi��o de Parada do loop?
		Numero++;

	}
	system("PAUSE");
	return 0;
}



#include <iostream>
int main()
{
	int Numero;
	Numero = 0;
	//loop infitivo!
	/* neste caso Numero nunca deixar� de ser 0 e a
	condi��o Numero <= 50 ser� sempre verdadeira!
	Logo ficar� sempre no While!!!*/
	while (Numero <= 50)
	{
		if (Numero % 2 == 0)
		{
			std::cout << Numero << " ";

		}
		//De alguma forma voc� precisa incrementar a vari�vel Numero para que ela chegue at� 50
		//Qual condi��o de Parada do loop?
		Numero++;

	}
	system("PAUSE");
	return 0;
}


#include <iostream>
int main()
{
	int Numero;
	Numero = 0;
	//loop infitivo!
	/* neste caso Numero nunca deixar� de ser 0 e a
	condi��o Numero <= 50 ser� sempre verdadeira!
	Logo ficar� sempre no While!!!*/
	while (Numero <= 50)
	{
		
		std::cout << Numero << " ";
		//De alguma forma voc� precisa incrementar a vari�vel Numero para que ela chegue at� 50
		//Qual condi��o de Parada do loop?
		Numero++;
	}
	system("PAUSE");
	return 0;
}





Potencia de um n�mero inteiro positivo usando apenas while sem math ou cmath
Como elevar um n�mero a uma pot�ncia sem utilizar fun��es predefinidas como pow ( )

Veja o c�digo comentado abaixo sem usar biblioteca C++ <cmath> ou Biblioteca C <math.h>


No entanto, a t�cnica acima funciona apenas se o expoente for um n�mero inteiro positivo.
 Se precisar encontrar a pot�ncia de um n�mero com qualquer n�mero real como expoente,
  voc� pode usar a fun��o  pow().
  
/*Neste programa, calculamos a pot�ncia de um n�mero usando um while*/
#include <iostream>
 
int main()
{
    int expoente;
    float base, resultado = 1;
 
    std::cout << "Digite a base: ";
    std::cin >> base;
    std::cout << "\nDigite o expoente: ";
    std::cin >> expoente;
 
    std::cout << base << "^" << expoente << " = ";
 
    /*Como sabemos, a pot�ncia de um n�mero � o n�mero multiplicado por si mesmo repetidamente*/
    while (expoente != 0)
    {
        resultado *= base;
        expoente--;
    }
 
    std::cout << resultado;
    std::cout << "\n";
    system("PAUSE");
    return 0;
}



