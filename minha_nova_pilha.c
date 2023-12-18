#include <stdio.h>
#include <stdlib.h>

#define TAM 4

typedef struct {
  int pilha[TAM];
  int qtd;
} tipo_pilha;

void empilha(tipo_pilha *pilha, int valor);
int desempilha(tipo_pilha *pilha);
void imprime_pilha(tipo_pilha pilha);
int topo_pilha(tipo_pilha pilha);

int main() {

  tipo_pilha pilha;

  pilha.qtd = 0;


  //empilha(&pilha, 10);
  imprime_pilha(pilha);
  topo_pilha(pilha);


  desempilha(&pilha);
  imprime_pilha(pilha);
  topo_pilha(pilha);

}



void empilha(tipo_pilha *pilha, int valor) {

  pilha->pilha[pilha->qtd] = valor;
  pilha->qtd++;
  
}


int desempilha(tipo_pilha *pilha){
  
  if(pilha->qtd > 0) {

  int valor;

  valor = pilha->pilha[pilha->qtd - 1 ];
  
  pilha->qtd--; 

  } else {
    return printf("erro!");
  }
 

}

void imprime_pilha(tipo_pilha pilha) {
  printf("\nPILHA: [");
  for(int i = 0; i<pilha.qtd; i++){
    printf(" " "%d " "", pilha.pilha[i]);
}
  printf("]\n");
}


int topo_pilha(tipo_pilha pilha){

  int topo;

  topo = pilha.pilha[pilha.qtd - 1];

  printf("O topo é -> %d\n", topo);

}