#include <stdio.h>
/*
Criando função cubo
*/
void cubo(float a){
	
	float resultado;
	resultado = (a * a *a);
	
	printf("O cubo de %f eh %f", a,resultado);}
/* 
Fim da função cubo
*/
	
	
int main(){
/***********************
Implemente no sistema utilizando função que
leia um valor para o usuario o valor do cubo desse valor.
************************/


float valor; //criando variavel
 printf("          P  /_\\  P          \n");
	    printf("         /_\\_|_|_/_\\        \n");
	    printf("     n_n | ||. .|| | n_n      \n");
	    printf("     |_|_|nnnn nnnn|_|_|      \n");
	    printf("    |\" \"  |  |_|  |\" \"  | \n");
	    printf("    |_____| ' _ ' |_____|     \n");
	    printf("          \\__|_|__/          \n");
	    printf("	>>>>>>>>>cubo<<<<<<<<< \n");
	    printf("\n\n");
	

	printf(" Digite o valor que gostaria de elevar ao cubo! \n");//mostrando na tela
		scanf ("%f",&valor);//Entrada de valores 
		cubo (valor); // mostrando na tela o resultado
			
		
return 0;
}
