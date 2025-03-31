#include <stdio.h>
int main()
{
  
  void dobrar_valor( int num ) {
    num = num * 2 ;
    printf("o valor dobrado e: %d\n", num);
  };
  
  void triplicar_valor_ref( int *num ) {
    *num = *num * 3 ;
    printf("o valor triplicado e: %d\n", *num);
  };
  
  
  int numero = 10;
  
  printf("antes da funçao %d\n", numero );
  dobrar_valor(numero);
  printf("apos a funçao %d\n", numero );
  
  printf("antes da funçao %d\n", numero );
  triplicar_valor_ref(&numero);
  printf("apos a funçao %d\n", numero );
  
  
  
}