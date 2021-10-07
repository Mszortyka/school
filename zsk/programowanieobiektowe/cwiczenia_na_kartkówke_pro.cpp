#include <iostream>

using namespace std;


struct Date {
    unsigned short int dd, mm, yyyy;
};


class Worker {
public:
    Date date;
    string name;
    string surname;
    unsigned short int age;
    unsigned int ID;

    static string s_workplace;
    static string s_job;

    void showPersonality();
    
    void setData(string name, string surname, unsigned short int age, unsigned int ID, Date date);
    
    static void showWorkData() {
        cout << "Miejsce pracy: " << s_workplace << "\n";
        cout << "Stanowisko pracy: " << s_job << "\n";
    }

};
void Worker::showPersonality() {
    cout << "Imię: " << name << "\n";
    cout << "Nazwisko: " << surname << "\n";
    cout << "wiek pracownika: " << age << "\n";
    cout << "Identyfikator: " << ID << "\n";
    cout << "Data urodzenia:" << endl;
    cout << "dzień, miesiąc, rok:" << date.dd <<", "<< date.mm <<", "<< date.yyyy << endl;
}

 void Worker::setData(string name, string surname, unsigned short int age, unsigned int ID, Date date) {
     Worker::name = name;
     Worker::surname = surname;
     Worker::age = age;
     Worker::ID = ID;

     Worker::date = date;
 }

 string Worker::s_workplace = "ZSK";
 string Worker::s_job = "nauczyciel";
int main()
{
    setlocale(LC_CTYPE, "polish");

    
    Worker worker;
    Worker *p_worker;

    Worker* p_pracownik;
    p_pracownik = new Worker();

    p_pracownik->age = 20;
    p_worker = &worker;

    p_worker->setData("Jan", "kowalski", 25, 76178, {12,2,2005});

    worker.showPersonality();

    Worker::showWorkData();

    return 0;
}