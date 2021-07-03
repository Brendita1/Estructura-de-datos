#include <iostream>
#include<stdlib.h>
#include<conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
struct Nodo{
	int dato;
	Nodo *derecha;
	Nodo *izquierda;
};

Nodo *crearNodo(int);
Nodo *arbol = NULL;
void insertar_nodo(Nodo *&arbol,int num);

int main() {

	int opcion,dato;
	do
	{
		cout<<"Insertar nodo:\n";
		cin>>dato;
		insertar_nodo(arbol,dato);
		cout<<"\n";
		cout<<"Desea insertar otro nodo 1) si 2) no \n";
		cin>>opcion;
	}while(opcion !=2);
	return 0;
}

Nodo *crear_nodo(int num)
{
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato = num;
	nuevo_nodo->derecha = NULL;
	nuevo_nodo->izquierda= NULL;
	return nuevo_nodo;
}

void insertar_nodo(Nodo *&arbol,int num)
{
	if(arbol == NULL)
	{
		Nodo *nuevo_nodo = crear_nodo(num);
		arbol = nuevo_nodo;
	}
	else
	{
		int valorRaiz = arbol->dato;
		if(num< valorRaiz)
		{
			insertar_nodo(arbol->derecha,num);
		}
	}
}

