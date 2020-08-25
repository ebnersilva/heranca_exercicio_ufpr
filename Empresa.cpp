#include "Empresa.h"

Empresa::Empresa() {
	
}

Empresa::Empresa(string nome, string endereco, string cidade, string estado, string CEP, string telefone) {
	this->nome = nome;
	this->endereco = endereco;
	this->cidade = cidade;
	this->estado = estado;
	this->CEP = CEP;
	this->telefone = telefone;
};
