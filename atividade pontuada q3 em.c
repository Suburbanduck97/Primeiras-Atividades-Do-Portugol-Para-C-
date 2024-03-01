#include <stdio.h>

//Declarando constantes
#define texto "INSIRA VALORES INTEIROS!"
#define sistema1 "Dados correnpondetes a soma"
#define sistema2 "Dados correspondentes a multiplicacao"
int main(){
	printf("%s\n", texto);
	//Declarando variáveis
	int numeroA = 0 , numeroB = 0 , resultado = 0;
	
	//Solicitando dados
	printf("INSIRA UM NUMERO INTEIRO: ");
	scanf("%d",&numeroA);
	
	printf("INSIRA UM OUTRO NUMERO INTEIRO: ");
	scanf("%d",&numeroB);
	system("cls");
	
	//Cálculo do Sistema  e condicional
	if(numeroA == numeroB){
		resultado = numeroA + numeroB;
		printf("%s\n", sistema1);
		printf("\nPRIMEIRO NUMERO INSERIDO: %d", numeroA);
		printf("\nSEGUNDO NUMERO INSERIDO: %d", numeroB);
		printf("\nRESULTADO DA SOMA: %d", resultado);
	}else if(numeroA != numeroB){
		resultado = numeroA * numeroB;
		printf("%s\n", sistema2);
		printf("\nPRIMEIRO NUMERO INSERIDO: %d", numeroA);
		printf("\nSEGUNDO NUMERO INSERIDO: %d", numeroB);
		printf("\nRESULTADO DA MULTIPLICACAO: %d", resultado);
	}
	
  //Fim do programa
  return 0;
	
}
