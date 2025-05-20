#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<string> name;
    int choice;

    do{
        cout << endl << "--- Menu ---" << endl;
        cout << "Press 1 to add a student." << endl;
        cout << "Press 2 to view all students." << endl;
        cout << "Press 3 to remove a student." << endl;
        cout << "Press 4 to exit." << endl;
        
        cout << endl << "Enter your choice: ";
        cin >> choice;

        string temp;
        int index;
        switch(choice){
            case 1:
                cout << endl << "Enter a name to add: ";
                cin >> temp;

                name.push_back(temp);

                cout << "Name is added." << endl;
            break;
            case 2:
                cout << endl << "Student Details: " << endl;

                for(int i = 0; i < name.size(); i++){
                    cout << "Student at index " << i << " is " << name[i] << "." << endl;
                }
            break;
            case 3:
                cout << endl << "Enter the index number to remove a student: ";
                cin >> index;

                name.erase(name.begin() + index);

                cout << "Student is removed." << endl;
            break;
        }
    }while(choice != 4);

    cout << "Exiting the program..." << endl;
    cout << "Exited Successfully." << endl;
    
    return 0;
}