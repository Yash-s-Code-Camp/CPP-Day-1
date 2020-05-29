#include <iostream>
using namespace std;

class Student
{	
	public:   // Access Specifier
		string fname, lname; // Atributes
		int age;  // attribute

		void getName(string f, string l){
			fname = f;
			lname=l;
		}
		void getGender(string g)
		{
			gender = g;
		}
		void printName()
		{
			cout << fname<<" "<<lname;
		}
		void printGender()
		{
			cout<<"\n"<<gender;
		}

	private:
		string gender;   //private attr.
};



int main() {


	Student stud;

	stud.getName("Yash", "Desai");
	stud.printName();

	stud.getGender("Male");
	stud.printGender();

	// stud.fname = "Yash";
	// stud.lname = "Desai";
	// stud.age = 26;

	// cout <<"My name is "<<stud.fname<<" "<<stud.lname<<" and I am "<<stud.age<<" years old.";













	// string fname,lname,name;


	// cin>>fname;
	// cin>>lname;

	// name = fname+"  "+lname;
	// cout << name;



	// string greet = "Hello";
	// string myname = "Yash";

	// string text = greet+", "+myname;

	// cout << text;

	// int n=0;

	// cin >> n;
	// if(n%2==0)
	// {
	// 	cout << "Even";
	// }
	// else 
	// {
	// 	cout <<"Odd";
	// }

	return 0;
}

