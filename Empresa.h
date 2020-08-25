#ifndef EMPRESA_H
#define EMPRESA_H
#include <string>
using namespace std;


class Empresa
{
	public:
		Empresa();
		Empresa(string nome, string endereco, string cidade, string estado, string CEP, string telefone);
	protected:
		string nome;
		string endereco;
		string cidade;
		string estado;
		string CEP;
		string telefone;
};


#endif
