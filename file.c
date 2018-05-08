#include <stdio.h>
#define TAM_VET 4

void bolha (int v[], int n){
int i, j, a, b;
    for (i = n; i>0 ; i--) {
        for (j = 0 ; j <i ; j++) {
            a = v[j];
            b = v[j+1];
            if (a>b) {
                v[j+1]=a;
                v[j]=b;
            }
        }
    }
}


void main (){
    int v[TAM_VET];
    int n,i;
v[0]=3;
v[1]=7;
v[2]=1;
v[3]=2;
v[4]=9;
n = 4;
    for (i=0;i<5;i++){
        printf("Vetor %d\n", v[i]);
    }
    bolha(&v[TAM_VET],&n);

for (i=0;i<5;i++){
	
	printf("Vetor ordenado pelo bolha %d\n", v[i]);
}


}
