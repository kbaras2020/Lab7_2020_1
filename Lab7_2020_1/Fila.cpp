#include "Fila.h"
#include <iostream>

using namespace std;

void Nova(Fila& f) {
	f.primeiro = 0;
}

void Entra(Fila& f, int elemento) {
	Fila::Item* aux = new Fila::Item;
	aux->valor = elemento;
	aux->seguinte = 0;
	if (f.primeiro == 0)
		f.primeiro = aux;
	else {
		Fila::Item* temp = f.primeiro;
		while (temp->seguinte != 0)
			temp = temp->seguinte;
		temp->seguinte = aux;
	}
}

void Sai(Fila& f) throw (int) {
	if (Vazia(f)) throw ERRO_FILA_VAZIA;
	Fila::Item* aux = f.primeiro;
	f.primeiro = aux->seguinte;
	delete aux;
}

bool Vazia(Fila& f) {
	return f.primeiro == 0;
}

int Primeiro(Fila& f) throw (int) {
	if (Vazia(f)) throw ERRO_FILA_VAZIA;
	return f.primeiro->valor;
}

int Comprimento(Fila& f) {
	Fila::Item* aux = f.primeiro;
	int comp = 0;
	while (aux != 0) {
		comp++;
		aux = aux->seguinte;
	}
	return comp;
}

void Escreve(Fila& f) {
	Fila::Item* aux = f.primeiro;
	if (Vazia(f))
		cout << "->NULL" << endl;
	else
	{
		cout << endl;
		while (aux != 0) {
			cout << aux->valor << "->";
			aux = aux->seguinte;
		}
		cout << "NULL" << endl;
	}
}