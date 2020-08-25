#ifndef RESTAURANTE_H
#define RESTAURANTE_H
#include <string>
#include "Empresa.h"

class Restaurante : public Empresa
{
	public:
		Restaurante();
		Restaurante(string nome, string endereco, string cidade, string estado, string CEP, string telefone, string tipoComida, float precoMedio);
		
		void getData();
		void putData();
	protected:
		string tipoComida;
		float precoMedio;
};

#endif

