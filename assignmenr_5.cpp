#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int age;
    string course;

public:
    void setDetails(string name, int age, string course)
    {
        this->name = name;
        this->age = age;
        this->course = course;
    }

    void display()
    {
        cout << "----- Student Details -----" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
    }
};

int main()
{
    Student s1;

    s1.setDetails("Niranjan", 18, "AIML");

    s1.display();

    return 0;
}