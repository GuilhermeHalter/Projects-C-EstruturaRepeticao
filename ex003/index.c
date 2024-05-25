/*
3. Faça um programa que leiadez numeros inteiros e 
calcule a diferenca entre o maior e o menor numero do conjunto.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int numero, maior, menor, i;
    
    for (i=1;i<=10;i++){
        printf("Digite o %i numero", i);
        scanf("%i",&numero);
        fflush(stdin);
        
        if(i==1){
			maior=numero;
			menor=numero;
		}else{
			if (numero > maior){
				maior = numero;
			}
			if (numero < menor){
				menor = numero;
			}
		}
    }

    printf("A diferenca e %i\n",maior-menor);
    
    return 0;
}
