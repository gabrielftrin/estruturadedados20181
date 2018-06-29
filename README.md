# estruturadedados

Para passar um vetor para uma função usando linguagem C utiliza-se um ponteiro como parâmetro da função. Ao usarmos o ponteiro como parâmetro, na realidade estamos passando o endereço inicial do vetor e não os seus elementos.

Vamos exemplificar uma passagem de vetor em uma função através de um exemplo prático.

O programa a seguir recebe 10 notas e armazena-as em um vetor.

Para efetuar o cálculo da média foi implementada uma função que recebe a quantidade de elementos do vetor e o seu endereço inicial, cujo protótipo é:

float media (int n, float *vnotas);

Posteriormente, no corpo da função efetuamos o processamento que manipula os dados do vetor de modo a calcular a média.
 
Existem dois métodos de passagem de parâmetros para funções:

Passagem por valor – permite usar dentro de uma função uma cópia do valor de uma variável, porém não permite alterar o valor da variável original (somente a cópia pode ser alterada).

Passagem por referência – É passada para a função uma referência da variável, sendo possível alterar o conteúdo da variável original usando-se esta referência.

Na linguagem C a passagem por referência é implementada com o uso de ponteiros.

Leia mais em Brainly.com.br - https://brainly.com.br/tarefa/17080092#readmore
