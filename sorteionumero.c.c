#include <stdio.h>
#include <string.h>
#include <time.h>
int main()
{
  
  srand(time(NULL));
  int sorteio = rand() % 45;
  printf("o sorteado foi o numero: %d\n", sorteio);
  
    
    
  return 0;
}