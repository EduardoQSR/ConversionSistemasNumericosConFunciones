#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <conversiones.h>
int main()
{
	int opc;	
	do
	{
		printf("\n-------------------------");
		printf("\nSELECCIONE UNA OPCION: \n1.- BINARIO\n2.- OCTAL\n3.- DECIMAL\n4.- HEXADECIMAL\n5.- SALIR\n-------------------------\n");
		scanf("%d", &opc);
		switch(opc)
		{
			case 1://De BINARIO a OCTAL, DECIMAL y HEXADECIMAL
				system("cls"); conversionUno(); break;
			case 2://De OCTAL a BINARIO, DECIMAL y HEXADECIMAL
				system("cls"); conversionDos(); break;
			case 3://De DECIMAL a BINARIO, OCTAL y HEXADECIMAL
				system("cls"); conversionTres(); break;
			case 4://De HEXADECIMAL a BINARIO, OCTAL y DECIMAL
				system("cls"); conversionCuatro(); break;
			case 5:
				system("cls"); printf("\n\n\n\n            Saliendo de Sistema ");
				break;
			default: printf("\n\n\n\n\n\n           ERROR... Opcion Incorrecta");
		}
		getch();
		system("cls");
	}while(opc!=5);
}
