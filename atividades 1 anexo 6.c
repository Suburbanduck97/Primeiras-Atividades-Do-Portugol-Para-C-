#include <stdio.h>

#define texto "Atividade 1"
#define mensagem "Exibicao de Dados"
#define calculo "Exibicao de Calculos"
int main(){
	printf("%s\n", texto);
	
	float numeroA = 0.0 , numeroB = 0.0, soma , subtracao , multiplicacao , divisao;
	
	printf("INSIRA UM NUMERO: ");
	scanf("%f", &numeroA);
	
	printf("\nINSIRA OUTRO NUMERO: ");
	scanf("%f", &numeroB);
	system("cls");
	//Exibindo
	printf("%s\n", mensagem);
	printf("PRIMEIRO NUMERO INSERIDO: %.1f", numeroA);
	printf("SEGUNDO NUMERO INSERIDO: %.1f", numeroB);
	
	//Cálculos
	printf("\n\n%s\n", calculo);
	soma = numeroA + numeroB;
	printf("A SOMA DE %.1f + %.1f = %.1f", numeroA, numeroB, soma);
	
	subtracao = numeroA - numeroB;
	printf("\n\nA SUBTRACAO DE %.1f - %.1f = %.1f", numeroA, numeroB, subtracao);
	
	multiplicacao = numeroA * numeroB;
	printf("\n\nA MULTIPLICACAO DE %.1f x %.1f = %.1f",numeroA, numeroB, multiplicacao);
	
	divisao = numeroA / numeroB;
	printf("\n\nA DIVISAO DE %.1f / %.1f = %.1f", numeroA , numeroB , divisao);
	
	//Fim do programa
	return 0;
	
}
