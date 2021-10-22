#include <iostream>
//inicjalizacja obiekow
using namespace std;

class Car {
public:
	unsigned int ID = 3;//inicjalizatory wew klasowe
	string brand = "Fiat";
	string model = "Multipla";

	void getData();


	Car(unsigned int pID=10, string pBrand="FIAT", string pModel="MULTIPLA");//konstruktor 
};
Car::Car(unsigned int pID, string pBrand, string pModel) {
	ID = pID;
	brand = pBrand;
	model = pModel;
}

void Car::getData() {
	cout << "ID: " << ID << endl;
	cout << "Marka: " << brand << endl;
	cout << "Model: " << model << endl;
}
int main()
{
	setlocale(LC_CTYPE, "polish");

	Car bmw(13);
	bmw.getData();
}