#include <stdio.h>
#define MAX 312

/*Função que lê da entrada uma matriz quadrada*/
void scan_matrix_nxn(float matrix[][MAX],int n){
  int i,j;
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%f",&matrix[i][j]);
    }
  }
}

/*Função que escaneia a entrada e coloca em um vetor*/
void scanArray(int array[],int n){
  int i;
  for(i=0;i<n;i++){
    scanf("%d",&array[i]);
  }
}

/*Função que cria uma matriz de permutação a partir de um vetor p*/
void create_perm_matrix(int p[],float perm[][MAX],int n){
  int i,j;
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      perm[i][j] = 0;
    }
  }
  for(i=0;i<n;i++){
    perm[p[i]-1][i] = 1;
  }
}

/*Função que imprime uma matriz quadrada com 1 casa depois da virgula e sem espaço após o ultimo digito da linha*/
void print_matrix_nxn(float matrix[][MAX],int n){
  int i,j;
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(j != n-1){
          printf("%.1f ",matrix[i][j]);
      } else {
          printf("%.1f",matrix[i][j]);
      }
    }
    printf("\n");
  }
}

/*Função que multiplica duas matrizes quadradas*/
void mult_matrix_nxn(float A[][MAX],float B[][MAX],float C[][MAX],int n){
  int i,j,k;
  float soma;
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      soma = 0;
      for(k=0;k<n;k++){
        soma += A[i][k]*B[k][j];
      }
      C[i][j] = soma;
    }
  }
}

int main(){
    float B[MAX][MAX];
    float result[MAX][MAX];
    float A[MAX][MAX];
    int n,p[MAX];

    /*Entradas*/
    scanf("%d ",&n);
    scanArray(p,n);
    scan_matrix_nxn(B,n);

    /*Cria matriz de permutação a partir do vetor p*/
    create_perm_matrix(p,A,n);

    /*Multiplica a matriz de permutação pela matriz B*/
    mult_matrix_nxn(A,B,result,n);

    /*Imprime o resultado*/
    print_matrix_nxn(result,n);

    return 0;
}
