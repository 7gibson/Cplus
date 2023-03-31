#include <iostream>
#include <string>
#include<limits>

using namespace std;

class Person {
private:
    string name;
    int Age;
    string gender;
    int idNumber;

public:
    void setName(string name) {
        this->name = name;
    }

    string getName() {
        return name;
    }

    void setAge(int age) {
        Age = age;
    }

    int getAge() {
        return Age;
    }

    void setGender(string gender) {
        this->gender = gender;
    }

    string getGender() {
        return gender;
    }

    void setIdNumber(int idNumber) {
        this->idNumber = idNumber;
    }

    int getIdNumber() {
        return idNumber;
    }

    void enterDetails() {
       
    cout << "Enter person's name: ";
    getline(cin, name);

    // get age and validate input
    while (true) {
        cout << "Enter person's age: ";
        if (cin >> Age) {
            cin.ignore(); // discard newline character
            break;
        } else {
            cout << "Invalid input. Please enter an integer value for age." << endl;
            cin.clear();
           cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard input buffer
        }
    }

    cout << "Enter person's gender: ";
    getline(cin, gender);

    // get ID number and validate input
    while (true) {
        cout << "Enter person's ID number: ";
        if (cin >> idNumber) {
            cin.ignore(); // discard newline character
            break;
        } else {
            cout << "Invalid input. Please enter an integer value for ID number." << endl;
            cin.clear();
           cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard input buffer
        }
    
}

    }
    void printdata()
    {
     cout << "Name: " << getName() << endl;
     cout << "Age: " << getAge() << endl;
     cout << "Gender: " << getGender() << endl;
     cout << "ID number: " <<getIdNumber() << endl;
	
	}
};

int main() {
    Person person1,person2;

    // Prompt the user to enter the person's details
    person1.enterDetails();
    person1.printdata();
    
    cout<<"Enter person2 details: "<<endl;
    person2.enterDetails();
    person2.printdata();
    // Print the person's details
//    cout << "Name: " << person.getName() << endl;
//    cout << "Age: " << person.getAge() << endl;
//    cout << "Gender: " << person.getGender() << endl;
//    cout << "ID number: " << person.getIdNumber() << endl;

    return 0;
}

