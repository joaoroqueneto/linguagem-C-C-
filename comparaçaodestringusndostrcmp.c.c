#include <stdio.h>
#include <string.h>

int main()
{
   char string1[] =  "programacao";
   char string2[] =  "prograacao";
   
   if ( strcmp(string1,string2) == 0) {
     printf ("as strings sao iguais. \n");
   }
   
   else printf ("as strings sao diferentes. \n");
    
    return(0);
}