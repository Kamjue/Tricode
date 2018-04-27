#include <Vehiculo.h>
#include <Moto.h>
#include <VdeCarga.h>
#include <iostream>

int main() {
	Vehiculo carro;
	Moto moto;
	VehiculoDeCarga camion;
	
	std::cout << "Vehiculo\nPlaca: " << carro.getPlaca() << "\nCosto: " << carro.getCostoActual() << "\n";
	std::cout << "Moto\nPlaca: " << moto.getPlaca() << "\nCosto: " << moto.getCostoActual() << "\n";
	std::cout << "Camion\nPlaca: " << camion.getPlaca() << "\nCosto: " << camion.getCostoActual() << "\n";
	
	std::cout << "El monto extra de la moto es: " << moto.calcularMontoExtra() << "\n";
	std::cout << "CC del motor de la moto: " << moto.getMotorCC() << "\n";
	
	moto.setMotorCC(1234.5678);
	std::cout << "El monto extra de la moto es: " << moto.calcularMontoExtra() << "\n";
	std::cout << "CC del motor de la moto: " << moto.getMotorCC() << "\n";
	
	std::cout << "La tasa es " << moto.getTasa() << std::endl;
}

