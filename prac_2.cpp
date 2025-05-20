#include<iostream>
using namespace std;

class Student{
public:
    string name;

public:
    void setName(){
        cout << "Enter your name: ";
        cin >> name;
    }
};

class Marks : public Student{
public:
    int marks[3];

public:
    void setMarks(){
        cout << endl << "Enter your marks of any three(3) subjects: " << endl;
        for(int i = 0; i < 3; i++){
            cout << "Subject " << i << ": ";
            cin >> marks[i];
        }
    }
};

class Result : public Marks{
public:
    void getResult(){
        int total, percentage;

        total = marks[0] + marks[1] + marks[2];

        percentage = total / 3;

        cout << endl << "Your name is " << name << "." << endl;
        cout << "Your total marks of three(3) subjects are " << total << "." << endl;
        cout << "Your percentage is " << percentage << "%." << endl;
    }
};

int main(){

    Result res;

    res.setName();
    res.setMarks();
    res.getResult();

    return 0;
}