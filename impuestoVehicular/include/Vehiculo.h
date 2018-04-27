#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>

class Vehiculo {
	private:
		std::string placa;
		float costoActual;
	protected:
		float tasa;
	public:
		Vehiculo();
		Vehiculo(std::string, float);
		Vehiculo(Vehiculo&);
		~Vehiculo(){};
		
		std::string getPlaca() const;
		void setPlaca(std::string);
		float getCostoActual() const;
		void setCostoActual(float);
		float getTasa();
		
		//	virtual float calcularMontoExtra();
};

#endif
