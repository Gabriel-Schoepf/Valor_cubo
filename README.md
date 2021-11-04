# Valor_cubo
Elevando um valor digitado pelo usuário ao cubo

Instale o Dev C++;
plataforma  Windown;
Desenvolvido em C;
Autor: Gabriel Schoepf;
Data: 04-11-2021;

O sistema lê um numero introduzido pelo usuario e o eleva ao cubo.
Foi criada uma função para realizar a operação:
A função é:

void cubo(float a)
{
	float resultado; // criando variavel
	resultado = (a * a *a); // realizando calculo
	printf("O cubo de %f eh %f", a,resultado);// mostrando na tela
}

A entrada de valores se da por:
printf(" Digite o valor que gostaria de elevar ao cubo! \n");//pedimos para o usuario digitar um valor;
		scanf ("%f",&valor);//Entrada de valores //guardamos o valor em &valor;
    
temos retorno do valor pela função cubo que criamos no inicio:
cubo (valor); // mostrando na tela o resultado.
