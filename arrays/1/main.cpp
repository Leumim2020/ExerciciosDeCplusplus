/*                                           
1. Fa�a um programa que possua um vetor denominado A que armazene 6 numeros inteiros. 
O programa deve executar os seguintes passos:
(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
(b) Armazene em uma variavel inteira (simples) a soma entre os valores das posi��es
A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
(c) Modifique o vetor na posi��oo 4, atribuindo a esta posi��oo o valor 100. 
(d) Mostre na tela cada valor do vetor A, um em cada linha.
*/
#include <iostream>
#define tamanho 6
using namespace std;
int main(){
	int A[tamanho]={1,0,5,-2,-5,7};
	int soma;
	soma = A[0]+A[1]+A[5];
	cout<<"A somde de "<<A[0]<<"+"<<A[1]<<"+"<<A[5]<<" = "<<soma<<endl;
	A[4]={100};
	for(int i = 0;i<6;i++){
		cout<<"Valor do vetor A: "<<A[i]<<endl;
	}
	system("pause");
	return 0;
}
