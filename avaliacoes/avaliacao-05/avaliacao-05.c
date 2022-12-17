#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fp;
    const int size = 50;
    char texto[size];

    printf("Digite o que deseja salvar: ");
    fgets(texto,size, stdin);

    fp = fopen("arquivo.txt", "w");

    if(fp == NULL)
    {
        printf("Problema ao abrir. tente novamente.");
        return 0;
    }else{
        printf("Arquivo salvo com sucesso.");
    }

    fputs(texto, fp);
    fclose(fp);

    return 0;
}