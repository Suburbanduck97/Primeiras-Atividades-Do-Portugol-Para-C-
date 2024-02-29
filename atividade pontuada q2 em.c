#include <stdio.h>

#define texto "Insira seus dados da forma: (Aa)"
#define exibicao "Exibindo Dados: "
int main(){
	//Declarando Variáveis
	char nome[100], estadoCivil[100], sexo;
	int anosDeCasada = 0;
	
	//Solicitando Dados
	printf("%s\n", texto);
	printf("INSIRA SEU NOME: ");
	scanf("%s",&nome);
	
	printf("SEXO: ");
	fflush(stdin);
	scanf("%c",&sexo);
	
	//Primeira condicional, solicitando dados.
	switch(sexo){
		case 'M':
			printf("QUAL SEU ESTADO CIVIL: ");
	        scanf("%s",&estadoCivil);
	        system("cls");
			
			//Exibindo Dados
			printf("%s\n", exibicao);
			printf("\nNOME: %s", nome);
			printf("\nESTADO CIVIL: %s", estadoCivil);
			printf("\nSEXO: %c", sexo);
		break;
		case 'F':
		    printf("QUAL SEU ESTADO CIVIL: ");
	        scanf("%s",&estadoCivil);
			
		if(estadoCivil == "Casada"){
				printf("QUANTOS ANOS DE CASADA? ");
				scanf("%d",&anosDeCasada);
				system("cls");
				
				//Exibindo dados
				printf("\n%s\n", exibicao);
				printf("\nNOME: %s", nome);
			    printf("\nESTADO CIVIL: %s", estadoCivil);
			    printf("\nSEXO: %c", sexo);
			    printf("\nANOS DE CASADA: %d", anosDeCasada);
		  
		}else if(estadoCivil == "Solteira"){
				//Exibindo dados
				printf("%s\n", exibicao);
				printf("\nNOME: %s", nome);
			    printf("\nESTADO CIVIL: %s", estadoCivil);
			    printf("\nSEXO: %c", sexo);
			    printf("\nANOS DE CASADA: %d", anosDeCasada);
	    }
		break;
		default: 
		        printf("\n\nINSIRA DADOS VÁLIDOS");
		break;        	
	}
	
		//Fim do Programa
	     return 0;
}
