#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int age;

    Student(string name, int age){
        this->name = name;
        this->age = age;
    }
};

class Teacher:public Student{
    public:
    string subject;
    Teacher(string name, int age, string subject):Student(name, age){
        this->subject = subject;
    }
};

int main() {

  return 0;
}