#include <iostream>

using namespace std;

#include "Fila.h"

int main()
{
	Fila f;
	Nova(f);
	bool w = true;
	while (w) {
		cout << "\nEscolha uma opcao:\n";
		cout << "1) Entra\n";
		cout << "2) Sai\n";
		cout << "3) Primeiro\n";
		cout << "4) Comprimento\n";
		cout << "5) Mostra\n";
		cout << "0) Terminar\n";
		cout << "Escolha uma opcao : ";
		int escolha;
		cin >> escolha;
		int elemento;
		switch (escolha) {
		case 1: //Entra
			cout << "Coloque um elemento na fila: ";
			cin >> elemento;
			Entra(f, elemento);
			break;
		case 2: //Sai
			try {
				Sai(f);
			}
			catch (int e) {
				cout << "Ocorreu excepcao numero " << e << ". Fila vazia! " << endl;
			}
			break;
		case 3: //Primeiro
			try {
				cout << Primeiro(f) << " e' o primeiro elemento da fila." << endl;
			}
			catch (int e) {
				cout << "Ocorreu excepcao numero " << e << ". Fila vazia! " << endl;
			}
			break;
		case 4: //Comprimento
			cout << endl;
			cout << "Comprimento: " << Comprimento(f) << endl;
			break;
		case 5: //Mostra
			Escreve(f);
			break;
		case 0: //Terminar
			w = false;
			break;
		default:
			cout << "\n\n***Opcao invalida*** \n***Tente de novo***\n\n";
			cin.sync();
			cin.clear();
		}
	}
	return 0;
}