/*
tipo_de_retorno nome_da_função (listagem de parâmetros) {
bloco de comandos e declarações de variáveis locais
}
*/

#include <stdio.h>

int soma (int a, int b) {
	int resultado = a+b;
	return resultado;
}

int main () {
	int entrada1, entrada2, result;
	printf("Digite os valores que quer somar:");
	scanf(" %d %d", &entrada1,&entrada2);
	printf("%d\n", soma(entrada1,entrada2));
}