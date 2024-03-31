#include <stdio.h>
#include <string.h>

int main(){
	char estados[4][2][20] = {
		{"santa catarina", "Catarinense"},
		{"são paulo", "Paulista"},
		{"rio grande do sul", "Rio Grandense"},
		{"paraná", "Paranaense"}
	}; //Inicia uma matrix com o nome dos estados e naturalidade para cada um deles
	char estado[20] = "", estado_lower[20] = ""; //Inicia duas variaveis uma pro eatado digitado e uma para ela em minusculo
	for(int i = 0; i < 4; i++) printf("%s\n", estados[i][0]); //Inicia um loop que mostra todos os estados
	printf("Digite o nome do seu estado: "); 
	fgets(estado, sizeof(estado), stdin); //Le 20 caracters digitados ou até apertar enter
	char *nl = strchr(estado, '\n'); //Procura pelo caractere de quebra de linha e adiciona o endereço dele ao ponteiro nl
	if(nl != NULL) *nl = '\0'; //Se encontrar o caractere substitui ele por um caractere de finalização de string
	else{ //Se não mostra um erro por causa do estouro no buffer
		printf("Digite uma opção valida e tente novamente\n");
		return 1;
	}
	for(int i = 0; i < strlen(estado); i++){ //Inicia um loop que passa por todos os caracteres do nome do estado digitado
		int c = estado[i]; //inicia uma variavel uma variavel que armazena o valor ASCII de cada caractere
		if(c < 97 && c != 32) c += 32; //Se esse valor for menor que 97 indica que a letra é maiuscula, então adiciona 32 a ele oq passa para minusculo. Se o valor for 32 (corespondente ao espaço) pula o caractere
		estado_lower[i] = c; //Passo o caractere novamente para texto e adiciona a string em minusculo
	}
	for(int i = 0; i < 4; i++){ //Inicia um loop que passa por todos os estados da matrix
		if(strcmp(estados[i][0], estado_lower) == 0){ //Se o eatado for igual ao que o usuario digitou mostra o adjetivo patrio correspondente
			printf("Então você é: %s\n", estados[i][1]);
			return 0; //Encerra o codigo caso encontre o valor na matrix
		}
	}
	printf("Digite uma opção valida e tente novamente\n"); //Se não encontrar mostra o erro
	return 1;
}
