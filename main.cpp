/*DESPLEGAR LA TABLA DE MULTIPLICAR QUE EL USUARIO INDIQUE*/
#include <iostream>
int main(int argc, char** argv) {
	int numero, resultado;
	printf("Ingrese un número el cual se mostrará su tabla de multiplicar\n");
	scanf("%d", &numero);
	for(int i=1;i<=10;i++){
		resultado=numero*i;
		printf("%d x %d = %d \n", numero, i, resultado);
	}
	system("pause");
}
