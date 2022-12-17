#include <stdio.h>
#include <stdlib.h>

void soma_linha(int m[10][10], int slinha[10], int n)
{
    for (int linha = 0; linha < n; linha++)
    {
        for (int coluna = 0; coluna < n; coluna++)
        {
            slinha[linha] += m[linha][coluna];
        }
    }
}

int main(){
    //int m[3][3] = {{1,2,3},{1,2,3},{1,2,3}};
    //int n = sizeof(m)/sizeof(m[0]);
    //int slinha[3] = {0,0,0};
    int m[10][10];
    int slinha[10] = {0,0,0,0,0,0,0,0,0,0};
    int n;

    printf("---Escolha um tamanho para a matriz (2 a 10): ");
    scanf("%i", &n);

    if(n<2||n>10)
    {
        printf("Matriz de tamanho incompativel. Execute novamente.");
        return 0;
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("Valor de M%i%i: ",i+1,j+1);
            scanf("%i",&m[i][j]);
        }
    }

    printf("\n---Matriz M:\n\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%i\t",m[i][j]);
        }
        printf("\n");
    }
    
    soma_linha(m,slinha,n);

    printf("\n---Soma das linhas de M:\n\n");
    for(int linha = 0; linha < n; linha++)
    {
        printf("Soma da linha %i = %i\n",linha+1,slinha[linha]);
    }

    printf("\n");
    return 0;

}