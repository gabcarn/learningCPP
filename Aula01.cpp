#include <iostream>

using std::cout;
using std::cin;

void printando(int x); //Forward declaration, introduzida na aula 2.7

int main()
{
	int x;
	
	cout << "Digite um numero aqui";
	
	cin >> x;
	printando(x);
	
	return 0;
}


/* O resumo da aula 2.8 é basicamente sobre como fazer o que é feito acima:
 dados muitos arquivos C++, chamar uma função de outro em um segundo. */ 