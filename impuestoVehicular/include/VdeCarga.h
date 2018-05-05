#ifndef VDECARGA_H
	#define VDECARGA_H

#include <Vehiculo.h>

	class VehiculoDeCarga: public Vehiculo{
		private:
			int axisNum;
		public:
			VehiculoDeCarga();
			VehiculoDeCarga(float);
			VehiculoDeCarga(VehiculoDeCarga &);
			~VehiculoDeCarga();
			
			void setAxisNum(int);
			
			int getAxisNum();
			
			float calcularMontoExtra();
	};

#endif
