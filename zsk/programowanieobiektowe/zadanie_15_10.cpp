#include <iostream>

using namespace std;
struct Date {
    unsigned short int dd, mm, yyyy;
};

class Worker {
public:
    unsigned int id;

    string name, surname;

    Date dateBirthday;

    void getData();

    Worker(string s_name, string s_surname, Date s_data,unsigned int s_id ) {
        id = s_id;
        name = s_name;
        surname = s_surname;
        dateBirthday = s_data;
    }
};
void Worker::getData() {
    cout << "\nID: " << id << "\n Imię i Nazwisko: " << name << " " <<surname;
    cout << "\nData urodzenia: " << dateBirthday.dd << "," <<dateBirthday.mm << "," <<dateBirthday.yyyy;

}
int main()
{
    setlocale(LC_CTYPE, "polish");
    
    Worker worker("janusz", "nowak", {15,10,2021}, 731);

    Worker* wsk;

    wsk = &worker;

    cout << wsk->name << endl;
    cout << wsk->surname << endl;
    cout << wsk->id << endl;
    cout << wsk->dateBirthday.dd << " , " << wsk->dateBirthday.mm << " , " << wsk->dateBirthday.yyyy << endl;
    
}