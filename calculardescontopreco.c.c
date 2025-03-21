/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

float calcularDesconto(float preco, float percentual) {
        return preco * (percentual / 100);
    };
    
void exibirTotal (float preco, float desconto){
    float total= preco - desconto;
    printf("o valor final com desconto :%.2f\n", total);
};    

int main(){
    
    float preco, percentualDesconto, desconto;
   
    printf("digite o valor do produto  e:");
    scanf("%f", &preco);
    printf("digite o percentual de desconto :");
    scanf("%f", &percentualDesconto);
    
    desconto = calcularDesconto(preco, percentualDesconto);
    
    exibirTotal(preco, desconto);
    
    
    
    return 0;
}