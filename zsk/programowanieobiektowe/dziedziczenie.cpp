#include <iostream>

using namespace std;

class Worker{
	private:
		string name {""};
		string surname {""};
	public:
		//setttery
		void setName(string pName){
			name=pName;
		}
		void setSurname(string pSurname){
			surname = pSurname;
		}
		//gettery
		string getSurname(){
			return surname;
		}
		string getName(){
			return name;
		}
		//
		string getData(){
			return name+" "+surname+"\n"; 
		}
};

class Teacher:public Worker{
	private:
		string schoolSubject {" "};
	public:
		void setSchoolSubject(string pSchoolSubject){
			schoolSubject=pSchoolSubject;
		}
		string getSchoolSubject(){
			return schoolSubject;
		}
		
		string getData(){
			return getName()+" "+getSurname()+" "+schoolSubject+"\n";
		}
};

class Supervisor:public Teacher{
	private:
		string schoolClass {""};
	public:
		void setSchoolClass(string pSchoolClass){
			schoolClass = pSchoolClass;
		}
		
		string getSchoolClass(){
			return schoolClass;
		}
		
		string getData(){
			return getName()+ " "+ getSurname() + " " + getSchoolSubject() + " " + schoolSubject + "\n";
		}
};
int main() {
	Worker pracownik;
	pracownik.setName("Janusz");
	pracownik.setSurname("Nowak");
	cout<<pracownik.getData();
	
	Teacher nauczyciel;
	nauczyciel.setName("Tomasz");
	nauczyciel.setSurname("Nowak");
	nauczyciel.setSchoolSubject("programowanie");
	cout<<nauczyciel.getData();
	
	Supervisor wychowawca;
	wychowawca.setName("Tomasz");
	wychowawca.setSurname("Nowak");
	wychowawca.setSchoolSubject("programowanie");
	wychowawca.setSchoolClass("2D");
	cout<<wychowawca.getData();
	
	return 0;
}
