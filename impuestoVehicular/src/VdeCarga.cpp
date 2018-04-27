#include <VdeCarga.h>

VehiculoDeCarga::VehiculoDeCarga(){
	axisNum = 0;
}
VehiculoDeCarga::VehiculoDeCarga(float a){
	axisNum = a;
}
VehiculoDeCarga::VehiculoDeCarga(VehiculoDeCarga &v){
	axisNum = v.getAxisNum();
}
VehiculoDeCarga::~VehiculoDeCarga(){}

void VehiculoDeCarga::setAxisNum(int a){
	axisNum = a;
}

int VehiculoDeCarga::getAxisNum(){
	return axisNum;
}

float VehiculoDeCarga::calcularMontoExtra(){
	return tasa * getAxisNum();
}
