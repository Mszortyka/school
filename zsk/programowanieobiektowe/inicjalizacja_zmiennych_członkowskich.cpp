#include <iostream>
using namespace std;



class Car {
public:
	unsigned int id;
	string brand;
	string model;

	void getData();

	Car();
	Car(unsigned short pId, string pBrand, string pModel);
	Car(string pBrand);
};

void Car::getData() {
	cout << "\nId: " << id << "\n marka i model: " << brand << " " << model << endl;
}

Car::Car():
	id{0}, 
	brand{"MARKA"},
	model{"MODEL"}
{
	cout << "\n konstruktor domyślny" << endl;
};
Car::Car(string pBrand) {
	brand = pBrand;
}
Car::Car(unsigned short pId, string pBrand, string pModel) {
	id = id;
	brand = pBrand;
	model = pModel;
}
int main()
{
	setlocale(LC_CTYPE, "polish");
	
	Car fiat;
	fiat.getData();

	Car fiat1 = Car();
	fiat1.getData();

	Car fiat2(10, "Fiat", "Multipla");
	fiat2.getData();

	Car fiat3 = Car(20, "Fiat", "Panda");
	fiat3.getData();

	return 0;
};