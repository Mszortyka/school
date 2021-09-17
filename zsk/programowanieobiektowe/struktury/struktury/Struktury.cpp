#include <iostream>


using namespace std;

struct Date {
    unsigned short int d, m, rrrr;
};

struct Student {
    string name, surname;

    unsigned int id;
    Date dateBirthday;
    unsigned short int gradeInformatics[5];

};

int main()
{

    setlocale(LC_CTYPE, "polish");
    // Student kowalski {};//incjalizacja zerowa  - wypelnia zerami

    Student kowalski{ "Janusz", "Nowak", 1000,{17,9,2021} };
    cout << "dane pracownika \n" << "imię i nazwisko: " << kowalski.name << " " << kowalski.surname;
    cout << "\n ID pracownika: " << kowalski.id;
    cout << "\n data urodzenia (dzień): " << kowalski.dateBirthday.d;
    cout << "\n data urodzenia (miesiąc): " << kowalski.dateBirthday.m;
    cout << "\n data urodzenia (rok): " << kowalski.dateBirthday.rrrr;
    cout << "\n oceny studenta z informatyki: \n";
    kowalski.gradeInformatics[0] = 5;
    kowalski.gradeInformatics[1] = 6;
    kowalski.gradeInformatics[2] = 3;
    kowalski.gradeInformatics[3] = 4;
    kowalski.gradeInformatics[4] = 2;

    cout << "Ocena 1:" << kowalski.gradeInformatics[0] << endl;
    cout << "Ocena 2:" << kowalski.gradeInformatics[1] << endl;
    cout << "Ocena 3:" << kowalski.gradeInformatics[2] << endl;
    cout << "Ocena 4:" << kowalski.gradeInformatics[3] << endl;
    cout << "Ocena 5:" << kowalski.gradeInformatics[4] << endl;


    for (unsigned int i = 0; i <= 4; i++) {
        cout << i + 1 << "- ocena:" << kowalski.gradeInformatics[i] << endl;
    }


}


