#include <stdio.h>

int main(){
	int qnt_macas; //Inicia a variavel que vai armazenar a quantidade de maças compradas
	float total, lucro; //Inicia as variaveis para armazenar o valor total e o lucro
	printf("Quantidade de  maças vendidas nesse lote: "); //Pergunta a quantidade de maças vendidas
	scanf("%d", &qnt_macas); //Armazena a quantidade de maças vendidas
	if(qnt_macas >= 12) total = qnt_macas; //Se a quantidade for maior igual a 12 adiciona o valor ao total
	else total = qnt_macas * 1.3; //Se não adiciona mais 30 centavos para o valor de cada maça
	lucro = total * 1.3; //Faz o calculo do lucro de 30% com base no valor total
	printf("O valor da venda desse lote é de: R$:%.2f\n", lucro); //Mostra o valor total do lote
	return 0;
}
