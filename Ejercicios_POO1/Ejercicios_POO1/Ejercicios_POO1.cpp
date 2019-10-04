#include "Ejercicios_POO1.h"
#include <iostream>
#include <random>
#include <time.h>
using namespace std;

//Funcion Del Ejercicio 1
void cambiar_elemento(int* puntero, int tamano, int nuevo_valor, int indice)
{
	puntero[indice] = nuevo_valor; 
}




int main()
{
	//Ejercicio 1
	int tamano, x, y;
	srand(time(NULL)); 
	cin >> tamano;
	int* elarray = new int[tamano]();
	for (int i = 0; i < tamano; i++)
	{
		elarray[i] = rand() % 100 + 1;
		cout << elarray[i] << " "; 
	}
	cout << endl << "Indice del elemento: ";
	cin >> x;
	cout << endl << "Nuevo Valor: ";
	cin >> y; 
	cout << endl;
	cambiar_elemento(elarray, tamano, y, x);
	for (int i = 0; i < tamano; i++)
	{
		cout << elarray[i] << " ";
	}
	

	return 0;
}

