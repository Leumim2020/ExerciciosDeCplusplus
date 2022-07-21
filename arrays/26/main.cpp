/*Fa�a um programa que calcule o desvio padr�o de um vetor v contendo n = 10 n�meros,
onde m � a media do vetor.*/

#include <iostream>
#include <math.h>
#define size 10

int main(){
	
	double v[size],soma=0,media=0,somatorio=0,desvio_padrao; 
	//double r,s;
	
	// input valores
	for(int i=0;i<size;i++){
		std::cout<<"Valor"<<i+1<<"-> ";
		std::cin>>v[i];
		soma+=v[i];
	}
	// calculando a m�dia do vetor
	media = soma / size;
	
	// calcular o somat�rio
	for(int j=0; j < size; j++){
		// fun��o pow(x,y) calcula a pot�ncia sendo x a base e y o expoente
		somatorio += pow(v[j] - media,2);
		/*Ou r = v[i] - media; 
			somatorio += r*r;
		*/
	}
	
	// calcular a raiz quadrada do desvio padr�o
	desvio_padrao= sqrt(somatorio/(size-1));
	/*Ou s = somatorio/(size-1);
		desvio_padrao = sqrt(s);
	*/
	
	std::cout<<"O desvio padrao e "<<desvio_padrao;
	
	
	return 0;
}
