#include <stdio.h>

int totalEstoque = 100;

void adicionarEstoque( int quantidade ){
  totalEstoque += quantidade;
  printf("Itens adiciondados : %d\n", quantidade);
  printf("Estoque atualizado : %d\n", totalEstoque);
}

void removerEstoque(int quantidade){
  if(quantidade <= totalEstoque){
    totalEstoque -= quantidade;
     printf("intens removidos: %d\n", quantidade);
     printf("Estoque atualizado: %d\n", totalEstoque);
  }
  else{
    printf("Erro: quantidade insuficiente no estoque!\n");
  }
 
  
}

int main()
{

  int quantidade;
  
  quantidade = 20;
  adicionarEstoque(quantidade);
  
  quantidade = 15;
  removerEstoque(quantidade);
  
  quantidade = 200;
  removerEstoque(quantidade);
  
  
  return 0 ;  
  
  
  
  
  
  
  
  
  
  
  
  
  
}
