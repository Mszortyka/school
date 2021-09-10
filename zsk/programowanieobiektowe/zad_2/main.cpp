#include <iostream>

using namespace std;
class Rectangle{
    public:
    float width;
    float height;

    float area(float w, float h);
    float obwod(float w, float h);
};
    float Rectangle::area(float w, float h){
        return w*h;
    };
    float Rectangle::obwod(float w, float h){
        return w*2+h*2;
    };
int main()
{
    Rectangle rect;

    cout<<"podaj bok a:";
    cin>>rect.width;
    cout<<"podaj bok b:";
    cin>>rect.height;

    float wynik = rect.area(rect.width, rect.height);
    float wynik_2 = rect.obwod(rect.width, rect.height);

    cout<<"pole:"<<wynik<<endl;
    cout<<"obwod:"<<wynik_2<<endl;
    return 0;
}
