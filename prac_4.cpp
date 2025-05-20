#include<iostream>
#define PI 3.14
using namespace std;

class Shape{
public:
    float area;

public:
    void setArea(){
        cout << "Enter area: ";
        cin >> area;
    }
};

class Circle : public Shape{
public:
    void getArea(){
        float radius;

        cout << "To find the area of circle: " << endl;

        cout << endl << "Enter radius of circle: ";
        cin >> radius;

        area = PI * radius * radius;

        cout << endl << "Area of circle is: " << area << "." << endl;
    }
};

class Rectangle : public Shape{
public:
    void getArea(){
        float l, b;

        cout << endl << "To find the area of rectangle: " << endl;

        cout << endl << "Enter length of rectangle: ";
        cin >> l;

        cout << "Enter breadth of rectangle: ";
        cin >> b;

        area = l * b;

        cout << endl << "Area of rectangle is: " << area << "." << endl;
    }
};

int main(){

    Circle c;
    Rectangle r;

    c.getArea();

    r.getArea();

    return 0;
}