#include <stdio.h>
#include <string.h>

int main()
{
  char buffer [100];
  int idade = 25;
  
  sprintf(buffer,"a idade do joao e %d anos ", idade);
  printf("%s\n",buffer);
    
    return(0);
}