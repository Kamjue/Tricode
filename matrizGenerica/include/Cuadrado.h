#ifndef CUADRADO_H
	#define CUADRADO_H

#include <iostream>
#include <Figura.h>

	class Cuadrado : public Figura{
		private:
			float lado;
		public:
			Cuadrado();
			Cuadrado(float);
			Cuadrado(Cuadrado &);
			~Cuadrado();
		
			void setLado(float);
			float getLado();

			float getArea();

			bool operator == (const Cuadrado&);

			Cuadrado operator + (const Cuadrado&);
			Cuadrado operator * (const Cuadrado&);

			friend std::ostream& operator << (std::ostream&, const Cuadrado&);
			friend void operator >> (std::istream&, Cuadrado&);
	};

#endif