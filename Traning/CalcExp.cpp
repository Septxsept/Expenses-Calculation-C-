/*applicatrion*/

#include "CalcExp.h"
#include <iostream>


CalcExp::CalcExp(){

	this->TotGallon		 = 0;
	this->TotGaseExp		= 0;
	this->TotExpense		= 0;

}

void CalcExp::setValues(double a, double b, double c, double d, double e) {
	this->TotMiles       = a;
	this->GasPrice       = b;
	this->MilesPerGallon = c;
	this->ParkFee        = d;
	this->TollFee        = e;
}


double CalcExp::getTotMiles() {
	return this->TotMiles;
}


double CalcExp::getGasPrice() {
	return this->GasPrice;
}


double CalcExp::getMPG() {
	return this->MilesPerGallon;
}


double CalcExp::getTotGallon() {
	return this->TotGallon;
}


double CalcExp::getTotGasExp() {
	return this->TotGaseExp;
}


double CalcExp::getTotExpense() {

	return this->TotExpense;
}


void CalcExp::CalcTotGAllon() {

	this->TotGallon = (this->TotMiles) / this->MilesPerGallon;

}


void CalcExp::CalcTotGasExpense() {

	this->TotGaseExp = ( this->TotGallon) * this->GasPrice;
}


void CalcExp::CalcTotExpens() {

	this->TotExpense =(( this->TotGaseExp) + this->ParkFee) + this->TollFee;
}
