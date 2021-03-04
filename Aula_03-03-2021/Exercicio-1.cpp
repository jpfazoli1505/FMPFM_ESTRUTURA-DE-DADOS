#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	float Peso, Altura;
	float IMC;
	
	cout<<"Informe o Peso....: ";
	cin >> Peso;
	
	cout<<"Informe a Altura..:";
	cin >> Altura;
	
	IMC=Peso/(Altura * Altura);
	
	if(IMC < 20){
		cout << "Abaixo do Peso";
	}
	else if(IMC < 25 && IMC >= 20){
		cout << "Peso Ideal";
	}
	else{
		cout << "Acima do Peso";
	}
	
	return 0;
}