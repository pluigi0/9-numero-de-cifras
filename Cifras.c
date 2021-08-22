#include <stdio.h>

int calculo(int numero);

int main(){
	int numero, cifras;
	
	printf("Ingrese un numero: ");
	scanf("%i",&numero);
	
	
	
	cifras = calculo(numero);
	printf("El numero introducido es: %i.\n",numero);
	printf("El numero introducido %i tiene %i cifra(s).\n",numero,cifras);
	
	
	system("pause");
	return 0;
}

int calculo(int numero){
	static int cifras = 1;
	
	 while(numero/10>0)
    {
        numero = numero / 10;
        cifras++;
    }
    
    return cifras;
}
