#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    printf("Digite um numero. O programa irá salvar os 10 primeiros multiplos desse numero em um arquivo.\nNumero: ");

    int num = 3;
    scanf("%i", &num);

    int mult[10];

    for (int i = 0; i < 10; i++)
    {
        mult[i] = num * (i+1);
    }

    FILE *fp;
    fp = fopen("arquivo.txt", "w");

    if (fp == NULL)
    {
        printf("Problema ao abrir. tente novamente.");
        return 0;
    }
    else
    {
        printf("Arquivo aberto com sucesso.");
    }

    for (int i = 0; i < 10; i++)
    {
        fprintf(fp, "%i\n", mult[i]);
    }

    fclose(fp);

return 0;
}