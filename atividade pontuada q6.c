#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float nota[2], media;
	int i;
	
	for(i = 0; i < 2; i++){
		printf("INSIRA A PRIMEIRA NOTA: ");
		scanf("%f",&nota[i]);
		
		printf("INSIRA A SEGUNDA NOTA: ");
		scanf("%f",&nota[i]);
		system("cls");
		
    
    media = (nota[i] + nota[i]) / 2;
    
    printf("\nPRIMEIRA NOTA SELECIONADA: %.1f", nota[i]);
    printf("\nSEGUNDA NOTA SELECIONADA: %.1f", nota[i]);
    printf("\nSUA M�DIA �: %.1f", media);
    if(media >= 6){
    	printf("\nVOC� EST� APROVADO(A)!");
	}else if(media == 4 && media <= 4){
		printf("\nVOC� EST� REPROVADO(A)!");
	}else if(media <6 && media <= 4){
		printf("\nVOC� EST� EM RECUPERA��O!");
	}
	break;
}

}
