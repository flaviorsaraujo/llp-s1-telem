#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
   char strings[10];
   int i, tamanho, n; 
   
    printf("Digite uma palavra:\n");
    fgets(strings,10,stdin);
    tamanho = strlen(strings); 
    printf("A string invertida:"); 
    for(i=tamanho; i>=0; i--) 
     {
       printf("%c" ,strings[i]);
     } 
    return 0;
}
