// Object-Oriented Programming using C++

#include <iostream>
using namespace std;

class Person
{
private:                    // Encapsulation
    string name;
    int age;

public:
    Person()                // Constructor
    {
        cout << "Person Created" << endl;
    }

    ~Person()               // Destructor
    {
        cout << "Person Destroyed" << endl;
    }

    void setDetails(string n, int a)   // Abstraction
    {
        name = n;
        age = a;
    }

    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }

    void show()
    {
        cout << "Name: " << name << endl;
    }

    void show(string msg)   // Function Overloading
    {
        cout << msg << endl;
        cout << "Name: " << name << endl;
    }

    virtual void display()  // Virtual Function
    {
        cout << "Person Details" << endl;
    }
};

class Student : public Person      // Single Inheritance
{
private:
    int marks;

public:
    void setMarks(int m)
    {
        marks = m;
    }

    int getMarks()
    {
        return marks;
    }

    void display()          // Function Overriding
    {
        cout << "\nStudent Details" << endl;
        cout << "Name : " << getName() << endl;
        cout << "Age  : " << getAge() << endl;
        cout << "Marks: " << marks << endl;
    }

    bool operator>(Student s)      // Operator Overloading
    {
        if(marks > s.marks)
            return true;
        else
            return false;
    }
};

class Teacher : public Person      // Hierarchical Inheritance
{
private:
    string subject;

public:
    void setSubject(string s)
    {
        subject = s;
    }

    void display()                 // Function Overriding
    {
        cout << "\nTeacher Details" << endl;
        cout << "Name    : " << getName() << endl;
        cout << "Age     : " << getAge() << endl;
        cout << "Subject : " << subject << endl;
    }
};

class Sports
{
public:
    string game;

    void setGame(string g)
    {
        game = g;
    }
};

class SportsStudent : public Student, public Sports
// Multiple Inheritance + Hybrid Inheritance
{
};

int main()
{
    Student s1, s2;        // Objects

    string name;
    int age, marks;

    cout << "Enter Student 1 Name: ";
    cin >> name;
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Marks: ";
    cin >> marks;

    s1.setDetails(name, age);
    s1.setMarks(marks);

    cout << "\nEnter Student 2 Name: ";
    cin >> name;
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Marks: ";
    cin >> marks;

    s2.setDetails(name, age);
    s2.setMarks(marks);

    cout << "\nFunction Overloading Demo" << endl;
    s1.show();
    s1.show("Student Record");

    Person *p;             // Runtime Polymorphism

    p = &s1;
    p->display();

    Teacher t;

    t.setDetails("Kumar", 40);
    t.setSubject("OOP");

    p = &t;
    p->display();

    SportsStudent ss;

    ss.setDetails("Arun", 19);
    ss.setMarks(95);
    ss.setGame("Cricket");

    cout << "\nSports Student Details" << endl;
    cout << "Name  : " << ss.getName() << endl;
    cout << "Age   : " << ss.getAge() << endl;
    cout << "Marks : " << ss.getMarks() << endl;
    cout << "Game  : " << ss.game << endl;

    cout << "\nOperator Overloading Demo" << endl;

    if(s1 > s2)
        cout << s1.getName() << " has more marks" << endl;
    else
        cout << s2.getName() << " has more marks" << endl;

    return 0;
}