#include <Circulo.h>

Circulo::Circulo(){
	radio = 0;
}
Circulo::Circulo(float r){
	radio = r;
}
Circulo::Circulo(Circulo &c){
	radio = c.radio;
}
Circulo::~Circulo(){}

void Circulo::setRadio(float r){
	radio = r;
}
float Circulo::getRadio(){
	return radio;
}

float Circulo::getArea(){
	return 3.141592 * (radio * radio);
}

bool Circulo::operator == (const Circulo &c2){
	if (this->radio == c2.radio){
		return true;
	}
	return false;
}

Circulo Circulo::operator + (const Circulo &c2){

	Circulo aux;

	aux.radio = this->radio + c2.radio;

	return aux;
}
Circulo Circulo::operator * (const Circulo &c2){

	Circulo aux;

	aux.radio = this->radio * c2.radio;

	return aux;
}

std::ostream& operator << (std::ostream &out, const Circulo &c){
	
	out << "Radio: " << c.radio << " , Area: " << c.radio * c.radio << std::endl;
	return out;	
}

void operator >> (std::istream &in, Circulo &c){
	
	float r = 0;
	
	std::cout << "Introduzca longitud del radio: ";
	std::cin >> r;

	c.radio = r;	
}