#ifndef CIRCULO_H
	#define CIRCULO_H

#include <iostream>
#include <Figura.h>

	class Circulo : public Figura{
		private:
			float radio;
		public:
			Circulo();
			Circulo(float);
			Circulo(Circulo &);
			~Circulo();

			void setRadio(float);
			float getRadio();

			float getArea();

			bool operator == (const Circulo&);

			Circulo operator + (const Circulo&);
			Circulo operator * (const Circulo&);

			friend std::ostream& operator << (std::ostream&, const Circulo&);
			friend void operator >> (std::istream&, Circulo&);
	};

#endif