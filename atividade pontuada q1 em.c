#include <stdio.h>

//Declarando Constantes
#define texto "Insira os dados abaixo da forma (INTEIRO)."
#define exibicao "Exibindo Dados Inseridos: "

int main(){
	//Declarando variáveis
	int numeroA = 0, numeroB = 0, numeroC = 0 , soma = 0;
	printf("%s\n", texto);
	printf("\nINSIRA UM VALOR: ");
	scanf("%d",&numeroA);
	//Solicitando dados
	printf("INSIRA UM SEGUNDO VALOR: ");
	scanf("%d",&numeroB);
	
	printf("INSIRA UM TERCEIRO VALOR: ");
	scanf("%d",&numeroC);
	system("cls");
	
	//cálculo do sistema
	soma = numeroA + numeroB;
	//Exibindo dados
	printf("%s\n", exibicao);
	printf("\nPRIMEIRO NUMERO INSERIDO: %d", numeroA);
	printf("\nSEGUNDO NUMERO INSERIDO: %d", numeroB);
	printf("\nTERCEIRO NUMERO INSERIDO: %d", numeroC);
	printf("\nRESULTADO DA SOMA: %d", soma);
	
	//Sistema condicional
	if(soma > numeroC){
		printf("\n\nA SOMA DE %d + %d E MAIOR QUE %d", numeroA , numeroB , numeroC);
	}else if(soma == numeroC){
		printf("\n\nA SOMA DE %d + %d E IGUAL A %d", numeroA , numeroB , numeroC);
	}else if(soma < numeroC){
		printf("\n\nA SOMA DE %d + %d E MENOR QUE %d", numeroA , numeroB , numeroC);		
	}
	
	//Fim do programa
	return 0;
	
}
