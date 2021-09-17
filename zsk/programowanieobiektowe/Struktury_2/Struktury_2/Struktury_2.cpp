#include <iostream>

using namespace std;

struct Date {
	unsigned short int dd, mm, rrrr;
};

class Worker {
public:
	unsigned int id{}; // incjalizujemy domyślnie int = 0 
	string name{}, surname{};
	Date dateBirhthday;
	void showAllData();
	void setData(unsigned int x, string setName,string setSurname, Date setdateBirthday);
};

void Worker::showAllData(){   // operator zakresu
	cout << "Dane pracownika: \nIdentyfikator: " << id;
	cout << "\nimię: " << name;
	cout << "\nnazwisko: " << surname;

	cout << "\ndata urodzenia: " << dateBirhthday.dd << "." << dateBirhthday.mm << "." << dateBirhthday.rrrr;
}

void Worker::setData(unsigned int x ,string setName, string setSurname, Date setdateBirthday ){
	id = x;
	name = setName;
	surname = setSurname;
	//dateBirhthday.dd = setDay;
	//dateBirhthday.mm = setMonth;
	//dateBirhthday.rrrr = setYear;


	//Worker::id = id
	//Worker::dateBirhthday.mm = setMonth


	dateBirhthday = setdateBirthday;

}
int main()
{
	setlocale(LC_CTYPE, "polish");
	Worker kowalski;
	kowalski.setData(10, "Jan", "kowalski", {17,9,2021});
	kowalski.showAllData();
	



}

