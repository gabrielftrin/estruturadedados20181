#include <stdio.h>

int main() {

	int numero=0;

	//Estruturas de controle
	//Se... Então... senão
	//Estrutura 'if': Se a condição entre parenteses for verdadeira, executa o que estiver dentro das chaves, se não, pula essa parte.
	if (numero==0) {
	//Usamos == para fazer comparações entre 2 elementos
		numero=5;
	}


	//if else
	//Se a condição não for verdadeira executa o que está dentro das chaves do else
	if (numero==1) {
		printf("O valor é 1. \n");
	}
	else {
		printf("O valor não é 1. \n");
	}


	//Caso... switch case
	//caso uma condição tenha determinado valor executa o que for programado para cada caso.
	switch (numero)	{
		case (10) : {
			printf("Valor: %d\n", numero);
			break;
		}
		case (20) : {
			printf("Valor: %d\n", numero);
			break;
		}
		default : {
			printf("\nO valor não é 10 nem 20. \n");
		}
	}


	//Incondiiconal
	//For: de um valor inicial até um valor final executa o que está dentro das chaves (separados por ; (ponto e virgula) )
	printf("\nImpressão do For \n\n");
	for (int i = 0; i < numero; ++i)
	{
		printf("Iteração:%d ; ", i);
		printf("Valor:%d\n", numero);
	}


	//Condicional
	//while (enquanto): Enquanto tal condição for verdadeira continue executando o que estiver dentro das chaves
	while (numero==0){

/*

while (expr-cond) {
comandos
}
do {
comandos
} while (expr-cond)
de 1 a n repetições
de 0 a n repetições


*/
	}

}