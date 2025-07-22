#include <iostream>
using namespace std;

// Define a class named Biodata
class Biodata {
public:
    // Data members
    string name;
    int age;
    string gender;
    string qualification;
    string contactNumber;

    // Member function to display biodata
    void display() {
        cout << "----- Biodata -----" << endl;
        cout << "Name           : " << name << endl;
        cout << "Age            : " << age << endl;
        cout << "Gender         : " << gender << endl;
        cout << "Qualification  : " << qualification << endl;
        cout << "Contact Number : " << contactNumber << endl;
    }
};

int main() {
    // Create an object of Biodata
    Biodata person;

    // Assign values to the object
    person.name = "Samiksha";
    person.age = 22;
    person.gender = "Female";
    person.qualification = "B.Tech in Computer Science";
    person.contactNumber = "123-456-7890";

    // Display biodata using class function
    person.display();

    return 0;
}