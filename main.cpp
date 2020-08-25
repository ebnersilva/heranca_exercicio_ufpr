#include <iostream>
#include <locale.h>

using namespace std;

#include "Restaurante.h"

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	
	Restaurante restaurante;
	
	restaurante.getData();
	
	restaurante.putData();

	
	return 0;
}
