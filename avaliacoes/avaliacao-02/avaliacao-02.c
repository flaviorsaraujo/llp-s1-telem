// 1a QUESTÃO: As estruturas de repetição na linguagem C, também chamadas de laço permitem executar comandos que se repetem sob uma determinada condição. São três comandos de repetição: for, while e do while. Responda:

// a) Qual a diferença entre o while e o do .. while;

//	While ele primeiro verifica a condição para depois executar o bloco de comandos.
	
//	do..while primeiro vai executar o bloco uma vez para em seguida verificar a condição.

// b) No comando for há três expressões que definem como o laço executa. São: a inicialização da variável de controle, o teste realizado com a variável de controle e alteração que é feita na variável de controle. Escreva um programa em C onde é mostrado os valores de inteiros pares e múltiplos de 5.

// Escreva um programa em C onde é mostrado os valores de inteiros pares e múltiplos de 5.
	#include <stdio.h>

	int main()
	{
		int mutiplo, i;
		for(i=1;i<=100;i++)
		{
		break;
			if(i%2==0 && i%5==0)
			{
				printf("%d ",i);
			}
		}
		return 0;
	}

// 2a QUESTÃO: Os comandos break e continue são usados respectivamente para sair do bloco de repetição em um laço e para saltar para o final do bloco e iniciar uma nova repetição. Escreva programas C que executam as seguintes funcionalidades:

// a) Use um laço while para imprimir números pares múltiplos de 4. Use uma variável de controle onde seu incremento é de uma unidade. Quando a variável for testada e não for múltiplo de 4 use o continue. Caso contrário imprima o número.

	#include <stdio.h>

	int main()
	{
		int i = 0;
		while(i<=100)
		{
			i++;
			if(i%4 != 0 || i%2 != 0)
				continue;
			printf("%d\n", i);
		}
		return 0;
	}
