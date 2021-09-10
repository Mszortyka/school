#include <iostream>

using namespace std;
class Worker{
    public:
        //deklaracja zmiennych członkowskich (pól, właciwości , cech
    string name;
    string surname;
    string nationality;
    char gender;

    unsigned short int rokUrodzenia;
    float wzrost;
    //deklarcja (prototyp) metody cz³onkowskiej
    void showSurname(){
        cout<<"\n Nazwisko pracownika: "<<surname;
    };
    //deklaracja (prototyp ) metody
    void showName()
    {
        cout<< "\n Imie pracownika: "<<name;
    };
    void showPersonality(){
        cout<<"\n Imie i nazwisko pracownika: "<< name<< " "<< surname;
    };
    void showAllData();
};
void Worker::showAllData(){
        showPersonality();
        cout<<"\n narodowsc pracownika: "<<nationality;
        cout<<"\n Rok urodzenia: " << rokUrodzenia;
        cout<<"\n Wzrost: " << wzrost;
        cout<<"\n Plec: ";

        switch(gender){
            case 'm':
                cout<<"mezczyzna";
                break;
            case 'k':
                cout<<"kobieta";
                break;
            default:
                cout<<"-";
        }
    };
    int main()
{
    setlocale(LC_CTYPE, "polish");

    Worker pracownik1;
    pracownik1.name ="krystian";
    pracownik1.surname = "Nowak";
    pracownik1.rokUrodzenia = 2005;
    pracownik1.wzrost = 180.0;
    pracownik1.gender = 'm';
    pracownik1.nationality = "polska";

    pracownik1.showName();
    pracownik1.showSurname();
    pracownik1.showPersonality();
    pracownik1.showAllData();


    return 0;
}
