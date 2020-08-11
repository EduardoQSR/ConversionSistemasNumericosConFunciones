#include <stdio.h>
#include <string.h>
#include <math.h>

void conversionUno()//De Binario a OCTAL, DECIMAL y HEXADECIMAL
{
//	BINARIO -> DECIMAL
	fflush(stdin);
	char binario[50];
	int suma_parcial=0, maxPos, potencia;
	printf("\nINGRESE NUMERO BINARIO: ");
	gets(binario);
	maxPos=strlen(binario);
	potencia=maxPos-1;
	for(int j=0; j<=strlen(binario); j++)
	{
		int sumabinaria=0;
		sumabinaria=pow(2, potencia);
		if(binario[j]=='1')
		{
			suma_parcial=suma_parcial+sumabinaria;
		}
		potencia=potencia-1;
	}
	printf("\nDECIMAL:     %d", suma_parcial);
	printf("\nOCTAL:       %o", suma_parcial);
	printf("\nHEXADECIMAL: %X", suma_parcial);
}

void conversionDos()//De OCTAL a BINARIO, DECIMAL y HEXADECIMAL
{
	fflush(stdin);
	char octal[50];
	int bandera=0, maxPos=0, potencia, suma_octal=0;
	printf("\nINGRESE UN NUMERO EN BASE 8: ");
	gets(octal);
	maxPos=strlen(octal);
	potencia=maxPos-1;		
	//Reviso que la cantidad introducica pertenece al conjunto de los numeros octales
	for(int i=0; i<=maxPos-1; i++)
	{
		if(octal[i]=='0' || octal[i]=='1' || octal[i]=='2' || octal[i]=='3' || octal[i]=='4' || octal[i]=='5' || octal[i]=='6' || octal[i]=='7')
		{	
		}else
		{
			bandera++;
		}
	}
	//Bloque III: Evalua la cantidad introducida en base a la variable "bandera"
	if(bandera>0)//Si el valor introducido no corresponde a un valor octal, no hace nada
	{
		printf("\n\n     Error... El numero que ha ingresado no corresponde a un numero Octal");
	}else
	{
		if(bandera==0)//Si el valor introducido corresponde a un valor octal, hace las operaciones de conversion
		{
			for(int j=0; j<=strlen(octal); j++)
			{	
				switch(octal[j])
				{
					case '1':
						suma_octal=suma_octal+(1)*(pow(8, potencia));
						break;
					case '2':
						suma_octal=suma_octal+(2)*(pow(8, potencia));
						break;
					case '3':
						suma_octal=suma_octal+(3)*(pow(8, potencia));
						break;
					case '4':
						suma_octal=suma_octal+(4)*(pow(8, potencia));
						break;
					case '5':
						suma_octal=suma_octal+(5)*(pow(8, potencia));
						break;
					case '6':
						suma_octal=suma_octal+(6)*(pow(8, potencia));
						break;
					case '7':
						suma_octal=suma_octal+(7)*(pow(8, potencia));
						break;
				}
				potencia=potencia-1;
			}
			//Bloque IV: Muestro el valor a Decimal
			printf("\nDECIMAL:     %d", suma_octal);
			printf("\nHEXADECIMAL: %x", suma_octal);
			int modulo=0, decimal, octal[20], aux=0;			
			do
			{
				modulo=suma_octal%2;
				if(modulo==0)
				{
					suma_octal=suma_octal/2;
					octal[aux]=0;
					aux++;					
				}else
				{
					suma_octal=(suma_octal-1)/2;
					octal[aux]=1;
					aux++;
				}
			}while(suma_octal!=0);
			//Bloque II: Muestro  el valor en Binario
			printf("\nBINARIO:     ");
			for(int i=aux-1; i>=0; i--)
			{
				printf("%d", octal[i]);
			}
			
		}
	}
}

void conversionTres()//De DECIMAL a BINARIO, OCTAL y HEXADECIMAL
{
	int decimal, modulo=0, aux=0, bin[20];
	printf("\nINGRESE UN NUMERO EN BASE 10: ");
	scanf("%d", &decimal);
	printf("\nOCTAL:       %o", decimal);
	printf("\nHEXADECIMAL: %X", decimal);
	do
	{
		modulo=decimal%2;
		if(modulo==0)
		{
			decimal=decimal/2;
			bin[aux]=0;
			aux++;					
		}else
		{
			decimal=(decimal-1)/2;
			bin[aux]=1;
			aux++;
		}
	}while(decimal!=0);
	//Bloque II: Muestro  el valor en Binario
	printf("\nBINARIO:     ");
	for(int i=aux-1; i>=0; i--)
	{
		printf("%d", bin[i]);
	}
}

void conversionCuatro()//De HEXADECIMAL a BINARIO, OCTAL y DECIMAL
{
	int hexadecimal, modulo=0, aux=0, hex[20];
	printf("\nINGRESE UN NUMERO EN BASE 16: ");
	scanf("%x", &hexadecimal);
	int auxhexa=hexadecimal;
	printf("\nOCTAL:       %o", hexadecimal);
	printf("\nDECIMAL:     %d", hexadecimal);
	do
	{
		modulo=auxhexa%2;
		if(modulo==0)
		{
			auxhexa=auxhexa/2;
			hex[aux]=0;
			aux++;					
		}else
		{
			auxhexa=(auxhexa-1)/2;
			hex[aux]=1;
			aux++;
		}
	}while(auxhexa!=0);
	//Bloque II: Muestro  el valor en Binario
	printf("\nBINARIO:     ");
	for(int i=aux-1; i>=0; i--)
	{
		printf("%d", hex[i]);
	}
}
