#include <iostream>
#include <string>
#include <stdlib.h>
#include "Restaurante.h"

using namespace std;


Restaurante::Restaurante() {
	
}

Restaurante::Restaurante(string nome, string endereco, string cidade, string estado, string CEP, string telefone, string tipoComida, float precoMedio):Empresa::Empresa(nome, endereco, cidade, estado, CEP, telefone) {
	this->tipoComida = tipoComida;
	this->precoMedio = precoMedio;
}

void Restaurante::getData() {
	cout << "======> CADASTRO DE EMPRESA <======" << endl;
	cout << "Informe o nome da empresa" << endl;
	getline (cin,nome);
	
	cout << "Informe o endereço da empresa" << endl;
	getline (cin,endereco);
	
	cout << "Informe a cidade da empresa" << endl;
	getline (cin,cidade);
	
	cout << "Informe o estado da empresa" << endl;
	getline (cin,estado);
	
	cout << "Informe o CEP da empresa" << endl;
	getline (cin,CEP);
	
	cout << "Informe o telefone da empresa" << endl;
	getline (cin,telefone);
	
	cout << "Informe o tipo da comida" << endl;
	getline (cin,tipoComida);
	
	cout << "Informe o preço médio" << endl;
	cin >> precoMedio;
	
	system("cls");
}

void Restaurante::putData() {
	cout << "======> RESULTADO DO CADASTRO <======" << endl;
	cout << "EMPRESA: " + nome << endl;
	cout << "ENDEREÇO: " + endereco << endl;
	cout << "CIDADE: " + cidade << endl;
	cout << "ESTADO: " + estado << endl;
	cout << "CEP: " + CEP << endl;
	cout << "TELEFONE: " + telefone << endl;
	
	cout << "TIPO DE COMIDA: " + tipoComida << endl;
	cout << "PREÇO MÉDIO: ";
	cout << precoMedio << endl;
	cout << "=============> OBRIGADO <============" << endl;
}
