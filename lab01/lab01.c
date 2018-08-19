#include <stdio.h>

/*Função que remove um numero no indice dado de um vetor, reorganizando o mesmo*/
void removeIndice(int indice,int tamanho, int lista[]){
  int i;
  for(i=indice;i<(tamanho-1);i++){
    lista[i] = lista[i+1];
  }
}
 /*Função que concatena dois vetores e poe o resultado na listaSaida*/
void append(int lista1[], int tamanho1,int lista2[],int tamanho2, int listaSaida[]){
  int i,j;
  for(i=0;i<tamanho1;i++){
    listaSaida[i] = lista1[i];
  }
  for(i=tamanho1,j=0;j<tamanho2;i++,j++){
    listaSaida[i] = lista2[j];
  }
}

int main(){
  int i,j,m,n,A[41],B[41],S[81];

  /*Entrada*/
  scanf("%d %d",&m,&n);
  for(i=0;i<m;i++){
    scanf("%d",&A[i]);
  }
  for(i=0;i<n;i++){
    scanf("%d",&B[i]);
  }

  /*Compara cada elemento de A com os elementos de B e, caso sejam iguais, remove esses elementos de ambas as listas e
  atualiza o tamanho dos vetores*/
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      if(A[i] == B[j]){
        removeIndice(i,m,A);
        removeIndice(j,n,B);
        m--;
        n--;
        i--;
      }
    }
  }

  /*Como agora A e B só possuem elementos distintos, concatena os vetores A e B para se ter o vetor de saida S*/
  append(A,m,B,n,S);

  for(i=0;i<m+n;i++){
    printf("%d ",S[i]);
  }
  return 0;
}
