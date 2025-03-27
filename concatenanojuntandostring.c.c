#include <stdio.h>
#include <string.h>

int main()
{
   char saudacao [50] = "ola,";
   char nome [] = "mundo!";
   
   strcat(saudacao,nome);
   
   printf("%s\n",saudacao);
    
    return(0);
}