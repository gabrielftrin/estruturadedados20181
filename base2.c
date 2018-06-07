#include <stdio.h>

int main() {

	int numero;

	//Estruturas de controle
	//Se... Então... senão
	//Estrutura 'if': Se a condição entre parenteses for verdadeira, executa o que estiver dentro das chaves, se não, pula essa parte.
	if (1==1) {
	//Usamos == para fazer comparações entre 2 elementos
		numero=4;
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
			printf("O valor não é 10 nem 20. \n");
		}
	}

	//Incondiiconal
	//For: de um valor inicial até um valor final executa o que está dentro das chaves (separados por ; (ponto e virgula) )
	printf("\nImpressão do For \n\n");
	for (int i = 1; i < numero; ++i)
	{
		printf("Valor: %d\n", i);
	}
}