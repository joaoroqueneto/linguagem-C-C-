#include <ctype.h>
#include <stdio.h>

int main()
{
    
    char texto [] = "Programaçao 123";
    int i = 0 ;
    
    //pecorrer cada caractere da string
    while (texto[i]){
        //verificando se e uma letra
        if (isalpha(texto[i])){
            printf("%c e uma letra. \n", texto[i]);
            
         if (islower(texto[i])){
             texto[i] = toupper(texto[i]);
             printf("convertido para minusculo: %c\n", texto[i]);
         }   
        }
        //verificando se e um numero 
        else if (isdigit(texto[i])){
          printf("%c um numero. \n", texto[i]);
        }
        i++;
    }
    
    
    return (0);
}