#include <iostream>

using namespace std;

struct Date {
	int dd, mm, yyyy;
};
struct Hour {
	int ss, mm, hh;
};


class Time {
	
public:
	static unsigned short int hour;
	static unsigned short int minutes;
	static unsigned short int seconds;

	static void getTime();


};
void Time::getTime() {
	cout << "godzina:" << hour << "\n" << "minuta:" << minutes << "\n" << "sekunda:" << seconds << "\n";

}

class School {
public:
	static string s_school;
	static string s_jobPosition;

	string name;
	string surname;

	void getData();
	void setNameSurname(string name, string surname, string s_school);

	static string s_getSchool();
	static void setSchool(string pSchool){
		s_school = pSchool;
	}

};

string School::s_school = "ZSK";
string School::s_jobPosition = "Student";

string School::s_getSchool() {
	return s_school;
}

void School::getData() {
	cout << "Imię i nazwisko: " << name << " " << surname << " \n" << "Szkoła:" << s_school << endl;

}
void School::setNameSurname(string pName, string pSurname, string s_school) {
	name = pName;
	surname = pSurname;
	School::s_school = s_school;
}

int main()
{
	setlocale(LC_CTYPE, "polish");

	cout<<School::s_school << endl;
	cout << School::s_jobPosition << endl;
	cout << endl;
	School kowalski;
	kowalski.setNameSurname("Janusz", "Kowalski", "CDV");
	kowalski.getData();


	School::setSchool("CDV");

	string school = School::s_getSchool();

	cout << school;

	return 0;
}