/* Fa�a um programa que preencha um vetor com 10 n�meros reais, calcule e mostre a 
quantidade de n�meros negativos e a soma dos n�meros positivos desse vetor. */
#include "iostream"
#include "conio.h"
// Size cont�m o tamanho do array
const int size = 10;
// const � = 130 e const � =163
const char e = 130;
const char u = 163;

int main(void){

	float array_valor[size];
	float soma_positivo=0;
	int qtd_negativo=0;
	// Preenchendo o array com 10 n�meros reais
	for(int i=0;i<size;i+=1){
		std::cout<<"N"<<u<<"mero"<<i+1<<"-> ";
		std::cin>>array_valor[i];
		if(array_valor[i]<0){
			// Se array[i]<0 indica que � negativo
			qtd_negativo+=1;
		}else{
			// Somando os valores positivos do array
			soma_positivo+=array_valor[i];
		}
	}
	std::cout<<std::endl;
	std::cout<<"A quantidade de n"<<u<<"meros negativos no array "<<e<<" "<<qtd_negativo<<".";
	std::cout<<"\n E a soma dos n"<<u<<"meros positivos no array "<<e<<" "<<soma_positivo<<".";
	

	getch();
	return 0;
}
