#ifndef MOTO_H
	#define MOTO_H

#include <Vehiculo.h>

	class Moto: public Vehiculo{
		private:
			float motorCC;
		public:
			Moto();
			Moto(float);
			Moto(Moto &);
			~Moto();
			
			void setMotorCC(float);
			
			float getMotorCC();
			
			float calcularMontoExtra();
	};

#endif
