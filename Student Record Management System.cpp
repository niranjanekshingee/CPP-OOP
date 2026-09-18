#include <iostream>
#include <string>
using namespace std;

class student
{
private:
    string name;
    int rollno;
    string course;

public:
    void input()
    {
        cout << "Enter student name: ";
        getline(cin, name);

        cout << "Enter roll number: ";
        cin >> rollno;
        cin.ignore();

        cout << "Enter course: ";
        getline(cin, course);
    }

    void display()
    {
        cout << "\n----- Student Details -----" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollno << endl;
        cout << "Course: " << course << endl;
    }
};

int main()
{
    student s1;

    s1.input();
    s1.display();

    return 0;
}