#include <iostream> 
//Essa é a biblioteca padrão do C++, semelhante a stdio em C.

/*Conceitinhos:
Inicialização: 

---copy initialization
int width = 4;

---direct initialization
int width(4);

---list initialization -> preferida
int width{4}

Misc.:

[[maybe_unused]] -> Indica que um valor inicializado talvez não seja usado
*/


int main()
{

			//EX2
/*
std::cout << "Type a number in here:";  //Isso aqui é o printf do C++

int x{};

std::cin >> x; //Isso aqui é o scanf do C++

std::cout << "The typed number is: " << x << '\n';
*/

			//EX2

int a{},b{},c{};

std::cout << "Type three numbers here:";

std::cin >> a >> b >> c;

std::cout << "The typed numbers are:" << a << ',' << b << " and " << c;

return 0;
	
}