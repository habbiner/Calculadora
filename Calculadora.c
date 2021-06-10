#include <stdio.h>
#include <stdlib.h>

int main(void) {

    char operacao;
    float n1;
    float n2;
    float resposta;

        printf("Digite o primeiro numero: ");
        scanf("%f", &n1);

        fflush(stdin);

        printf("Qual a operecao desejada: ");
        scanf("%c", &operacao);

        printf("Digite o segundo valor: ");
        scanf("%f", &n2);

            switch (operacao)

            case '+':{
                resposta = n1 + n2;
            break;	
                
            case '-':
                resposta = n1 - n2;
            break;
                
            case '*':
                resposta = n1 * n2;
            break;
                
            case '/':
                resposta = n1 / n2;
            break; 
                
            default:

        printf("Nao existe essa opcao");				
        }

        printf("\nResultado: %.2f \n \n", resposta);
        system("pause");
        
	return 0;
}
