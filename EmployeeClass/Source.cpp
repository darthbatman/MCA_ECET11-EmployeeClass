#include <iostream>;
#include <string>;
using namespace std;

class Employee{
private:
	string firstName;
	string lastName;
	int monthlySalary;
public:
	Employee(string, string, int);
	void setFirstName(string);
	void setLastName(string);
	void setMonthlySalary(int);
	string getFirstName();
	string getLastName();
	int getMonthlySalary();
};

Employee::Employee(string fN, string lN, int mS){
	firstName = fN;
	lastName = lN;
	if (mS > 0){
		monthlySalary = mS;
	}
	else {
		monthlySalary = 0;
	}
}

void Employee::setFirstName(string fN){
	firstName = fN;
}

void Employee::setLastName(string lN){
	lastName = lN;
}

void Employee::setMonthlySalary(int mS){

	if (mS > 0){
		monthlySalary = mS;
	}
	else {
		monthlySalary = 0;
	}

}

string Employee::getFirstName(){
	return firstName;
}

string Employee::getLastName(){
	return lastName;
}

int Employee::getMonthlySalary(){
	return monthlySalary;
}

int main(){

	string tempFN;
	string tempLN;
	int tempMS;

	cout << "Enter Employee One's first name: ";
	getline(cin, tempFN);

	cout << "Enter Employee One's last name: ";
	getline(cin, tempLN);

	cout << "Enter Employee One's monthly salary: $";
	cin >> tempMS;

	Employee e1(tempFN, tempLN, tempMS);

	cout << endl;

	cout << "Enter Employee Two's first name: ";
	getline(cin, tempFN);
	getline(cin, tempFN);

	cout << "Enter Employee Two's last name: ";
	getline(cin, tempLN);

	cout << "Enter Employee Two's monthly salary: $";
	cin >> tempMS;

	Employee e2(tempFN, tempLN, tempMS);

	cout << endl;

	cout << "Employee One: " << e1.getFirstName() << " " << e1.getLastName() << endl;
	cout << "Employee One's yearly salary: $" << (e1.getMonthlySalary() * 12) << endl;
	cout << endl;

	cout << "Employee Two: " << e2.getFirstName() << " " << e2.getLastName() << endl;
	cout << "Employee Two's yearly salary: $" << (e2.getMonthlySalary() * 12) << endl;
	cout << endl;

	e1.setMonthlySalary((e1.getMonthlySalary() * 1.1));
	e2.setMonthlySalary((e2.getMonthlySalary() * 1.1));

	cout << "Employee One: " << e1.getFirstName() << " " << e1.getLastName() << endl;
	cout << "Employee One's yearly salary: $" << (e1.getMonthlySalary() * 12) << endl;
	cout << endl;

	cout << "Employee Two: " << e2.getFirstName() << " " << e2.getLastName() << endl;
	cout << "Employee Two's yearly salary: $" << (e2.getMonthlySalary() * 12) << endl;

	cout << endl;

	return 0;
}