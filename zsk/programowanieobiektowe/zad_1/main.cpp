#include <iostream>

using namespace std;
class Worker{
    public:
        //deklaracja zmiennych cz�onkowskich (p�l, w�a�ciwos�i , cech
    string name;
    string surname;

    //deklarcja (prototyp) metody cz�onkowskiej
    void showSurname(){
        cout<<"\nNazwisko pracownika:"<<surname;
    };
    //deklaracja (prototyp ) metody
    void showAllData();
};

void Worker::showAllData()
{
    cout << "Imi� i Nazwisko pracownika:" << name << " "<<surname;
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
