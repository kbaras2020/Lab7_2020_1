#pragma once
#ifndef FILA_H
#define FILA_H

const int ERRO_FILA_VAZIA = 1;

struct Fila {
	struct Item {
		int valor;
		Item* seguinte;
	};
	Item* primeiro;
};
void Nova(Fila& f);
void Entra(Fila& f, int elemento);
void Sai(Fila& f) throw (int);
bool Vazia(Fila& f);
int Primeiro(Fila& f) throw (int);
int Comprimento(Fila& f);

void Escreve(Fila& f);
#endif