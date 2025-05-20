#include<iostream>
using namespace std;

class Student{
public:
    string name[5];

public:
    void setName(){
        cout << "Enter five(5) names: " << endl;
        cout << endl;

        for(int i = 0; i < 5; i++){
            cout << "Enter your name at index(" << i << "): ";
            cin >> name[i];
        }
        cout << endl;
    }
};

class Detail : public Student{
public:
    void getName(){
        cout << "Names are: " << endl;
        cout << endl;
        for(int i = 0; i < 5; i++){
            cout << "Your name at index(" << i << ") is " << name[i] << "." << endl;
        }
    }
};

int main(){

    Detail det;

    det.setName();

    det.getName();

    return 0;
}