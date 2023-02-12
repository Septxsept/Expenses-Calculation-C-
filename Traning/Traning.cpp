/*test */



#include "CalcExp.h"
#include <iostream>
using namespace std ;

int main() {


	cout << "Calculation of the Expense\n";

	cout << "============================\n\n";

	double TotMiles = 0;
	double GasPrice = 0;
	double MilesPerGallon = 0;
	double ParkFee = 0;
	double TollFee = 0;


	cout << "Enter the total milages \n\n";

	cin >> TotMiles;

	cout << "\nEnter the gas price \n\n";

	cin >> GasPrice;

	cout << "\nEnter the Millage per Galon\n\n";

	cin >> MilesPerGallon;

	cout << "\nEnter the parking Fee\n\n";

	cin >> ParkFee;

	cout << "\nEnter the toll fees \n\n";

	cin >> TollFee;

	cout << "\nEnter the \n\n";

	CalcExp setVal1;
	setVal1.setValues(TotMiles, GasPrice, MilesPerGallon, ParkFee, TollFee);

	setVal1.CalcTotGAllon();
	cout << "\nthe total Gallons is -> " << setVal1.getTotGallon() << endl;

	setVal1.CalcTotGasExpense();
	cout << "\nthe total gas expense is -> " << setVal1.getTotGasExp() << endl;

	setVal1.CalcTotExpens();
	double exps = setVal1.getTotExpense();
	cout << "\nthe total expense is -> " << exps << endl;




	CalcExp gas;
	gas.setValues(5,4,4,3,3);

	gas.CalcTotGAllon();
	gas.CalcTotGasExpense();
	cout << "\nthe total gas Exp is -> " << gas.getTotGasExp()<< endl;

}

