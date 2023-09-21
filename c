Utilizando a linguagem C


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero,numero2;
    char operacao;
    float resultado;

        printf("Informe a operacao desejada [+,-,*,/]: ");
        scanf("%c",&operacao);
        printf("Informe o numero para calculo da tabuada: ");
        scanf("%i",&numero);

    if(operacao=='+'){
        printf("\nTabuada do %c para o numero %i:\n",operacao,numero);
        for(numero2=0;numero2<11;numero2++){
             resultado = (numero+numero2);
             printf("\n%i %c %i = %.f", numero,operacao,numero2,resultado);
        }
    }
    else if(operacao=='-'){
        printf("\nTabuada do %c para o numero %i:\n",operacao,numero);
        for(numero2=0;numero2<11;numero2++){
             resultado = (numero-numero2);
             printf("\n%i %c %i = %.f", numero,operacao,numero2,resultado);
        }
    }
    else if(operacao=='*'){
        printf("\nTabuada do %c para o numero %i:\n",operacao,numero);
        for(numero2=0;numero2<11;numero2++){
             resultado = (numero*numero2);
             printf("\n%i %c %i = %.f", numero,operacao,numero2,resultado);
        }
    }
    else if(operacao=='/'){
        printf("\nTabuada do %c para o numero %i:\n",operacao,numero);
        printf("\n%i %c 0 = %i nao possui divisao por 0",numero,operacao,numero);
        for(numero2=1;numero2<11;numero2++){
             resultado =((float)numero/(float)numero2);
             printf("\n%i %c %i = %.2f", numero,operacao,numero2,resultado);
        }
    }
    else{
        printf("\nOperacao (%c) nao e valida!",operacao);
    }

    //para nao fechar após o calculo
    int i;
    printf("\n\n");
    scanf("%i",&i);
       return 0;
}
