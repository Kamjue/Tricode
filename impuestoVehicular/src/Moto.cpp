#include <Moto.h>

Moto::Moto(){
	motorCC = 0;
	tasa = 2;
}
Moto::Moto(float cc){
	motorCC = cc;
}
Moto::Moto(Moto &m){
	motorCC = m.getMotorCC();
}
Moto::~Moto(){}
			
void Moto::setMotorCC(float cc){
	motorCC = cc;
}
			
float Moto::getMotorCC(){
	return motorCC;
}

float Moto::calcularMontoExtra(){
	return tasa * getMotorCC();
}
