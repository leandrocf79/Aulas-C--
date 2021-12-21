// PRATICANDO C e C++ com as aulas distribuidas no https://github.com/professormarcosp/AprendaCParaGamesUE4


                           ********** OBSERVA��O***********

	O conte�do disponibilizado aqui serve para ajudar na hora do estudo, portanto, 
este n�o se trata de um arquivo execut�vel.
	Ser� atualizado constantemente.
*************************************************************************************
CUIDADO ao usar o "using namespace std;" podem haver conflitos com utiliza��o de comandos


//ACENTUA��O

#include <locale.h>  // acentua��o.

int main() {
	setlocale(LC_ALL, "portuguese");  //Define idioma de acentua��o.   #include <locale.h> 
	std:: ...
}

						   
***************************




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



#include <iostream>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int escolha = 0;
	do // as instru��es abaixo ser�o executadas pelo menos uma vez!
	{
		std::cout << "****Tickets Cinema****" << std::endl;
		std::cout << "\n1 - Para Meia Entrada\n";
		std::cout << "\n2 - Para Inteira\n";
		std::cout << "\n3 - Sair";
		std::cout << "\nEscolha sua op��o: ";
		std::cin >> escolha;

		switch (escolha)
		{
		case 1: std::cout << "\nTicket Meia Entrada Comprada\n";
				break;
		case 2: std::cout << "\nTicket Inteira Comprado\n";
				break;	
		case 3: std::cout << "\nSaindo Menu Tickets...\n";
				break;
		default: std::cout << "\nOp��o Inv�lida!!!\n";
		}

	} while (escolha != 3);//enquanto escolha for diferente de 3 o menu vai aparecer! pois voc� est� solicitando que fique em loop at� que escolha seja igual a 3 e resultado seja falso saindo do loop do-while
	system("PAUSE");
	return 0;
}




***** ATEN��O PARA O USO DO FOR
    SEQUENCIA CORRETA
for ( 1� ; 2� ; 4� ){
  3� instru��es
}

for (int n=0; n<10; n++){
	
}
***
int n=0;  1�
while(n<10)  2�
{ instru��es   3�
n++;             4�
}
***
#include <iostream>

int main()
{
	int soma = 0;
	for (int num = 1; num <= 100; num++)
	{
		soma = soma + num;
	}
	std::cout << "\nA soma dos numeros de 1 a 100: " << soma << "\n";
	system("PAUSE");
	return 0;
}


Gerando N�meros Aleat�rios com rand() e for
Em rela��o a n�mero aleat�rios voc� pode usar desta forma

#include <cstdlib>
#include <ctime>
#include <iostream>
 
using namespace std;
 
int main() {
	srand((unsigned)time(0));
	int randomNumber = rand();
	cout << randomNumber << endl;
}
Voc� pode fazer o C ++ gerar n�meros aleat�rios a partir de um intervalo exclusivo usando o %operador de m�dulo. Este operador permite definir o valor m�ximo que pode ser gerado. O exemplo a seguir mostra como voc� pode retornar um n�mero aleat�rio entre 1 e 35 :



#include <cstdlib>
#include <ctime>
#include <iostream>
 
using namespace std;
 
int main() {
    srand((unsigned)time(0));
    int randomNumber;
    for (int index = 0; index < 10; index++) {
        randomNumber = (rand() % 35) + 1;
        cout << randomNumber << endl;
    }
}


*********************

FUN��ES

Sempre com parenteses, exemplo:  void n�mero()
lembrando que n�meros s�o argumentos e variaveis deles s�o
os par�metros da fun��o, exemplo, o num1 e num2: float soma(num1+num2){
}
*********************
#include <iostream>

// O que a fun��o vai retornar?
//tipo de retorno da fun��o
int SomaAUmNumero(int Numero, int NumeroASerSomado)
{
	return Numero + NumeroASerSomado;
}
int main()
{
	int Numero, NumeroASerSomado;
	std::cout << "Digite um numero: " << "\n";
	std::cin >> Numero;
	std::cout << "Digite o numero a ser somado: " << "\n";
	std::cin >> NumeroASerSomado;
	std::cout << "A soma deste numero: " << Numero << " Com o Numero: " << NumeroASerSomado << " Sera: " << SomaAUmNumero(Numero, NumeroASerSomado);// para chaamar a fun��o n�o por int aqui nessa parte
	std::cout << std::endl;
	system("PAUSE");
	return 0;
}

**************




#include <iostream>

// O que a fun��o vai retornar?
//tipo de retorno da fun��o
int SomaAUmNumero(int Numero, int NumeroASerSomado)
{
	return Numero + NumeroASerSomado;
}

void Mensagem()
{
	std::cout << "\nMensagem de Marte... Chegamos bem...\n";
	return; // por causa desse return o pr�ximo comando jamais ser� executado.
	std::cout << "\nMensagem de Marte... Chegamos bem 2...\n";
	return;
}


int main()
{
	int Numero, NumeroASerSomado, RetornoDaFuncao;
	Mensagem();
	std::cout << "Digite um numero: " << "\n";
	std::cin >> Numero;
	std::cout << "Digite o numero a ser somado: " << "\n";
	std::cin >> NumeroASerSomado;
	std::cout << "A soma deste numero: " << Numero << " Com o Numero: " << NumeroASerSomado << " Sera: " << SomaAUmNumero(Numero, NumeroASerSomado);
	std::cout << std::endl;
	RetornoDaFuncao = SomaAUmNumero(200, -500);
	std::cout << std::endl;
	std::cout << SomaAUmNumero(Numero, SomaAUmNumero(150, 1400));
	std::cout << std::endl;
	std::cout << "\nSoma de 200 com -500: " << RetornoDaFuncao;
	std::cout << std::endl;
	system("PAUSE");
	return 0;
}


*************************************
#include <iostream>

//Podemos informar ao compilador que a fun��o existe
//e que iremos declarar ela posteriormente
// isso � feito atrav�s dos pr�tipos das fun��es
//Coloque apenas o cabe�alho da fun��o terminado com ;
float soma(float num1, float num2);

//main j� � uma fun��o
//observe o tipo de retorno int
// o nome � main e ela n�o recebe par�metos neste exemplo (podem existir argumentos de linha de comando que ser�o enviados a dois par�metros da fun��o main

int main()
{
	//a execu��o do programa � realizada de cima para baixo, desta forma o compilador ainda n�o sabe da exist�ncia da fun��o soma. Antes a declara��o da fun��o estava em cima e assim o compilador j� sabia onde estava a decla��o da fun��o
	//Agora a declara��o est� embaixo e ocorre erro, pois o compilador n�o sabe ainda quem � e onde est� declarada a fun��o soma.
	//tudo isso porque � TOP-DOWN
	std::cout << soma(100, 500) << "\n";
	system("PAUSE");
	return 0;
}
    ***** se colocar tuda a fun��o abaixo dar� erro a menos que coloque a parte inicial la em cima.
    Sedo assim, se possivel ja deixr tudo acima.
float soma(float num1, float num2)
{
	return (num1 + num2);
}

******* ---->     Sedo assim, se possivel ja deixar tudo acima do int main();.

#include <iostream>

//fun��o:
float soma(float num1, float num2)
{
	return (num1 + num2);
}

int main()
{
	std::cout << soma(100, 500) << "\n";
	system("PAUSE");
	return 0;
}


*************************************************



#include <iostream>
/*Crie uma fun��o que indique se um n�mero � par ou impar. Receba n�mero do usu�rio e exiba na tela o n�mero recebido e se ele � par ou impar.
*/
//Prot�tip� da fun��o
bool isPar(int num);

int main()
{
	int Numero;
	std::cout << "\nDigite um numero inteiro: ";
	std::cin >> Numero;
	//se o retorno da fun��o for true significa que  a condi��o do if ser� verdadeira e entra no texto PAR
	//por�m n�o � necess�rio esta compara��o == true
	//aqui ap�s executar a fun��o ser�
	//if (true) ou if(false) e funciona da mesma forma
	//Profissionalmente s� se utiliza assim
	if (isPar(Numero))
	{
		std::cout << "\nNumero: " << Numero << " PAR\n";
	}
	//Sen�o for PAR j� sabemos que � IMPAR
	//podemos otimizar isso.
	// if tamb�m n�o precisa pois else j� sabemos que � par
	else 
	{
		std::cout << "\nNumero: " << Numero << " IMPAR\n";
	}
	system("PAUSE");
	return 0;
}

bool isPar(int num)
{
	//se o resto da divis�o de um numero for zero
	//numero � par logo retorne true(verdadeiro)
	//se n�o retorne false idicando que ele � false
	if (num % 2 == 0)
		return true;
	//Observe que return faz a saida imediata da fun��o
	//Logo se for par o c�digo abaixo jamais ser� executado. Assim o else � desnecessario
	return false;
}

**********************************************

calculadora autom�tica

/* ENTRADA: dois n�meros reais
PROCESSAMENTO:funcoes que calculam soma, subtra��o, multiplica��o e divis�o
SA�DA:  (num1 + num2,  num1 � num2, num1 * num2, num1/num2)
*/
#include <iostream>
//PROT�TIPOS DAS FUNCOES
float Soma(float num1, float num2);
float Subtracao(float num1, float num2);
float Multiplicacao(float num1, float num2);
float Divisao(float num1, float num2);
float media(float num1, float num2);

int main()
{
	//aqui declare como float
	float Num1, Num2;

	std::cout << "\nDigite Primeiro Numero: ";
	std::cin >> Num1;

	std::cout << "\nDigite Segundo Numero: ";
	std::cin >> Num2;

	std::cout << "\n*** Resultado das operacoes***\n";
	std::cout << Num1 << " e " << Num2 << "\n";
	std::cout << "Soma: " << Soma(Num1, Num2) << "\n";
	std::cout << "Substracao: " << Subtracao(Num1, Num2) << "\n";
	std::cout << "Multiplicacao: " << Multiplicacao(Num1, Num2) << "\n";
	std::cout << "Divisao: " << Divisao(Num1, Num2) << "\n";
	std::cout<< "\nM�dia: "<<media(num001, num002)<<"\n";	   	  
	system("PAUSE");
	return 0;
}

float Soma(float num1, float num2)
{
	return num1 + num2;
}

float Subtracao(float num1, float num2)
{
	return num1 - num2;
}

float Multiplicacao(float num1, float num2)
{
	return num1 * num2;
}

float Divisao(float num1, float num2)
{
	return num1 / num2;
}

float media(float num1, float num2)
{
	return (num1 +num2)/2;
}

*** olha isso
	Caso tenha que converter int para float:
***	Convers�o EXPL�CTA (CAST)
	
	
	float Divisao(int num1 , int num2){
	
		return (float)num1/(float)num2;
	}
	
	
*Se o pr�prio programa fizer a convers�o ser� chamada de IMPL�CITA (COERS�O)
int a=10;
float c;
c=a;

******************************
calculadora melhoada

Voc� pode usar o switch case para simplificar o seu c�digo da c�lculador usando apenas uma fun��o

Veja:

#include <iostream>
 
double Soma(char Operacao, double Num1, double Num2);
 
int main() 
{ 
	double Num1, Num2;
	char Operacao;
	std::cout << "Digite o primeiro numero: ";
	std::cin >> Num1;
	std::cout << "Digite o segundo numero: ";
	std::cin >> Num2;
	std::cout << "\n + Soma \n - Subtracao \n * Multiplicacao \n / Divisao: ";
	std::cout << "\n\n Digite o simbolo da operacao desejada: ";
	std::cin >> Operacao;
	std::cout << "\nO resultado da operacao: " << Soma(Operacao, Num1, Num2);
	return 0;
}
 
// Aqui o case vai selecionar a opera��o e far� o digitado e selecionado pelo usu�rio
double Soma(char Operacao, double Num1, double Num2)
{
	switch (Operacao)
	{
	case '+': return Num1 + Num2;
	case '-': return Num1 - Num2;
	case '*': return Num1 * Num2;
	case '/': return Num1 / Num2;
	default: std::cout << "Operador Invalido";
		break;
	}
	return 0;
}


************************************

modificar e melhorar esse:
	
#include <iostream>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int escolha = 0;
	do // as instru��es abaixo ser�o executadas pelo menos uma vez!
	{
		std::cout << "****Tickets Cinema****" << std::endl;
		std::cout << "\n1 - Para Meia Entrada\n";
		std::cout << "\n2 - Para Inteira\n";
		std::cout << "\n3 - Sair";
		std::cout << "\nEscolha sua op��o: ";
		std::cin >> escolha;

		switch (escolha)
		{
		case 1: std::cout << "\nTicket Meia Entrada Comprada\n";
				break;
		case 2: std::cout << "\nTicket Inteira Comprado\n";
				break;	
		case 3: std::cout << "\nSaindo Menu Tickets...\n";
				break;
		default: std::cout << "\nOp��o Inv�lida!!!\n";
		}

	} while (escolha != 3);//enquanto escolha for diferente de 3 o menu vai aparecer! pois voc� est� solicitando que fique em loop at� que escolha seja igual a 3 e resultado seja falso saindo do loop do-while
	system("PAUSE");
	return 0;
}

********* abaixo o resultado

fun��e menu

/*Aten��o C�digo modificado, veja as instru��es dos motivos como recurso anexo a aula
Agradecimento ao aluno Anderson Cardoso que identificou o erro*/
#include <iostream>
#include <locale.h>

//prot�tipos das fun��es
void ExibirMenu();
int RetornarEscolha();
void ProcessarEscolha(int TipoEscolha);


int main()
{
	//Exibe o menu op��es chamando a fun��o Exibir Menu
	ExibirMenu();
	system("PAUSE");
	return 0;
}

//Implementa��o das fun��es

//a fun��o n�o retorna nada, logo o tipo de retorno � vazio(void). Al�m disso a fun��o n�o possui nenhuma vari�vel local(Par�metros). Como n�o retorna nada n�o precisamos usar comando return
void ExibirMenu()
{
	setlocale(LC_ALL, "portuguese");

	do // as instru��es abaixo ser�o executadas pelo menos uma vez!
	{
		std::cout << "****Tickets Cinema****" << std::endl;
		std::cout << "\n1 - Para Meia Entrada\n";
		std::cout << "\n2 - Para Inteira\n";
		std::cout << "\n3 - Sair";
		// TO DO Fun��o Retornar EScolha

		//Aqui a fun��o chama outra fun��o e passar como argumento para a fun��o ProcessrEscolha a vari�vel escolha que cont�m o que foi digitado pelo usu�rio como op��o de escolha de menu

		//aqui a fun��o processar escolha deve receber como par�metro um inteiro. Colocamos abaixo a chamada da fun��o RetornarEscolha que ao ser executada ir� retornar (Return) um inteiro que foi digitado pelo usu�rio
		
	} while (RetornarEscolha() != 3);//enquanto o retorno da fun��o RetornarEscolha for diferente de 3 o menu vai aparecer! pois voc� est� solicitando que fique em loop at� que escolha seja igual a 3 e resultado seja falso saindo do loop do-while
}

int RetornarEscolha()
{
	int escolha = 0;
	std::cout << "\nEscolha sua op��o: ";
	std::cin >> escolha;
	//Colocar a chamada da fun��o ProcessarEscolha
	ProcessarEscolha(escolha);
	return escolha;
}

//ProcessarEscolha recebe como par�metro um numero inteiro
//e armazena este argumento passado no par�metro TipoEscolha que � uma vari�vel local a esta fun��o. Significa que esta vari�vel somente existe na mem�ria quando a fun��o est� sendo executada. Quando a fun��o chegar a seu final esta vari�vel deixa de existir na mem�ria.
//Portanto fun��es s�o fundamentais para otimizar o uso de mem�ria, pois se todas estas vari�veis estivessem na fun��o main elas somente seriam destruidas quando o programa fosse fechado.
void ProcessarEscolha(int TipoEscolha)
{
	switch (TipoEscolha)
	{
	case 1: std::cout << "\nTicket Meia Entrada Comprada\n";
		break;
	case 2: std::cout << "\nTicket Inteira Comprado\n";
		break;
	case 3: std::cout << "\nSaindo Menu Tickets...\n";
		break;
	default: std::cout << "\nOp��o Inv�lida!!!\n";
	}
	
	
	********
	
	CRIAR ARQUIVO DE CABE�ALHO
	
#pragma once

//no ponto .h � o que?
//o que as fun��es ter�o
//aqui n�o h� implementa��o
//somente prot�tipos das fun��es
//aqui indica o que estar� dispon�vel para o programador
//ou programadora utilizar deste arquivo .h
//lembre da aula que este arquivo.h � chamado de header file
//at� agora voc� usou header files criados por outroas programadores
//agora voc� seu pr�prio header file.
//Mas voc� precisa implementar as fun��es em algum lugar
//e ai que entra o .cpp
//prot�tipos das fun��es
void ExibirMenu();
int RetornarEscolha();
int ProcessarEscolha(int TipoEscolha);


***
#include <iostream>
#include <locale.h>
#include "FuncoesMenu.h"

//#include <> vai procurar no diretorio padr�o include do compilador. J� #include "" procura no diret�rio corrente, 
//atual de seu programa

//Aqui � COMO? como as fun��es do arquivo .h ser�o implementadas?
//neste aquivo .cpp voc� coloca a implemta��o de todas as fun��es do arquivo .h relacionado
//Implementa��o das fun��es

//a fun��o n�o retorna nada, logo o tipo de retorno � vazio(void). Al�m disso a fun��o n�o possui 
//nenhuma vari�vel local(Par�metros). Como n�o retorna nada n�o precisamos usar comando return
void ExibirMenu()
{
	setlocale(LC_ALL, "portuguese");

	do // as instru��es abaixo ser�o executadas pelo menos uma vez!
	{
		std::cout << "****Tickets Cinema****" << std::endl;
		std::cout << "\n1 - Para Meia Entrada\n";
		std::cout << "\n2 - Para Inteira\n";
		std::cout << "\n3 - Sair";
		// TO DO Fun��o Retornar EScolha

		//Aqui a fun��o chama outra fun��o e passar como argumento para a fun��o ProcessrEscolha 
		//a vari�vel escolha que cont�m o que foi digitado pelo usu�rio como op��o de escolha de menu

		//aqui a fun��o processar escolha deve receber como par�metro um inteiro. Colocamos abaixo 
		//a chamada da fun��o RetornarEscolha que ao ser executada ir� retornar (Return) um inteiro 
		//que foi digitado pelo usu�rio
		
	} while (ProcessarEscolha(RetornarEscolha()) != 3);//enquanto escolha for diferente de 3 o 
	//menu vai aparecer! pois voc� est� solicitando que fique em loop at� que escolha seja igual a 3 
	//e resultado seja falso saindo do loop do-while
}

int RetornarEscolha()
{
	int escolha = 0;
	std::cout << "\nEscolha sua op��o: ";
	std::cin >> escolha;
	return escolha;
}

//ProcessarEscolha recebe como par�metro um numero inteiro
//e armazena este argumento passado no par�metro TipoEscolha que � uma vari�vel local a esta fun��o. 
//Significa que esta vari�vel somente existe na mem�ria quando a fun��o est� sendo executada. 
//Quando a fun��o chegar a seu final esta vari�vel deixa de existir na mem�ria.
//Portanto fun��es s�o fundamentais para otimizar o uso de mem�ria, pois se todas estas vari�veis 
//estivessem na fun��o main elas somente seriam destruidas quando o programa fosse fechado.
int ProcessarEscolha(int TipoEscolha)
{
	switch (TipoEscolha)
	{
	case 1: std::cout << "\nTicket Meia Entrada Comprada\n";

		break;
	case 2: std::cout << "\nTicket Inteira Comprado\n";
		break;
	case 3: std::cout << "\nSaindo Menu Tickets...\n";
		break;
	default: std::cout << "\nOp��o Inv�lida!!!\n";
		//aqui n�o retorna pois ao achar a escolha o break sai do switch
	}
	//j� aqui depois de processar o switch vai sair dele e chegar no return escolha.
	return TipoEscolha;
}

***

#include <iostream>
#include <locale.h>
#include "FuncoesMenu.h"

int main()
{
	//Exibe o menu op��es chamando a fun��o Exibir Menu
	ExibirMenu();
	system("PAUSE");
	return 0;
}


*****************************************
https://pt.wikipedia.org/wiki/Pragma_once

CRIAR ARQUIVO DE CABE�ALHO


**************             **************
Para fazer essa parte no DEV C++
1 - Abra o DEV 5.11 ou superior e Clique em New->Project 
    (� para criar um novo projeto e n�o apenas um Arquivo de C�digo Fonte ou Source File)

2 - Escolha Console Application e escreva o nome desejado (Coloquei ProjetoBibliotecas)

3 - Salve o Projeto em uma pasta no computador e 
    Clique agora com bot�o direito do mouse no nome que criou, est� na coluna na esquerda da tela,
	e escolha New File
    
4 - Ap�s a cria��o deste novo arquivo clique em salvar e em tipo escolha Header File(.h) 
    Coloque o nome desejado, Coloquei Biblioteca.h apenas para fins de exemplo
    
5 - Escreva este c�digo apenas para testar, depois escreva todo o c�digo com as defini��es
    das fun��es da biblioteca Biblioteca.h
	int soma(int a, int b);

6 - Salve com o mesmo nome do Header File mas agora com a extens�o .cpp pois � nele que voc�
    vai colocar a implementa��o das fun��es. Neste meu exemplo ser� Biblioteca.cpp que � o 
	mesmo nome de Biblioteca.h 
	
7 - Implemente a fun��o colocando o seguinte c�digo em Biblioteca.cpp
	int soma (int a, int b){
		return a+b;}

8 - Volte ao arquivo principal main.cpp que cont�m a fun��o main e fa�a um include do arquivo de cabe�alho .h que voc� criou.

	#include "Biblioteca.h"
	
	Mas use aspas duplas para o compilador procurar o diret�rio atual de seu programa. Lembre que comentei
	na aula que se usar < > o compilador procurar a biblioteca no diret�rio padr�o de includes do 
	pr�prio compilador. Como voc� quer incluir um arquivo que voc� criou e que est� no mesmo 
	diret�rio de seu programa use aspas duplas " "	

9 - Escreva o c�digo abaixo em main.cpp


#include <iostream>
#include "biblioteka.h"
int main(int argc, char** argv) {
int Num1 = 10;
int Num2 = 20;
std::cout << soma(Num1,Num2) << "\n";
system("PAUSE");
return 0;
}

int soma (int a, int b){
		return a+b;}




10 - compilar F11

Funcionou perfeitamente!!
*******************************************************

#pragma once // Esta diretiva � usada em headers e serve 
//para fazer com que o ficheiro atual apenas seja inclu�do 
//uma vez durante o processo de compila��o.


/*ENTRADA: dois n�meros inteiros
PROCESSAMENTO: opera��es matem�ticas
Soma dos dois n�meros
Subtra��o dos dois n�meros
Multiplicado dos dois n�meros
Divis�o dos dois n�meros
Potencia dos dois n�meros (primeiro n�mero elevado pelo segundo n�mero)
Raiz quadrada dos dois n�meros
SAIDA: Exiba na tela os resultados de todas as opera��es tamb�m utilizando chamada de fun��es
- cabe�alho Matematica.h  prot�tipos das fun��es 
-arquivo Matematica.cpp para ser a implementa��o do arquivo de
cabe�alho Matematica.h 
- arquivo ProgramaMatematico.cpp que conter�fun��o main( ) e ser� o
ponto de partida deste programa.
*/

#pragma once
int Soma(int num1, int num2);
int Subtracao(int num1, int num2);
int Multiplicacao(int num1, int num2);
float Divisao(int num1, int num2);

double Potencia(double num1, double num2);
float RaizQuadrada(int num);


***

#include "Matematica.h"
#include <cmath>

int Soma(int num1, int num2)
{
	return num1 + num2;
}

int Subtracao(int num1, int num2)
{
	return num1 - num2;
}

int Multiplicacao(int num1, int num2)
{
	return num1 * num2;
}

float Divisao(int num1, int num2)
{
	//faz uma divisao inteira pois num1 e num2 s�o inteiros
	//mas podemos fazer cast
	//agora estamos indicando que o inteiro deve ser um float
	return (float)num1 / (float)num2;
}

double Potencia(double num1, double num2)
{
	return pow(num1, num2);
}

float RaizQuadrada(int num)
{
	return sqrt(num);
}

***


#include <iostream>
#include "Matematica.h"

int main()
{
	int Numero1, Numero2;
	std::cout << "\nDigite Primeiro Numero: ";
	std::cin >> Numero1;
	std::cout << "\nDigite Segundo Numero: ";
	std::cin >> Numero2;
	std::cout << "\nResultado Operadores Matematicas\n";
	std::cout << "\nSoma: " << Soma(Numero1, Numero2);
	std::cout << "\nSubtracao: " << Subtracao(Numero1, Numero2);
	std::cout << "\nMultiplicacao: " << Multiplicacao(Numero1, Numero2);
	std::cout << "\nDivisao: " << Divisao(Numero1, Numero2);
	std::cout << "\nPotencia: " << Potencia(Numero1, Numero2);
	std::cout << "\nRaizQuadrada Numero1: " << RaizQuadrada(Numero1);
	std::cout << "\nRaizQuadrada Numero2: " << RaizQuadrada(Numero2) << "\n";
	system("PAUSE");

	return 0;
} 



****************************************

NAMESPACES


Em rela��o a Namespaces confira:
Vamos imaginar que voc� tenha um biblioteca de nome Biblioteca01.h que 
tenha a seguinte fun��o
#pragma once
float Soma(int Num1, int Num2)
{
 return (Num1 + Num2);
}
Vamos imaginar que voc� crie uma outra biblioteca de nome Biblioteca02.h 
que tenha a mesma fun��o s�
que com retorno diferente
#pragma once
float Soma(int Num1, int Num2)
{
 return (Num1 + Num2);
}
Agora voc� crie o seguinte programa abaixo de nome Programa.cpp e que usa(inclui) 
as duas bibliotecas
Ao tentar executar o c�digo ocorrer� erro pois a fun��o de nome Soma est�
 presente tanto da Biblioteca01.h
quanto na Biblioteca02.h e n�o h� como o compilador decidir qual ser� usada..
 Isso pode ocorrer no decorrer
do desenvolvimento e � interessante termos mecanismos para evitar estes 
conflitos. Poderia pensar em
mudar o nome da vari�vel Soma em alguma das bibliotecas, mas n�o seria 
uma sa�da elegante e eficiente.
Veja que ocorre erro
Veja que acima o visual studio indica que j� existe uma fun��o com mesma 
assinatura e que n�o foi poss�vel
resolver esta sobrecarga (overload) de fun��es.
Para resolver estes problemas de conflitos de nomes, etc foram criados os 
espa�os de nomes ou Namespaces.
O Objetivo destas Namespaces � criar uma regi�o que seja identificada de 
forma que voc� possa referenciar
ela correr o risco de conflitos de nomes como no exemplo acima
Como assim?
Vamos resolver o problema acima e ficar� mais n�tida esta utiliza��o

Troque o C�digo da Biblioteca01.h por este

#pragma once
namespace mat01
{
float Soma(int Num1, int Num2)
{
return (Num1 + Num2);
}
}

Obs: Eu estou implementando no pr�prio arquivo.h para simplificar, mas no 
geral temos o Biblioteca01.h
apenas com as assinaturas das fun��es e um Biblioteca01.cpp de mesmo nome
 com as implementa��es.
Voc� vai aprender a fazer bibliotecas em breve no curso e vai entender
 esta observa��o.
Agora troque Troque o C�digo da Biblioteca02.h por este c�digo que declara
 uma Namespace mat02

#pragma once
namespace mat02
{
float Soma(int Num1, int Num2)
{
return (Num1 + (Num2 * 2));
}
}

Feito isso em seu c�digo Programa.cpp voc� pode chamar as fun��es Soma 
de cada Namespace e n�o
haver� conflito

Basta usar NomeDaNameSpace::Soma neste caso ficar� assim:

#include <iostream>
#include "Biblioteca01.h"
#include "Biblioteca02.h"
int main()
{
std::cout << "A Soma de 10 com 20: " << mat01::Soma(10, 20) << "\n";
std::cout << "A Soma de 10 com 20*2: " << mat02::Soma(10, 20) << "\n";
system("PAUSE");
return 0;
}

Veja que agora mat01::Soma(10, 20) est� chamando a fun��o Soma do 
namespace mat01 e que est� na
Blibioteca01.h
Da mesma forma mat02::Soma(10, 20) est� chamando a fun��o Soma do 
namespace mat02 e que est� na
Blibioteca02.h
Com isso o programa Executa sem problemas e voc� consegue verificar 
a import�ncia das namespaces
portanto std::cout indica que existe uma namaspace dentro da biblioteca
 iostream e que dentro do
namespace std existe a fun��o cout. Se tiver outra biblioteca com a 
fun��o cout basta usar o namaspace
desta biblioteca e n�o haver� conflito com a fun��o cout da biblioteca std
Claro que existem v�rias outra coisas que podem ser feitas com namespaces
 como namespaces aninhados etc

***********************************


Vari�veis com escopo global e local
***

#include <iostream>
#include "Matematica.h"

int NumeroGlobal = 5;

int main()
{
	int Numero1, Numero2;
	std::cout << "\nDigite Primeiro Numero: ";
	std::cin >> Numero1;
	std::cout << "\nDigite Segundo Numero: ";
	std::cin >> Numero2;
	std::cout << "\nResultado Operadores Matematicas\n";
	std::cout << "\nSoma: " << Soma(Numero1, Numero2);
	std::cout << "\nSubtracao: " << Subtracao(Numero1, NumeroGlobal);
	std::cout << "\nMultiplicacao: " << Multiplicacao(Numero1, Numero2);
	std::cout << "\nDivisao: " << Divisao(Numero1, Numero2);
	std::cout << "\nPotencia: " << Potencia(Numero1, Numero2);
	std::cout << "\nRaizQuadrada Numero1: " << RaizQuadrada(Numero1);
	std::cout << "\nRaizQuadrada Numero2: " << RaizQuadrada(Numero2) << "\n";
	system("PAUSE");
	   	  
	return 0;
}	

***

#include "Matematica.h"
#include <cmath>

//Variavel Global pois declarada fora de
//qualquer fun��o. Logo ela ser� acessivel em qualquer fun��o incluindo a fun��o main()
//
int NumeroGlobal = 10;

int Soma(int num1, int num2)
{
	//esta vari�vel s� � acess�vel dentro da fun��o Soma
	int NumeroLocal = 5;
	return num1 + NumeroGlobal;
}

int Subtracao(int num1, int num2)
{
	if (num1 > num2)
	{
		//neste caso qualquer var��vel declarada entre as chaves de algo
		// ser� acess�vel somente dentro destas chaves. A isso chamados ESCOPO de vari�vel
		int NumeroLocalAEsteIf = 20;
	}
	//Mesmo NumeroLocalAEsteIf estando dentro da fun��o Subtracao ela somente
	//estar� acess�vel para o escopo{ } de onde ela foi declarada, ela � uma 
	//     ------>   vari�vel local a este if!
	
	return num1 - NumeroGlobal;
	//j� NumeroGlobal � global! possui escopo global, ou seja, � acessada
	//em qualquer fun��o do programa, logo, em qualquer parte do programa pois ela � global.
}

int Multiplicacao(int num1, int num2)
{
	
	return num1 * num2;
}

float Divisao(int num1, int num2)
{
	//faz uma divisao inteira pois num1 e num2 s�o inteiros
	//mas podemos fazer cast
	//agora estamos indicando que o inteiro deve ser um float
	return (float)num1 / (float)num2;
}

int Potencia(int num1, int num2)
{
	return pow(num1, num2);
}

float RaizQuadrada(int num)
{
	return sqrt(num);
}

***
Matematica.h

#pragma once

int Soma(int num1, int num2);
int Subtracao(int num1, int num2);
int Multiplicacao(int num1, int num2);
float Divisao(int num1, int num2);
int Potencia(int num1, int num2);
float RaizQuadrada(int num);

***************************************

#include <iostream>

int main()
{
	//int i;    aqui i foi declardo fora do escopo, do bloco de c�digo do for
	
	for (int i = 0; i < 5; i++)
	{
		int j = i + 2;
		std::cout << i << " " << j << std::endl;
	} 
	//std::cout << "\nValor final de i: " << i;
	//std::cout << "\nValor final de j: " << j;
	//isso � o escopo de uma vari�vel!
	//Qual a visibilidade dela? Local, Global. Se local em que bloco? 
	//Qual o tempo de vida dela?
	//Relembrando que o par�metros das fun��es s�o vari�veis locais a estas fun��es!
	//int soma(int x, int y) escopo local!''

	//por�m agora j foi declarado dentro do bloco de c�digo do comando for. 
	//Logo quando este bloco de c�digo chegar ao fim a vari�vel j que � 
	//local a este bloco, ser� destru�da e n�o mais estar� acess�vel. 
	//Ela (j) somente � acess�vel dentro do comando for 
	//quando a fun��o atingir aqui a vari�vel i n�o sair� da mem�ria,
	// n�o ser� destruida pois est� fora deste escopo
	system("PAUSE");
	return 0;
}


******************************************

A solu��o pra isso � armazenar o valor antigo de penult na vari�vel tempor�ria temp.
Ent�o � s� fazer:
temp = penult;
penult = ult;
ult = ult + temp;

Pronto, agora a sequ�ncia 'andou', e est� pronta para exibir o pr�ximo termo.
Veja como fica nosso c�digo:
	
#include <iostream>
using namespace std;

int main()
{
    int n, aux, temp, ult=1, penult=0;

    cout << "Exibir quantos termos: ";
    cin >> n;

    cout << penult << endl << ult << endl;

    for(aux=3 ; aux<=n ; aux++){
        cout << (ult+penult) << endl;

        temp = penult;
        penult = ult;
        ult = ult + temp;
    }

    return 0;
}



***
Fibonacci com la�o WHILE em C++

#include <iostream>
using namespace std;

int main()
{
    int n, aux=3, temp, ult=1, penult=0;

    cout << "Exibir quantos termos: ";
    cin >> n;

    cout << penult << endl << ult << endl;

    while(aux<=n){
        cout << (ult+penult) << endl;

        temp = penult;
        penult = ult;
        ult = ult + temp;

        aux++;
    }

    return 0;
}





*****************************************



#include <iostream>

int ContadorChamadas()
{
	//Variavel est�tica: Significa que ap�s a sa�da da fun��o o valor desta vari�vel n�o ser� perdido.
	//static indica que este valor seja mantido mesmo ap�s a fun��o ser encerrada
	
	static int NumChamadasDaFuncao = 0;
	NumChamadasDaFuncao++;
	return NumChamadasDaFuncao;
}

int main()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << ContadorChamadas() << std::endl;
	}
	system("PAUSE");
	return 0;
}

************
Resum�o Vari�veis Est�ticas, globais, Constantes
Vari�veis Est�ticas

Uma vari�vel est�tica pode ser uma vari�vel global ou local. Ambas s�o 
criados precedendo a declara��o da vari�vel com a palavra-chave static .

Uma vari�vel est�tica local � uma vari�vel que pode manter seu valor de
 uma chamada de fun��o para outra e existir� at� que o programa termine.

Quando uma vari�vel est�tica local � criada, deve ser atribu�do um valor
 inicial. Se n�o for, o valor padr�o ser� 0.

Uma vari�vel est�tica global � aquela que s� pode ser acessada no arquivo
 onde foi criada. Diz-se que essa vari�vel tem escopo de arquivo .

---------------------------------------------------------------------------------------------------------

Vari�veis globais e externas

Uma vari�vel global � uma vari�vel definida fora de todas as fun��es e 
dispon�vel para todas as fun��es.

Essas vari�veis n�o s�o afetadas por escopos e est�o sempre dispon�veis,
 o que significa que existe uma vari�vel global at� que o programa termine.

� poss�vel criar uma vari�vel global em um arquivo e acess�-la de outro
 arquivo. Para fazer isso, a vari�vel deve ser declarada em ambos os arquivos,
  mas a palavra-chave extern deve preceder a "segunda" declara��o.

Se for esta o seu objetivo de criar uma vari�vel global em arquivo e
 poder acessar ela em outro arquivo use extern

extern int Variavel;

----------------------------------------------------

Vari�veis Locais

Uma vari�vel local � aquela que ocorre dentro de um escopo espec�fico. 
Eles existem apenas na fun��o em que s�o criados.

�s vezes, s�o chamadas de vari�veis autom�ticas porque s�o criadas 
automaticamente quando a fun��o inicia a execu��o e desaparecem automaticamente
 quando a execu��o da fun��o termina.

----------------------------------------------------

"Vari�veis" Constantes

Em C, a diretiva do pr�-processador #define foi usada para criar uma vari�vel com um 
valor constante. Isso ainda funciona em C ++, mas podem surgir problemas.

Quando #define � usado, o pr�-processador ir� percorrer o c�digo e substituir cada
 inst�ncia da vari�vel #define pelo valor apropriado. Pois bem, como a vari�vel #define
  existe apenas no arquivo onde foi criada, � poss�vel ter a mesma defini��o em 
  outro arquivo com um valor completamente diferente. Isso pode levar a 
  consequ�ncias desastrosas.

Para superar esse problema, o conceito de uma constante nomeada que �
 exatamente como uma vari�vel foi introduzido no C ++.

Para criar uma vari�vel constante em C ++, preceda a declara��o da vari�vel 
com a palavra-chave const . Isso diz ao compilador que 
"foi criada uma vari�vel que tem um valor que n�o pode ser alterado"

Ao criar uma vari�vel constante, ela DEVE receber um valor.


****************************************

#include <iostream>
//PROT�TIPO
//voc� pode colocar valores padr�es no prot�tipo
//e ent�o quando voc� chamar a fun��o poder� omitir
//argumentos pois a fun��o ir� utilizar o argumento padr�o se voc� n�o informar o argumento quando da chamada da fun��o.
//Para colocar um valor padr�o basta colocar =
void Coordenadas(int x, int y, int z = 1);
//Voc� n�o � obrigado a colocar todos os argumentos padr�o. Por�m se deixar algum de fora deve seguir a regra que precisa
//colocar da direita para esquerda

int main()
{
	//apesar da fun��o solicitar na chamada a coloca��o de 3 argumentos que ser�o enviados aos par�metros
	//x, y e z. Esta chamada sem voc� colocar argumentos ir� funcionar, pois eles tem argumentos pa
	Coordenadas(5,6);
	system("PAUSE");
	return 0;
}

void Coordenadas(int x, int y, int z)
{
	//x = x * 10;
	x *= 10;
	//y = y * 10;
	y *= 10;
	z *= 10;
	std::cout << "(" << x << " - " << y << " - " << z << ")";
}

*******************


#include <iostream>
//PROT�TIPO
//voc� pode colocar valores padr�es no prot�tipo
//e ent�o quando voc� chamar a fun��o poder� omitir
//argumentos pois a fun��o ir� utilizar o argumento padr�o 
se voc� n�o informar o argumento quando da chamada da fun��o.
//Para colocar um valor padr�o basta colocar =
void Coordenadas(int x, int y, int z = 1);
//Voc� n�o � obrigado a colocar todos os argumentos padr�o, por�m,
// se deixar algum de fora deve seguir a regra que precisa
//colocar da direita para esquerda

int main()
{
	//apesar da fun��o solicitar na chamada a coloca��o de 3 argumentos que 
	//ser�o enviados aos par�metros
	//x, y e z. Esta chamada sem voc� colocar argumentos ir� funcionar, 
	//pois eles tem argumentos pa
	Coordenadas(5,6); // x e y recebem os valores na ordem a�, z j� foi 
	//atribuido um valor padr�o anterormente
	system("PAUSE");
	return 0;
}

void Coordenadas(int x, int y, int z)
{
	//x = x * 10;   ou
	x *= 10;
	//y = y * 10;    ou
	y *= 10;
	z *= 10;
	std::cout << "(" << x << " - " << y << " - " << z << ")";
}


*******************************
#include <iostream>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int escolha = 0;
	do // as instru��es abaixo ser�o executadas pelo menos uma vez!
	{
		std::cout << "****Tickets Cinema****" << std::endl;
		std::cout << "\n1 - Para Meia Entrada\n";
		std::cout << "\n2 - Para Inteira\n";
		std::cout << "\n3 - Sair";
		std::cout << "\nEscolha sua op��o: ";
		std::cin >> escolha;

		switch (escolha)
		{
		case 1: std::cout << "\nTicket Meia Entrada Comprada\n";
				break;
		case 2: std::cout << "\nTicket Inteira Comprado\n";
				break;	
		case 3: std::cout << "\nSaindo Menu Tickets...\n";
				break;
		default: std::cout << "\nOp��o Inv�lida!!!\n";
		}

	} while (escolha != 3);//enquanto escolha for diferente de 3 o menu vai aparecer! pois voc� est� solicitando que fique em loop at� que escolha seja igual a 3 e resultado seja falso saindo do loop do-while
	system("PAUSE");
	return 0;
}



******************************
//C�digo que foi modificado de uma vers�o sem uso de fun��es 
// e de contribui��o do aluno Anderson de Almeida Pinheiro
 
#include <iostream>
#include <tchar.h>
#include <iomanip> // para formatar casas decimais
 
void MostrarCarrinho(float Total, float MeiaEntrada, float InteiraEntrada)
{
	Total = (MeiaEntrada * 10.50) + (InteiraEntrada * 21.0);
 
	std::cout << "\n***SEU CARRINHO DE COMPRAS***\n";
	std::cout << std::fixed << std::setprecision(2);
	std::cout << "[MEIA ENTRADA]:\t\t" << MeiaEntrada << "\t" << "R$ " << MeiaEntrada * 10.50 << "\n";
	std::cout << "[ENTRADA INTEIRA]:\t" << InteiraEntrada << "\t" << "R$ " << InteiraEntrada * 21.0 << "\n";
	std::cout << "[TOTAL]:\t\t" << "\t" << "R$ " << Total << "\n\n\n";
}
 
int main()
{
	
	
	_tsetlocale(LC_ALL, _T("portuguese"));
 
	float MeiaEntrada = 0.0;
	float InteiraEntrada = 0.0;
	float Total = 0.0;
	char Escolha;
 
	do
	{
		std::cout << "\nMENU DE OP��ES" << "\n";
		std::cout << "--------------" << "\n";
 
		std::cout << std::endl;
 
		std::cout << "Selecione [1] para COMPRAR 01\t\tMEIA ENTRADA\t(+R$ 10,50)" << "\n";
		std::cout << "Selecione [2] para COMPRAR 01\t\tENTRADA INTERA\t(+R$ 21,00)" << "\n";
		std::cout << "Selecione [3] para RETIRAR 01\t\tMEIA ENTRADA\t(-R$ 10,50)" << "\n";
		std::cout << "Selecione [4] para RETIRAR 01\t\tENTRADA INTEIRA\t(-R$ 21,00)" << "\n";
		std::cout << "Selecione [5] para ZERAR o carrinho" << "\n";
		std::cout << "Selecione [6] para MOSTRAR o carrinho" << "\n";
		std::cout << "Selecione [7] para SAIR" << "\n";
 
		std::cout << std::endl;
 
		std::cout << std::endl;
 
		std::cout << "Entre com o n�mero para realizar as compras: ";
		std::cin >> Escolha;
 
		switch (Escolha)
		{
 
		case '1':
 
			system("CLS");
			std::cout << "\nMEIA ENTRADA adicionada!" << "\n";
			MeiaEntrada++;
			MostrarCarrinho(Total, MeiaEntrada, InteiraEntrada);
			break;
 
		case '2':
 
			system("CLS");
			std::cout << "\nENTRADA INTEIRA adicionada!" << "\n";
			InteiraEntrada++;
			MostrarCarrinho(Total, MeiaEntrada, InteiraEntrada);
			break;
 
		case'3':
 
			if (MeiaEntrada == 0)
			{
				std::cout << "\n[ERRO]: Imposs�vel retirar entrada (0 compradas)" << "\n";
				break;
			}
 
			else
			{
				system("CLS");
				std::cout << "\nMEIA ENTRADA retirada!" << "\n";
				MeiaEntrada--;
				MostrarCarrinho(Total, MeiaEntrada, InteiraEntrada);
				break;
			}
 
		case'4':
 
			if (InteiraEntrada == 0)
			{
				std::cout << "\n[ERRO]: Imposs�vel retirar entrada (0 compradas)" << "\n";
				break;
			}
 
			else
			{
				system("CLS");
				std::cout << "\nENTRADA INTEIRA retirada!" << "\n";
				InteiraEntrada--;
				MostrarCarrinho(Total, MeiaEntrada, InteiraEntrada);
				break;
			}
 
		case'5':
 
			system("CLS");
			std::cout << "\nCARRINHO ZERADO!" << "\n";
			MeiaEntrada = 0;
			InteiraEntrada = 0;
			MostrarCarrinho(Total, MeiaEntrada, InteiraEntrada);
			break;
 
		case'6':
 
			system("CLS");
			MostrarCarrinho(Total, MeiaEntrada, InteiraEntrada);
			break;
 
		case'7':
 
			std::cout << "\nFechando o carrinho..." << "\n";
			break;
 
		default:
 
			std::cout << "\n[ERRO]: Op��o inv�lida! Verifique o MENU de op��es!" << "\n";
			break;
		}
 
	} while (Escolha != '7');
 
	return 0;
}


**************************************
PONTEIRO


#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	//ent�o para declarar uma vari�vel que seja considerada um ponteiro
	//basta colocar <tipo a ser apontado> *<nome da vari�vel>
	int *ptr;
	//obs: a posi��o do asterisco neste caso n�o importa
	//int* ptr; //d� no mesmo!


	int Numero = 101;
	//Aqui vamos colocar na tela o endere�o de mem�ria
	//da vari�vel N�mero. Ou seja onde ela est� carregada na mem�ria RAM. Lembre-se que o que vai para tela � o primeiro endere�o da vari�vel n�mero
	//pois ela ocupa 4 endere�os pois tem 4 bytes de tamanho
  
	std::cout << "\nEndere�o de N�mero: " << &Numero;
	//ALGO IMPORTANTE AQUI: &ptr vai colocar na tela o endere�o de mem�ria alocado para vari�vel ponteiro
	//ou seja qual lugar da RAM ele est� alocado?
	//veja n�s ainda n�o estamos colocando na tela nada que esteja dentro das vari�veis.
	//pois para colocar o que est� dentro das vari�veis
	//n�s usamos apenas o nome da vari�vel!
	//exemplo std::cout << Numero
	//std::cout << ptr
  
	std::cout << "\nEndere�o de ptr: " << &ptr << "\n";
  
	system("PAUSE");
	return 0;
}

*******************************************

#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	//ent�o para declarar uma vari�vel que seja considerada um ponteiro
	//basta colocar <tipo a ser apontado> *<nome da vari�vel>
	int *ptr;
	//obs: a posi��o do asterisco neste caso n�o importa
	//int* ptr; //d� no mesmo!


	int Numero = 101;
	//Aqui vamos colocar na tela o endere�o de mem�ria
	//da vari�vel N�mero. Ou seja onde ela est� carregada na mem�ria RAM. Lembre-se que o que vai para tela � o primeiro endere�o da vari�vel n�mero
	//pois ela ocupa 4 endere�os pois tem 4 bytes de tamanho
  
	std::cout << "\nEndere�o de N�mero: " << &Numero;
	//ALGO IMPORTANTE AQUI: &ptr vai colocar na tela o endere�o de mem�ria alocado para vari�vel ponteiro
	//ou seja qual lugar da RAM ele est� alocado?
	//veja n�s ainda n�o estamos colocando na tela nada que esteja dentro das vari�veis.
	//pois para colocar o que est� dentro das vari�veis
	//n�s usamos apenas o nome da vari�vel!
	//exemplo std::cout << Numero
	//std::cout << ptr
  
	std::cout << "\nEndere�o de ptr: " << &ptr << "\n";
  
	system("PAUSE");
	return 0;
}


****************************************

#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Numero{ 4096 };
	int *ptr;
	int *ptr2;
	ptr = &Numero;
	ptr2 = ptr;
	std::cout << "\nEndere�o contido dentro de ptr: " << ptr << "\n";
	std::cout << "\nEndere�o contido dentro de ptr2: " << ptr2 << "\n";
	
	std::cout << "\nEndere�o de ptr na mem�ria RAM: " << &ptr << "\n";
	std::cout << "\nEndere�o de ptr2 na mem�ria RAM: " << &ptr2 << "\n";
	
	std::cout << "\nValor de Numero antes: " << Numero << "\n";
		*ptr2 = *ptr + 10;
	std::cout << "\nValor de Numero agora: " << Numero << "\n";
	system("PAUSE");
	return 0;
}

*************

#include <iostream>

int main()
{
	int Numero{ 4890 };
	char Letra{ 'E' };
	//declarei ponteiro gen�rico ou vazio(void)
	//significa que ele n�o tem ainda um tipo que possa apontar
	/*isso � �til quando voc� por exemplo retornar algo de alguma 
	fun��o e atribuir a um ponteiro. Neste caso voc� n�o sabe de antem�o 
	que tipo de dado voc� vai retornar e assim depois voc� pode 
	especificar qual tipo de dado o ponteiro void* passar� a apontar*/
	void *ptrG;
	//Agora ptrG passa a apontar para a a vari�vel Letra
	//Pois ele recebeu o endere�o de mem�ria desta vari�vel
	ptrG = &Letra;
	//por que deu erro?
	//Lembre que o endere�o de uma vari�vel � apenas o primeiro byte dela. 
	//O primeiro endere�o em que ela esta carregada.
	//Assim como o compilador vai saber como LER a vari�vel
	// ex:  a partir do endere�o 105 eu devo percorrer quanto bytes?
	// Ele s� saber� isso quando voc� indicar o tipo do ponteiro ptrG
	//Por enquanto ele � void!
	//logo j� que Letra � do tipo char vo� deve
	//indicar que o ponteiro ptrG est� apontando para um char
	//isso � feito via cast 
	
	
	std::cout << "Valor de Letra via ptrG = " << *(char*)ptrG << "\n"; // desreferenciamento
	
	//primeiro voc� faz o cast e depois coloca o sinal de desreferenciamento
	//*(cast para tipo desejado)NomePonteiroGenerico
	//*(char*)ptrG
	//agora o compilador sabe que dever� ler 1(byte) para colocar um char na tela!
	ptrG = &Numero;
	std::cout << "\nValor de Numerom via ptrG: " << *(int*)ptrG << "\n";

	system("PAUSE");
	return 0;
}


*************

Utilizando a Tabela acima analise o trecho de c�digo e observe a lacuna ______________:

void* ptr;

char Letra = { 'A' };

int Numero { 1021 };

ptr = &Numero;

std::cout << "O valor de Numero usando ptr sera: " <<  ________________  << "\n";

O c�digo que preenche corretamente a lacuna acima ser�: *(int*)ptr    // desreferenciamento


********************************

Crie uma vari�vel de nome Numero do Tipo inteiro e valor inicial igual a 234;
Crie um ponteiro de nome Ponteiro capaz de apontar para um vari�vel do tipo inteiro.
Troque o valor de Numero para 1456 usando Ponteiro
Coloque o valor de Numero na tela usando Ponteiro
Mostre o endere�o da mem�ria RAM em que est�o carregados, alocados as vari�veis Ponteiro e Numero
Crie um outro ponteiro de nome OutroPtr
Fa�a OutroPtr apontar para a mesma vari�vel que ptr aponta. 
Usando Ponteiro some 200 ao valor contido em Numero
Usando OutroPtr coloque na tela o valor de Numero

#include <iostream>
int main()
{
	setlocale(LC_ALL, "portuguese");
	int Numero{ 234 };
	int* Ponteiro = &Numero;
	*Ponteiro = 1456;
	int* OutroPtr = Ponteiro;

	std::cout << "\nValor de Numero: " << *Ponteiro << "\n";
	std::cout << "\nEndere�o de Numero " << &Numero << " Endere�o de Ponteiro: " << &Ponteiro << "\n";
	std::cout << "\nValor contido em DENTRO de Ponteiro: " << Ponteiro << "\n";
	*Ponteiro += 200;
	std::cout << "\nValor de N�mero: " << *OutroPtr << "\n" ;
	system("PAUSE");
	return 0;
}

*****************************************************

REFER�NCIAS

� um r�tuo, � como dar outro nome a uma vari�vel j� existente.
int numero=34;
int &RefNum= numero;
*****************************************************

#include <iostream>

int main()
{
	int Numero{ 1024 };
	char Letra{ 'A' };
	//Declara uma refer�ncia//Significa que foi criado um apelido, um rotulo, um alias para a vari�vel Numero
	//Neste caso n�o � criada uma regi�o de mem�ria que vai conter algo dentro e que seria chamada Ref. Ref n�o tem endere�o na RAM.
	//N�o � uma vari�vel que podemos colocar algo dentro!
	//� apenas um atalho para Numero.

	int &Ref = Numero;
	//Para colocar na tela o valor que a referencia referencia basta colocar o nome da referencia. N�o precisa desreferenciar como
  //nos ponteiros. *ptr
	std::cout << "\nValor de Numero usando Ref: " << Ref << "\n";
	std::cout << "\nValor Endereco de Numero: " << &Numero << "\n";
  
	//Observe que &Ref ir� retornar o endere�o de N�mero pois uma referencia nasce e fica como novo r�tulo da vari�vel que ela 
  //referencia estando portanto no mesmo endere�o de Numero, neste caso.
	std::cout << "\nValor Endereco de Ref: " << &Ref << "\n";
  
	//J� aqui ser� criada uma vari�vel, um espa�o na mem�ria RAM e dentro deste espa�o de nome ptr ser� colocado o endere�o de 
  //mem�ria de Numero. � bem diferente da refer�ncia pois esta n�o contem um espa�o alocado, ela apenas � mais um nome, um r�tulo, 
  //um apelido para referenciar a vari�vel.
	int* ptr = &Numero;
	std::cout << "\nValor Endereco de ptr na RAM: " << &ptr << "\n";
	std::cout << "\nValor de Numero usando ptr: " << *ptr << "\n";
	std::cout << "\nValor Endereco contido dentro de ptr: " << ptr << "\n";
  
	system("Pause");
	return 0;
}


********************

#include <iostream>

int main()
{
	int Numero{ 1024 };
	int Numero2{ 2024 };
	//Observe que a refer�ncia n�o pode ficar sem ser atribuida logo
	//na sua cria��o!
	int &RefNum{ Numero2 }; // forma padronizada de inicializar
	//o mesmo que int &RefNum = Numero2;
	//Agora est� ok pois Ref passar ser uma referencia de Numero2
	RefNum = 5644;
	//Podemos alterar o valor do referenciado apenas com o nome da refer�ncia sem precisar de *
	//&RefNum = Numero;
	//Aqui n�o ser� permitido pois refer�ncia s� pode ser atribuida uma �nica vez!
	int* ptr;
	//um ponteiro pode ser declarado sem ser inicializado!
	//At� mesmo assim � permitido!
	//depois voc� pode iniciar
	ptr = &Numero;
	
	*ptr = 4048;
	std::cout << "\nValor de Numero: " << *ptr << "\n";
	//No ciclo de vida de um ponteiro podemos reatribuir, colocar um novo endere�o, fazer ele apontar para outra vari�vel
	//isso � permitido!
	ptr = &Numero2;
	*ptr = Numero + 2000;
	std::cout << "\nValor de Numero2: " << *ptr << "\n";
	return 0;
}

**********

Considere o seguinte trecho de c�digo abaixo:

float Temperatura { 40.0 } ;
float VelocidadeDoVento { 23.6 };
float &RefTemp = Temperatura;
RefTemp = 34.7;
std::cout << RefTemp;

O c�digo acima colocar� na tela o valor?34.7

***********

Considere o seguinte c�digo abaixo:

#include <iostream>
int main()
{
	float Temperatura{ 40.0 };
	float VelocidadeDoVento{ 23.6 };
	float& RefTemp = Temperatura;
	RefTemp = 34.7;  // deu um novo valor para a variavel temperatura
	std::cout << RefTemp << "\n";
	RefTemp = VelocidadeDoVento;
	std::cout << RefTemp << "\n"; // e esse? o que retornr�?
}

***********
   
    3 casos:
	
     	*************   1� caso
     	

#include <iostream>

void TrocaNumeros(int Num1, int Num2);

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Num1, Num2;
	std::cout << "\nDigite o primeiro N�mero: ";
	std::cin >> Num1;
	std::cout << "\nDigite o Segundo N�mero: ";
	std::cin >> Num2;
	std::cout << "\nValores antes da troca\n";
	std::cout << "\nNumero1 = " << Num1;
	std::cout << "\nNumero2 = " << Num2;
	std::cout << "\nValores depois da troca\n";
	//Esta chamada de fun��o apenas COPIA o Valor de Numero1 e Numero2
	//E Coloca estes valores em Num1 e Num2 respectivamente da fun��o
	//Troca Numeros...
	//N�o h� rela��o alguma com estas vari�veis..
	//Numero1 e Numero2 s�o vari�veis locais a fun��o main
	TrocaNumeros(Num1, Num2);
	//Mesmo sendo mesmo nome, s�o vari�veis diferente e com endere�os de mem�ria diferentes
	//A ISSO CHAMAMOS DE PASSAGEM DE PAR�METROS POR VALOR!
	//APENAS UMA COPIA DO VALOR � ENVIADO A FUN��O
	std::cout << "\nNum1 = " << &Num1;
	std::cout << "\nNum2 = " << &Num2;

	std::cout << "\nNum1 = " << Num1;
	std::cout << "\nNum2 = " << Num2 << "\n";

	system("PAUSE");
	return 0;
}
//e Num1 e Num2 s�o vari�veis locais a fun��o TrocaNumeros
void TrocaNumeros(int Num1, int Num2)
{
	//Como fazer a troca de valores de dois n�meros?
	//precisamos de um local tempor�rio para armazenar o valor de Num1 antes dele receber novo valor!
	//Vari�vel tempor�ria que guarda valor de Num1
	//Ex: se for digitado 10 Temp = 10 e se for digitado Num2 = 20 temos
	std::cout << "\nNum1 Fun��o = " << &Num1;
	std::cout << "\nNum2 Fun��o = " << &Num2;

	int Temp{ Num1 };
	//Num1 passa a ser 20
	Num1 = Num2;
	//Num2 passa a ser 10. Logo foi trocado
	//Por�m....
	Num2 = Temp;
	//Ent�o aqui a troca ocorre apenas nas vari�veis locais
	//Numero1 e Numero2 ficam intactos sem altera��o!
}

************

   outro caso 
   
     	*************  2� caso

#include <iostream>

//Agora estamos indicando que a fun��o ter� dois par�metros que ser�o
//refer�ncias dos argumentos passados para esta fun��o
//Ou seja o que for enviado para esta fun��o passar� a ser referenciado por Num1 e Num2 respectivamente.
void TrocaNumeros(int& Num1, int& Num2);

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Numero1, Numero2;
	std::cout << "\nDigite o primeiro N�mero: ";
	std::cin >> Numero1;
	std::cout << "\nDigite o Segundo N�mero: ";
	std::cin >> Numero2;
	std::cout << "\nValores antes da troca";
	std::cout << "\nNumero1 = " << Numero1;
	std::cout << "\nNumero2 = " << Numero2;

	TrocaNumeros(Numero1, Numero2);

	std::cout << "\nValores depois da troca";
	std::cout << "\nNumero1 = " << Numero1;
	std::cout << "\nNumero2 = " << Numero2 << "\n";
	
	std::cout << "\nEndere�o de mem�ria de Numero1 = " << &Numero1;
	std::cout << "\nEndere�o de mem�ria de Numero2 = " << &Numero2 << "\n";
	
	system("PAUSE");
	return 0;
}

//Agora Num1 e Num2 n�o recebem simplesmente uma c�pia do valor de Numero1 e Numero2. Eles passam a ser Refer�ncias de Numero1 e Numero2 respectivamente. Assim se eles alterarem o valor isso ir� afetar as vari�veis, pois agora eles s�o refer�ncias!
void TrocaNumeros(int& Num1, int& Num2)
{
	std::cout << "\nEndere�o de mem�ria de Num1 da fun��o  = " << &Num1;
	std::cout << "\nEndere�o de mem�ria de Num2 da fun��o  = " << &Num2;
	int Temp{ Num1 };
	//Num1 passa a ser 20
	//aqui est� copiando em Numero1 o valor de Numero2 pois s�o refer�ncias � como se fosse Numero1 = Numero2
	//Lembre que refer�ncias s�o alias para suas vari�veis
	//Isso aqui (int& Num1, int& Num2) � o mesmo que
	//int& Num1 = Numero1 e int& Num1 = Numero2;
	//s� que isso ocorre na chamada da fun��o.
	//ISSO DAMOS O NOME DE PASSAGEM DE ARGUMENTOS PARA A FUN��O POR REFER�NCIA!
	Num1 = Num2;
	//Num2 passa a ser 10. Logo foi trocado
	//Por�m....
	Num2 = Temp;
	
}


************

   outro caso, por ponteiros
   
     	*************  3� caso

#include <iostream>

//Agora vamos fazer o mesmo. A passagem de argumentos para a fun��o por
//Refer�ncia. S� que agora utilizando ponteiros
//Lembre-se ponteiros s�o vari�veis que possuem dentro delas um endere�o de outra vari�vel
//Al�m disso eles precisam ser desreferenciados para chegar ao valor apontado ou alter�-lo

//Aqui foi indicado que a fun��o deve receber endere�os de mem�ria
//Pois trata-se de dois ponteiros..
//Ent�o quando enviar para fun��o voc� deve enviar o endere�o de mem�ria das vari�veis. E estes endere�os ser�o colocados nestas vari�veis
void TrocaNumeros(int* Num1, int* Num2);

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Numero1, Numero2;
	std::cout << "\nDigite o primeiro N�mero: ";
	std::cin >> Numero1;
	std::cout << "\nDigite o Segundo N�mero: ";
	std::cin >> Numero2;
	std::cout << "\nValores antes da troca";
	std::cout << "\nNumero1 = " << Numero1;
	std::cout << "\nNumero2 = " << Numero2;

	//Esta dando erro pois a fun��o n�o espera receber dois n�meros inteiros.. E sim espera receber dois endere�os de mem�ria para ponteiros do tipo int.
	//Logo devemos enviar o endere�o de mem�ria das variaveis

	TrocaNumeros(&Numero1, &Numero2);

	std::cout << "\nValores depois da troca";
	std::cout << "\nNumero1 = " << Numero1;
	std::cout << "\nNumero2 = " << Numero2 << "\n";
	
	std::cout << "\nEndere�o de mem�ria de Numero1 = " << &Numero1;
	std::cout << "\nEndere�o de mem�ria de Numero2 = " << &Numero2 << "\n";
	
	system("PAUSE");
	return 0;
}

void TrocaNumeros(int* Num1, int* Num2)
{
	
	//Deu diferente pois ponteiro � uma vari�vel e portanto possui endere�o alocado na mem�ria. Ele possui dentro dele o endere�o de mem�ria da vari�vel apontada
	std::cout << "\nEndere�o de mem�ria de Num1 da fun��o  = " << &Num1;
	std::cout << "\nEndere�o de mem�ria de Num2 da fun��o  = " << &Num2;
	std::cout << "\nEndere�o de mem�ria contido dentro de Num1  = " << Num1;
	std::cout << "\nEndere�o de mem�ria contido dentro de Num2  = " << Num2;
	//Se Num1 agora � um ponteiro logo Ter� dentro dele um endere�o de mem�ria. Est� dando erro pois estamos tentando colocar um endere�o de mem�ria dentro de uma vari�vel inteira Temp
	//Lembre o nome de uma vari�vel devolve o que est� dentro dela!
	//Neste caso queremos o valor que Num1 aponta e que neste caso ser� Numero1. Por isso diferentemente das refer�ncias os ponteiros precisam ser desreferenciados
	int Temp{ *Num1 };
	//Agora temp recebe o valor apontado por Num1

	//Aqui o valor apontado por Num1(que ser� Numero1) receber� o valor apontado por Num2
	*Num1 = *Num2;
	
	//Num2 passa a ser 10. Logo foi trocado
	//Por�m....
	//o valor apontado por Num2 receber�o valor de Temp
	*Num2 = Temp;
	//Temp � uma vari�vel int normal logo n�o pode nem precisa ser desreferenciada
	

	//tamb�m chamamos isso de PASSAGEM DE ARGUMENTOS PARA A FUN��O POR REFER�NCIA! S� QUE AQUI USANDO PONTEIROS!

}







*************************************

#include <iostream>
#include <math.h>
 
void AlteraNumero(double Numero)
{
	Numero += 2;
}
 
int QuadradoDoValor(double Numero)
{
	return pow(Numero, 2);
}
 
int main()
{
	setlocale(LC_ALL, "portuguese");
	double Num{ 8 };
	AlteraNumero(Num);
	std::cout << "Quadrado do Numero " << Num << " �: " << QuadradoDoValor(Num) << std::endl;
	system("PAUSE");
	return 0;
} 

*****************
Considere o c�digo a seguir, ONDE EST� O ERRO?
Precisa retornar apenas o resultado 64:

#include <iostream>
#include <math.h>
 
void QuadradoDoValor(double Numero)
{
	Numero =  pow(Numero, 2);
}
 
int main()
{
	double Num{ 8 };
        QuadradoDoValor(Num);
	std::cout << Num << std::endl;
	system("PAUSE");
	return 0;
}  



//      RESPOSTA: Falta o e comercial em void QuadradoDoValor(double& Numero)  para referenciar 
**********************************


Considere o c�digo a seguir:

#include <iostream>
#include <math.h>
 
void QuadradoDoValor(double* Numero) // Recebe o endere�o de mem�ria do argumento que ser� enviado
{
	*Numero = pow(*Numero, 2); // Aqui o par�metro Numero est� manipulando o valor de Num pois 
	//est� com
//o endere�o de mem�ria de Num
}
 
int main()
{
	double Num{ 8 };
   	QuadradoDoValor(&Num); // envia o endere�o & da vari�vel Num e n�o o valor dela
	std::cout << Num << std::endl;
	system("PAUSE");
	return 0;
}                                                                                         
Ao executar o c�digo acima ir� aparecer na tela o valor 64 pois est� sendo usado
// o conceito de passagem de argumentos para fun��o por refer�ncia. E neste caso 
//espec�fico utilizando ponteiros*

============================Passagem de argumentos para uma fun��o por valor===============

Ent�o, Na Passagem de argumentos para uma fun��o por valor haver� uma simples 
c�pia do valor do(s) argumento(s) para o(s) par�metro(s) da fun��o chamada.

No caso do c�digo acima uma chamada de argumentos por valor seria assim:

#include <iostream>
#include <math.h>
 
//Numero � o par�metro da fun��o QuadradoDoValor e vai receber apenas o VALOR passado para a 
//fun��o via argumento
void QuadradoDoValor(double Numero) //observe a aus�ncia de ponteiros* ou de refer�ncias&
{
	Numero = pow(Numero, 2);
}
 
int main()
{
	double Num{ 8 };
   	//Num � o argumento enviado para a fun��o QuadradoDoValor e que est� sendo chamada abaixo
        QuadradoDoValor(Num); 
/*chamada da fun��o POR VALOR, ou seja apenas ser� copiado o valor contido 
no argumento Num. Que � o valor atual da vari�vel Num  que � 8
este valor 8 ser� copiado ao par�metro Numero da fun��o QuadroDoValor e assim esta 
fun��o n�o poder� modificar o valor da vari�vel Num pois, recebeu apenas a c�pia do 
valor desta vari�vel.*/
	
std::cout << Num << std::endl;
	system("PAUSE");
	return 0;
}     


=============================Passagem de argumentos para uma fun��o por Refer�ncia===============

Aten��o: O termo refer�ncia neste caso � conceitual e este termo � conhecido n�o somente 
em linguagem C++ mas em todas as linguagens de programa��o que suportam esta funcionalidade. 
O fato � que na linguagem C++ temos tamb�m um recurso que tem o mesmo nome deste conceito:
 refer�ncia e isso pode confundir as coisas. Entenda Passagem de argumentos para fun��o por 
 Refer�ncia como uma funcionalidade que d� poderes a uma fun��o de modificar o valor do 
 argumento passado para ela de dentro da fun��o. Em linguagem C++ isso pode ser feito 
 com os recursos de ponteiros* ou de Refer�ncias&.

Da� a confus�o pois podemos ter em C++:

- Passagem de argumentos para uma fun��o por valor

- Passagem de argumentos para uma fun��o por Refer�ncia usando ponteiros*

  - Passagem de argumentos para uma fun��o por Refer�ncia usando Refer�ncias&

Portanto na  Passagem de argumentos para uma fun��o por Refer�ncia estamos indicando 
que os argumentos enviados ser�o enviados por refer�ncia, o que indica que os par�metros 
da fun��o que ir�o receber estes argumentos, poder�o alterar o valor destes argumentos de 
dentro da fun��o. E em C++ este conceito e funcionalidade da Passagem de argumentos para 
uma fun��o por Refer�ncia pode ser realizada utilizando Ponteiros* ou Refer�ncias&. 
O truque na realidade � voc� enviar o endere�o vari�vel ou criar uma refer�ncia que 
tenha este endere�o permitindo que o par�metro da fun��o altere o conte�do do argumento 
enviado por refer�ncia na chamada desta fun��o.


*******************************************


Considere o c�digo a seguir e leia o texto abaixo ( est� longo mas vale a pena ler :) )

#include <iostream>
#include <math.h>
 
void QuadradoDoValor(double* Numero)
{
	*Numero = pow(*Numero, 2);
}
 
int main()
{
	double Num{ 8 };
   	QuadradoDoValor(&Num);
	std::cout << Num << std::endl;
	system("PAUSE");
	return 0;
}                                                                                         
Na assinatura da fun��o void QuadradoDoValor(double* Numero) este asterisco* 
indica que a fun��o espera receber um endere�o de mem�ria que ser� enviado como 
argumento e que ser� armazenado no par�metro Numero.

Logo a chamada da fun��o QuadradoDoValor(&Num); esta enviando endere�o de Num 
para o par�metro Numero. E por isso Numero poder� trocar o valor de Num pois 
cont�m o endere�o de mem�ria dele.

Como � um ponteiro esta altera��o precisa ser realizada via operador de 
desreferenciamento*. Desta forma, no caso do c�digo acima � preciso ficar
 atento ou atenta ao desreferenciamento do ponteiro via *Numero = pow(*Numero, 2); 

Isso est� informando o seguinte.

O Apontado por Numero RECEBE o Valor retornado pela fun��o Potencia(pow)
 de (Valor Apontado por Numero elevado a 2). 

Como Numero est� com o endere�o de Num ele est� apontando para Num

Logo na pr�tica e como  Num = Num elevado a 2  logo Num = 64

Por isso, na tela ir� aparecer 64 pois Num foi modificado via refer�ncia 
pelo ponteiro Numero que cont�m seu endere�o de mem�ria.

********************************






  
