#include <stdlib.h>
#include <stdio.h>



int fibonacci(int); //Recursividad De Fibonacci

int main(int argc, char** argv) {
	int numero;
	
	printf("Digite El Numero De Elementos A Calcular Fibonacci: ");
	scanf("%d",&numero);
	
	for(int i=1; i<=numero; i++){
		printf("%d, ", fibonacci(i));
	}
	
	system("pause");
	return 0;
}

int fibonacci(int n){
	if(n==0||n==1){
		return n;
	}else{
		return (fibonacci(n-1)+fibonacci(n-2));
	}
}
