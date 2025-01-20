#include <iostream>
#include <string>
using namespace std;


class Person {
public:
    string name;
    int age;

};


class Student : public Person {
public:
    int rollno;

    void getinfo(){
        cout << "name " << name << endl;
        cout << "age" << age << endl;
        cout << "roll no " << rollno << endl;
    }

};

int main(){
    Student s1;
    s1.name = "rahul";
    s1.age = 19;
    s1.rollno = 23;

    s1.getinfo();


}