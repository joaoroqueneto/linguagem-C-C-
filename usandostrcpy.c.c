#include <stdio.h>
#include <string.h>

int main()
{
   char origem[] = "ola,mundo!";
   char destino[50];
   strcpy(destino,origem);
   
   printf("conteudo copiado: %s\n", destino);
    
    return(0);
}