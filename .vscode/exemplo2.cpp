#include<stio.h>
int main(void){	
	float nota1,nota2,media;
	printf("\nDigite suas notas: ");
	scanf("%f %f",&nota1, &nota2);
	media =  (nota1+nota2)/2;
	printf("\n Media: %.2f", media);
	if (media >= 6) {
		printf("Parabens!");
	}
	return 0; 
} 