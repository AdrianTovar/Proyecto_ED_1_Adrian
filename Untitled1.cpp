#include <stdio.h>
main()
{
	int valores[5] = {200,150,100,-50,300};
	int suma; /* Un entero que ser� la suma */
	suma = 0; /* Valor inicial */
	
	for (int i=0; i<=4; i++)
		suma += valores[i];
	
	printf("Su suma es %d", suma);
}

