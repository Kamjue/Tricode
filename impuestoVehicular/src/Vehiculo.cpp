#include <Vehiculo.h>

Vehiculo::Vehiculo() {
	this -> placa = "666999";
	this -> costoActual = 0.0;
	this -> tasa = 0;
};

Vehiculo::Vehiculo(std::string placa, float costoActual) {
	this -> placa = placa;
	this -> costoActual = costoActual;
	this -> tasa = 0;
};

Vehiculo::Vehiculo(Vehiculo &v){
	this -> placa = v.getPlaca();
	this -> costoActual = v.getCostoActual();
	this -> tasa = 0;
};

std::string Vehiculo::getPlaca() const {
	return this -> placa;
};

void Vehiculo::setPlaca(std::string placa) {
	this -> placa = placa;
};

float Vehiculo::getCostoActual() const {
	return this -> costoActual;
};

void Vehiculo::setCostoActual(float costoActual) {
	this -> costoActual = costoActual;
};

float Vehiculo::getTasa() {
	return this -> tasa;
}

float Vehiculo::calcularMontoExtra(){
	return 0;
}
