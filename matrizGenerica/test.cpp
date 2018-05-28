#include <iostream>
#include <utility>
#include <Figura.h>
#include <Circulo.h>
#include <Cuadrado.h>
#include <Matriz.h>


int main(){

	int f = 0, c = 0;

	std::cout << "\n";
	std::cout << "setFilas: ";
	std::cin >> f;

	std::cout << "setColumnas: ";
	std::cin >> c;

	std::cout << "\n";

	/*		Prueba con objetos Cuadrado		*/
{
	/*		Creacion de una matriz		*/
	Matriz<Cuadrado> matrizFig (f,c);

	std::pair <int,int> pos (0,0);

	{
		Cuadrado square0(1);
		Cuadrado square1(2);
		Cuadrado square2(3);
		Cuadrado square3;
		/*		Prueba del operador >>		*/
		std::cin >> square3;

		/*		Introduccion de elementos a la matriz		*/
		matrizFig.insertElement(square0);
		matrizFig.insertElement(square1);
		matrizFig.insertElement(square2);

		matrizFig.insertElement(square0);
		matrizFig.insertElement(square1);
		matrizFig.insertElement(square2);
		matrizFig.insertElement(square3);

		/*		Busqueda de elementos con getPosition	*/
		pos = matrizFig.getPosition(square3);
		std::cout << "Position: (" << pos.first << "," << pos.second << ") (if -1, no existe.)" << std::endl;	

		pos = matrizFig.getPosition(square2);
		std::cout << "Position: (" << pos.first << "," << pos.second << ") (if -1, no existe.)" << std::endl;
	}

	/*		Prueba de metodos observadores de datos de la matriz		*/
	std::cout << "Filas: " << matrizFig.getFilas() << std::endl;
	std::cout << "Columnas: " << matrizFig.getColumnas() << std::endl;
	std::cout << "TotalSize: " << matrizFig.getTotalSize() << std::endl;
	std::cout << "ObjAmount: " << matrizFig.getObjAmount() << "\n" << std::endl;

	/*		Acceso a elementos de la matriz		*/
	for(int i = 0; i < f; i++){
		std::cout << "\t";
		for(int j = 0; j < c; j++){
			std::cout << matrizFig.getElement(i,j)->getArea() <<"\t";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;

	/*	Comprobacion de uso de lugares en la matriz con isEmpty	*/
	for(int i = 0; i < f; i++){
		std::cout << "\t";
		for(int j = 0; j < c; j++){
			std::cout << (matrizFig.isEmpty(i,j) ? "Vacio." : "Lleno.") <<"\t";
		}
		std::cout << std::endl;
	}

	std::cout << "\n";

	/*	Impresion de elementos de la matriz con el operador <<	*/
	for(int i = 0; i < f; i++){
		for(int j = 0; j < c; j++){
			std::cout << *matrizFig.getElement(i,j);
		}
	}
}	/*		Destruccion de la matriz	*/

	std::cout << "\n";

	/*		Prueba con objetos Circulo		*/
{
	/*		Creacion de una matriz		*/
	Matriz<Circulo> matrizFig (f,c);

	std::pair<int,int> pos (0,0);

	{
		Circulo round0(1);
		Circulo round1(2);
		Circulo round2(3);

		/*		Introduccion de elementos a la matriz		*/
		matrizFig.insertElement(round0);
		matrizFig.insertElement(round1);
		matrizFig.insertElement(round2);

		matrizFig.insertElement(round0);
		matrizFig.insertElement(round1);
		matrizFig.insertElement(round2);

		matrizFig.insertElement(round0);
		matrizFig.insertElement(round1);

		Circulo round3(4);

		/*		Busqueda de elementos con getPosition	*/
		pos = matrizFig.getPosition(round3);
		std::cout << "Position: (" << pos.first << "," << pos.second << ") (if -1, no existe.)" << std::endl;	

		pos = matrizFig.getPosition(round2);
		std::cout << "Position: (" << pos.first << "," << pos.second << ") (if -1, no existe.)" << std::endl;	
	}

	/*		Prueba de metodos observadores de datos de la matriz		*/
	std::cout << "Filas: " << matrizFig.getFilas() << std::endl;
	std::cout << "Columnas: " << matrizFig.getColumnas() << std::endl;
	std::cout << "TotalSize: " << matrizFig.getTotalSize() << std::endl;
	std::cout << "ObjAmount: " << matrizFig.getObjAmount() << "\n" << std::endl;

	/*		Acceso a elementos de la matriz		*/
	for(int i = 0; i < f; i++){
		std::cout << "\t";
		for(int j = 0; j < c; j++){
			std::cout << matrizFig.getElement(i,j)->getArea() <<"\t";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;
	
	/*	Comprobacion de uso de lugares en la matriz con isEmpty	*/
	for(int i = 0; i < f; i++){
		std::cout << "\t";
		for(int j = 0; j < c; j++){
			std::cout << (matrizFig.isEmpty(i,j) ? "Vacio." : "Lleno.") <<"\t";
		}
		std::cout << std::endl;
	}

	std::cout << "\n";

	/*	Impresion de elementos de la matriz con el operador <<	*/
	for(int i = 0; i < f; i++){
		for(int j = 0; j < c; j++){
			std::cout << *matrizFig.getElement(i,j);
		}
	}

	std::cout << "\n\tScroll up para ver todo el resultado del programa." << std::endl;
}	/*		Destruccion de la matriz	*/

	std::cout << std::endl;

return 0;
}