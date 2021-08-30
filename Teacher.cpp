#include"Person.cpp";
class Teacher : public Person
{
public:
	Teacher(string name, int age, string address, int salary) : Person(name, age, address) {
		this->salary = salary;
	}
	void setSalary(int salary) {
		this->salary = salary;
	}
	int getSalary() {
		return salary;
	}
	void display() {
		Person::display();
		cout << "Salary: " << salary << endl;
	}
private:
	int salary;
};