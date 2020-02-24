#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
using namespace std;

int main (){
    setlocale(LC_ALL, "Portuguese");

	float A, B, C, Delt, Raiz_pos, Raiz_neg, B1;

	std::cout << "Digite valor de 'a' \n"<<std::endl;
	std::cin >> A;
	std::cout << "'a' = "<< A <<"\n"<<std::endl;
	std::cout << "Digite valor de 'b' \n"<<std::endl;
	std::cin>> B;
	std::cout << "'a' = "<< A <<", 'b' ="<< B<<"\n"<<std::endl;
	std::cout << "Digite valor de 'c' \n"<<std::endl;
	std::cin>> C;
	std::cout << "'a' = "<< A <<", 'b' ="<< B<<", 'c'= "<<C<<"\n"<<std::endl;

	B1 = pow(B,2);
	Delt = B1-4*A*C;

	std::cout <<"Delta tem valor de:" << Delt <<"\n"<<std::endl;

	if (Delt < 0){
        cout << "A equação não tem raizes reais "<<endl;
	}	else if (Delt == 0){
        cout << "As raizes são iguais"<<endl;
	}	else{
        cout<< "As raizes são positivas "<<endl;
	}

	system ("pause");
	return 0;
}
