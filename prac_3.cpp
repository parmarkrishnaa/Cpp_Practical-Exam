#include <iostream>
#include <vector>
using namespace std;

class Product
{
private:
    string name;
    float price;

public:
    void setDetails()
    {
        cout << "Enter product name: ";
        cin >> name;
        cout << "Enter product price: ";
        cin >> price;
    }

    void getDetails()
    {
        cout << "Product name: " << name << endl;
        cout << "Product price: " << price << endl;
    }
};
int main()
{
    vector<Product> p(2);

    for(int i = 0; i < 2; i++){
       cout << endl << "Product "<< i << ":" << endl;
       p[i].setDetails();
    }

    for(int i = 0; i < 2; i++){
       cout << endl << "Product "<< i << ":" << endl;
       p[i].getDetails();
    }

    return 0;
}