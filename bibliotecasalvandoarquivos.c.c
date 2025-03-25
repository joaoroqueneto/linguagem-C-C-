
#include <stdio.h>
int main()
{
    FILE *arquivo;//ponteiro para o arquivo 
    char nome[50];
    int idade;
    
    arquivo = fopen("dados.txt", "w");
    
    if (arquivo == NULL);
    printf(" erro arquivo nao existente \n");
    //coletando dados do cliente 
    printf("digite o nome : ");
    scanf("%s", nome);
    printf("digite sua idade: ");
    scanf("%d", &idade);
    fprintf(arquivo, "Nome: %s\n Idade: %d\n", nome, idade);

    fclose(arquivo);
    
    //reabrindo outro arquivo no modo "r" para letura 
    arquivo = fopen("dados.txt", "r");
    if (arquivo == NULL);
    printf("erro no arquivo nao existente \n");
    //lendo os dados do arquivo 
    fscanf(arquivo, "nome: %s\n idade %d\n", nome, &idade );
    //exibindo oque foi lido 
    printf("dados lidos do arquivo: \n");
    printf("nome: %s\n idade: %d\n", nome, idade);
    
    //fechando arquivo
    fclose(arquivo);
    
    

    return 0;
}


