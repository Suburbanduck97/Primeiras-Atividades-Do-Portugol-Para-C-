#include <stdio.h>

//Declarando constantes
#define texto "Calcular a Area do Triangulo"
#define processo "Dessa Forma: "
#define exibindo "Exibindo Valores: "

int main(){
	printf("%s\n", texto);
	//Declarando variáveis
	float base = 0.0 , altura =  0.0, area = 0.0;
	
	//Solicitando valores
	printf("INSIRA A BASE: ");
	scanf("%f",&base);
	
	printf("INSIRA A ALTURA: ");
	scanf("%f",&altura);
	system("cls");
	
	//Calculando
	area = (base * altura) / 2;
	
	//Exibindo
	printf("%s\n", exibindo);
	printf("\nBASE DO TRIANGULO: %.1f", base);
	printf("\nALTURA DO TRIANGULO: %.1f", altura);
	printf("\n\n%s\n", processo);
	printf("CALCULO DA AREA: base x altura / 2");
	printf("\n\n%.1f x %.1f / 2 = %.1f", base, altura, area);
	printf("\n\nAREA DO TRIANGULO: %.1f", area);
	
	//Fim do programa
	return 0;
}
