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

 int a = 10; 
 int b = 30; 
 int result; 

 result1 = a+b;
 result2 = a/a; 
 result3 = (a*b)*a; 

int captura (){
	int a; 
	printf("Digite o numero:\n");
	scanf("%d", &a);
	return a;
	 
}

int main () {

	int a, b;
	a=captura ();
	b=captura ();

	printf("%d\n", soma (a,b));
}