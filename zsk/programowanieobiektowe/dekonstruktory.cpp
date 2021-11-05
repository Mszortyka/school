#include <iostream>
using namespace std;


class Worker {
public:
    string name, surname;

    Worker();
    Worker(string pName, string pSurname);

    ~Worker() {
        cout << "Wywołanie dekostruktora" << endl;
    }

    void getData();
};


Worker::Worker() {
    cout << "konstruktor domyślny" << endl;

};
Worker::Worker(string pName, string pSurname) :
    name{ pName },
    surname{ pSurname }
{
    cout << "konstruktor parametryczny" << endl;
};

void Worker::getData() {
    cout << "Imię i Nazwisko: " << name << " " << surname << endl;
}


void createObjectWorker() {
    Worker worker;
    worker.getData();
    cout << "Wywołanie funkcji createObjectWorker" << endl;
};

void createObjectWorker1(string pname, string psurname) {
    Worker worker(pname, psurname);

    worker.getData();
    cout << "Wywołanie funkcji createObjectWorker1" << endl;
};

int main()
{
    setlocale(LC_CTYPE, "polish");

    Worker kowalski = Worker("janusz", "kowalski");
    kowalski.getData();

    cout << "Wskaźnik\n";
    Worker* p_kowalski = new Worker("Jan", "Kowalski");
    delete p_kowalski;

    createObjectWorker1("Janek", "Kowal");

    return 0;
}