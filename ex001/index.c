/*
1. Faça um programa que peça dois numeros inteiros e 
gere os numeros inteiros que estao no intervalo entre eles.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, i;
    
    printf("Digite um numero: ");
    scanf("%i", &n1);
    
    printf("Digite outro numero: ");
    scanf("%i", &n2);
    
    if(n1<n2){
        for(i=n1;i<=n2;i++){
            printf("%i, ",i);
        }
    }else{
        for(i=n2;i<=n1;i++){
            printf("%i, ",i);
        }
    }
    
    return 0;
}
