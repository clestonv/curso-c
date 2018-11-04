#include <stdio.h>

int main(){
	printf("**********************************\n");
	printf("* Bem-vindo ao Jogo da Adivinhação *\n");
	printf("**********************************\n");
	
	int chute;
	
	printf("Qual e o seu chute? ");
	scanf("%d", &chute);
	printf("Voce chutou o numero %d!", chute);
}
