/*
Elaborar un programa que muestre  los números pares comprendidos entre 10 y 20 inclusive.
Datos de entrada: Ninguno
Datos de salida: Impresión de los pares entre 10 y 20
Restricciones: Ninguna
*/


#include<iostream>
#include<conio.h>

using namespace std;

void main()
{
	int i;
	i = 10;
	cout << "los numeros pares entre 10 y 20 son \n";
	for (i = 10; i <= 20; i=i + 2)
		cout << i << "\n";

	_getch();

}