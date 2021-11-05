#include <iostream>
using namespace std;

class Worker {
public:
    static unsigned int i;
    Worker();
    ~Worker() {
        i--;
    }

    static void howMany() {
        cout << "Jest: " << i << " obiektów" << endl;
    }
};
unsigned int Worker::i = 0;

Worker::Worker() {
    i++;
};

int main()
{
    setlocale(LC_CTYPE, "polish");

    Worker worker;
    Worker worker1;
    Worker worker2;
    Worker worker3;
    Worker worker4;
    Worker worker5;
    Worker worker6;
    Worker worker7;
    Worker* p_worker;
    Worker worker8;

    Worker::howMany();
    return 0;
}