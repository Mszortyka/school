#include <iostream>
//inicjalizacja obiekow
using namespace std;

class Car {
public:
	unsigned int ID = 3;//inicjalizatory wew klasowe
	string brand = "Fiat";
	string model = "Multipla";

	void getData();

	Car();

	Car(unsigned int pID, string pBrand, string pModel);
};

Car::Car(){//definicja konstruktora domyślnego
	ID = 0;
	brand = "Marka domyślna";
	model = "Model domyślny";
	cout << "Konstruktor domyślny" << endl;
}
Car::Car(unsigned int pID, string pBrand, string pModel) {
	ID = pID;
	brand = pBrand;
	model = pModel;
	cout << "Konstruktor parametryczny" << endl;
}
void Car::getData() {
	cout << "ID: " << ID << endl;
	cout << "Marka: " << brand << endl;
	cout << "Model: " << model << endl;
}
int main()
{
	setlocale(LC_CTYPE, "polish");

	Car car1 = Car { 131,"Ferrari", "F460" }; // alternatywa:     Car car1{131, "Ferrari", "F460"}
	car1.getData();

	Car car2 = Car(46389, "BMW", "X6");
	car2.getData();


}
