#include <stdio.h>

void removeIndice(int indice,int tamanho, int lista[]){
  int i;
  for(i=indice;i<(tamanho-1);i++){
    lista[i] = lista[i+1];
  }
}

void append(int lista1[], int tamanho1,int lista2[],int tamanho2, int listaSaida[]){
  int i,j;
  for(i=0;i<tamanho1;i++){
    listaSaida[i] = lista1[i];
  }
  for(i=tamanho1,j=0;j<tamanho2;i++,j++){
    printf("j é: %d e i é: %d\n",j,i );
    listaSaida[i] = lista2[j];
  }
}

int main(){
  int i;
  int A[4] = {1,2,3,4};
  int B[4] = {4,5,6};
  int S[8];
  for(i=0;i<4;i++){
    printf("A[%d] antes é: %d\n ",i,A[i]);
  }
  printf("\n");
  removeIndice(0,4,A);
  for(i=0;i<4;i++){
    printf("A[%d] depois é: %d\n",i,A[i]);
  }

  append(A,3,B,3,S);
  for(i=0;i<6;i++){
    printf("S[%d] depois é: %d\n",i,S[i]);
  }
  return 0;
}
