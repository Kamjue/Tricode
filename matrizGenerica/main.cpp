#include <iostream>
#include <utility>
#include <Figura.h>
#include <Circulo.h>
#include <Cuadrado.h>
#include <Matriz.h>

int main(){

	int f = 0, c = 0;
	int selectMenu = 0, counterMenu = 0;

	std::cout << "\n";
	std::cout << "Introduzca cantidad de filas: ";
	std::cin >> f;

	std::cout << "Introduzca cantidad de columnas: ";
	std::cin >> c;

	Matriz<Cuadrado> matrizFig (f,c);

	do{

		std::cout << "\nDesea introducir "<< ((selectMenu == 1)? "otro" : "un") <<" elemento a la matriz? (1 Si, 0 No): ";
		std::cin >> selectMenu;

		if(selectMenu == 1){

			std::cout << "\n\t";
			Cuadrado squareIn;
			std::cin >> squareIn;

			matrizFig.insertElement(squareIn);
			counterMenu++;
		}

	}while(selectMenu != 0 && counterMenu < f * c);

	selectMenu = 0;
	counterMenu = 0;

	std::cout << "\nDatos de la Matriz: " << std::endl;

	std::cout << "\n\tFilas: " << matrizFig.getFilas() << std::endl;
	std::cout << "\tColumnas: " << matrizFig.getColumnas() << std::endl;
	std::cout << "\tTotalSize: " << matrizFig.getTotalSize() << std::endl;
	std::cout << "\tObjAmount: " << matrizFig.getObjAmount() << "\n" << std::endl;

	do{

		std::cout << "\nDesea buscar "<< ((selectMenu == 1)? "otro" : "un") <<" elemento en la matriz? (1 Si, 0 No): ";
		std::cin >> selectMenu;

		if(selectMenu == 1){

			std::cout << "\n\t";
			Cuadrado squareSearch;
			std::cin >> squareSearch;

			std::pair <int,int> pos (0,0);

			pos = matrizFig.getPosition(squareSearch);

			if (pos == std::make_pair(-1,-1)){
				std::cout << "\n\tNo esta en la matriz." << std::endl;
			} else {
				std::cout << "\n\tEsta en la posicion: (" << pos.first << "," << pos.second << ")" << std::endl;
			}
		}

	}while(selectMenu != 0);

	std::cout << "\nAreas de los cuadrados en la matriz: " << std::endl;

	for(int i = 0; i < f; i++){
		std::cout << "\t";
		for(int j = 0; j < c; j++){
			std::cout << matrizFig.getElement(i,j)->getArea() <<"\t";
		}
		std::cout << std::endl;
	}

	std::cout << "\nPosiciones en uso en la matriz: " << std::endl;

	for(int i = 0; i < f; i++){
		std::cout << "\t";
		for(int j = 0; j < c; j++){
			std::cout << (matrizFig.isEmpty(i,j) ? "Vacio." : "Lleno.") <<"\t";
		}
		std::cout << std::endl;
	}

	std::cout << "\nMuestra de elementos con el operador << : " << std::endl;

	for(int i = 0; i < f; i++){
		for(int j = 0; j < c; j++){
			std::cout << "\t" << *matrizFig.getElement(i,j);
		}
	}

	std::cout << std::endl;

return 0;
}