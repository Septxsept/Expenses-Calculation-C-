/* set value */




#include <iostream>
using namespace std;
class CalcExp
{

private:
	double TotMiles;
	double GasPrice;
	double MilesPerGallon;
	double ParkFee;
	double TollFee;
	double TotGallon;
	double TotGaseExp;
	double TotExpense;


public:
	CalcExp();
	void setValues(double, double, double, double, double);
	void CalcTotGAllon();
	void CalcTotGasExpense();
	void CalcTotExpens();

	double getTotMiles();
	double getGasPrice();
	double getMPG();
	double getTotGallon();
	double getTotGasExp();
	double getTotExpense();









};

