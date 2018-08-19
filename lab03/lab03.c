#include <stdio.h>
#define MAX 100

/*Função que compara duas strings, devolve 1 caso sejam iguais e devolve zero caso contrário*/
int string_igual(char string1[],char string2[]){
  int i = 0;
  while (1){
     if (string1[i] == string2[i]){
       if (string1[i] == '\0'){
         return 1;
       }
       i++;
     } else {
       return 0;
     }
  }
}

/*Função que concatena duas strings e armazena o resultado em string1*/
void CAT(char string1[],char string2[]){
  int length,i,j;
  for (i=0;string1[i] != '\0';i++);
  length = i;
  for (i=length,j=0;string2[j] != '\0';i++,j++){
    string1[length] = string2[j];
  }
}

int main(){
  char string1[MAX] = "text";
  char string2[MAX] = "texto";
  CAT(string1,string2);
  printf("%s \n",string2);
  /*while​ (1){
    scanf("%s", comando);
    if​ (string_igual(comando, "CAT")){

    } else​ if​ (string_igual(comando, "SUB")) {
      int​ x, tam;
      scanf("%d %d", &x, &tam);

    } else​ if​ (string_igual(comando, "END")) {
      break​;
    }
  }*/
  return 0;
}
