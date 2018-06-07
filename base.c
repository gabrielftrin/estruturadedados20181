// Recursos básicos da linguagem C

// Incluir no código a biblioteca (conjunto de funções pré-definidas) de funções básicas da liguagem.
#include <stdio.h>

//Incluir um arquivo externo, já codificado (com algumas funções por exemplo)
//#include <cabecalho.h>

// Criar a função principal 'main'
int main ()
{

	// Criar uma variavel, informa o tipo, depois o nome
	int numero;

	//Atribuir um valor a uma variável 
	numero=10;

	//Imprimir um texto na tela
	printf("\n=====Este é um programa em C básico.=====\n\n");
	// A expressão \n serve para o programa pular uma linha

	//Imprimir o valor de uma variável, informa o tipo, depois o nome
	//Para imprimir informe a flag (tipo da variavel) a ser impresso. Neste exemplo usamos %d. % significa que vamos informar o tipo da variavel. 'd' é a flag de representação do tipo da variavel a ser impressa que estamos informando.
	printf("Valor da variavel 'numero': %d \n\n", numero);

	//Imprimir um texto de solicitação ao usuário na tela
	printf("Digite um numero inteiro. \n");

	//Capturar um valor digitado pelo usuário
	scanf("%d", &numero);

	//Imprimir valor digitado
	printf("\nValor digitado:\n%d\n\n", numero);


}