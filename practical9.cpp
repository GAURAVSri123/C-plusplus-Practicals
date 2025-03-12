#include <iostream>
using namespace std;

// Base class: Person
class Person {
public:
    string name;

    void input() {
        cout << "Enter name: ";
        cin >> name;
    }

    virtual void display() {
        cout << "Name: " << name << endl;
    }
};

// Derived class: Student
class Student : public Person {
public:
    string course;
    int marks, year;

    void input() {
        Person::input();
        cout << "Enter course, marks, and year: ";
        cin >> course >> marks >> year;
    }

    void display() override {
        Person::display();
        cout << "Course: " << course << ", Marks: " << marks << ", Year: " << year << endl;
    }
};

// Derived class: Employee
class Employee : public Person {
public:
    string department;
    float salary;

    void input() {
        Person::input();
        cout << "Enter department and salary: ";
        cin >> department >> salary;
    }

    void display() override {
        Person::display();
        cout << "Department: " << department << ", Salary: " << salary << endl;
    }
};

int main() {
    Student s;
    Employee e;

    cout << "\nEnter Student Details:\n";
    s.input();

    cout << "\nEnter Employee Details:\n";
    e.input();

    cout << "\nStudent Details:\n";
    s.display();

    cout << "\nEmployee Details:\n";
    e.display();

    return 0;
}
