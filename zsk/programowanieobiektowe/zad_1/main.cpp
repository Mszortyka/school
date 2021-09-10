#include <iostream>

using namespace std;
class Worker{
    public:
        //deklaracja zmiennych cz³onkowskich (pól, w³aœciwosæi , cech
    string name;
    string surname;

    //deklarcja (prototyp) metody cz³onkowskiej
    void showSurname(){
        cout<<"\nNazwisko pracownika:"<<surname;
    };
    //deklaracja (prototyp ) metody
    void showAllData();
};

void Worker::showAllData()
{
    cout << "Imiê i Nazwisko pracownika:" << name << " "<<surname;
};
    int main()
{
    setlocale(LC_CTYPE, "polish");

    Worker pracownik1;
    pracownik1.surname = "Nowak";
    pracownik1.name = "Krystian";

    pracownik1.showAllData();



    return 0;
}
