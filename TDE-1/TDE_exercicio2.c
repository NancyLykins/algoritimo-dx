#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "portuguease"); //Define o idioma para portuguea para utilizar acentuação
	char week_days[7][15] = {"terça", "segunda", "domingo", "sabado", "sexta", "quinta", "quarta"}; //Inicia uma matrix com os dias da semana na ordem dos mais proximos da aula de algoritimos
	char day[15] = "", tmp_day[15] = ""; //Inicia duas variaveis para o dia
	printf("Que dia da semana é hoje? ");
	scanf("%s", tmp_day); //Adiciona a variavel temporaria o valor que o usuário digitar
	for(int i = 0; i <= strlen(tmp_day); i++){ //Inicia um loop que passa pir todos os caracteres digitados
		if(tmp_day[i] == '-') break; //Compara o caractere com hifen e se for encerra o loop
		strncat(day, &tmp_day[i], 1); //Se não adiciona o caractere a variável
	}
	for(int i = 0; i < 7; i++){ //Inicia outro loop que passa pelos dias da semana iniciados na matrix
		if(strcmp(day, week_days[i])==0){ //Compara a string digitada com os dias na semana da matrix
			if(i == 0) printf("Hoje tem aula de algoritimo\n"); //Se o valor de i for igual a zero imprime a string
			if(i == 1) printf("Amanhã tem aula de algoritimos\n"); //Se o valor de i for igual a i imprime a string
			if(i > 1) printf("Faltam %d dias para aula de algoritimo\n", i); //Se o valor de i for maior que 1 imprime a quantidade de dias que faltam para a aula de algoritimos
		}
	}
	return 0;
}
