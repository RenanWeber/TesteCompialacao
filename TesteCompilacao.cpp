#include <stdio.h>
#include <iostream>

int main(void) {

	int varM, varMM;
	printf("digite um valor em metro \n");

	scanf_s("%d", &varM);

	varMM = varM * 1000;

	printf("valor em mm : %d \n", varMM);

	

	printf("pressione outra tecla para finalizar \n");

	system("pause");



	return 0;
}

