#include<iostream>
#include"Person.cpp";
#include"Student.cpp";
#include"Teacher.cpp";
int main() {
	Person("Thang", 18, "Ninh Binh").display();
    cout << endl;
	Student("Thang", 18, "Ninh Binh", 8.0).display();
    cout << endl;
	Teacher("Thang", 18, "Ninh Binh", 3000).display();
	return 0;
}