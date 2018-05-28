#include <Cuadrado.h>

Cuadrado::Cuadrado(){
	lado = 0;
}
Cuadrado::Cuadrado(float l){
	lado = l;
}
Cuadrado::Cuadrado(Cuadrado &c){
	lado = c.lado;
}
Cuadrado::~Cuadrado(){}

void Cuadrado::setLado(float l){
	lado = l;
}
float Cuadrado::getLado(){
	return lado;
}

float Cuadrado::getArea(){
	return lado * lado;
}

bool Cuadrado::operator == (const Cuadrado &c2){
	if (this->lado == c2.lado){
		return true;
	}
	return false;
}

Cuadrado Cuadrado::operator + (const Cuadrado &c2){

	Cuadrado aux;

	aux.lado = this->lado + c2.lado;

	return aux;
}
Cuadrado Cuadrado::operator * (const Cuadrado &c2){

	Cuadrado aux;

	aux.lado = this->lado * c2.lado;

	return aux;
}

std::ostream& operator << (std::ostream &out, const Cuadrado &c){
	
	out << "Lado: " << c.lado << " , Area: " << c.lado * c.lado << std::endl;
	return out;	
}

void operator >> (std::istream &in, Cuadrado &c){
	
	float l = 0;
	
	std::cout << "Introduzca longitud del lado: ";
	std::cin >> l;

	c.lado = l;	
}