#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguease");
	float media = 0; //Inicia a variavel que vai armazenar a media
	for(int i = 1; i <= 3; i++){ //Inicia um loop que vai repetir 3 vezes
		float nota = 0; //Inicia uma variavel que vai armazenar uma nota
		printf("Qual foi sua nota na P%d: ", i); //Pergunta qual a nota de acordo com a repetição do loop
		scanf("%f", &nota); //Armazena o valor real digitado na variavel nota
		if(i==3) media += nota * 0.2;
		else media += nota * 0.4;
	}
	printf("Media %.2f\n", media); //Mostra o valor da media
	if(media >= 6) printf("Você está aprovad@\n"); //Se a media for maior igual a 6 mosta aprovado
	else printf("Você está reprova@\n"); //Se não mostra reprovado
	return 0;
}
