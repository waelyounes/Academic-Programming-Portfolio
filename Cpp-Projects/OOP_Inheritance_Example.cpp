#include <iostream>
#include <string>

using namespace std;

/**
 * Project: OOP Inheritance Demonstration (Parent and Child Classes)
 * Purpose: Academic example to illustrate Base and Derived class relationships.
 * Concept: Demonstrates how a 'Professor' class inherits attributes from a 'Person' class.
 */

// Base Class (The "Parent" class)
class Person {
protected:
    string name;
    int age;

public:
    // Constructor to initialize Person attributes
    Person(string n, int a) : name(n), age(a) {}

    // Method to display basic information shared by all persons
    void displayBasicInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived Class (The "Child" class)
// Inherits publicly from the Person class
class Professor : public Person {
private:
    string department;

public:
    /**
     * Constructor for the Derived Class
     * It calls the Parent constructor (Person) to initialize inherited attributes
     */
    Professor(string n, int a, string dept) : Person(n, a), department(dept) {}

    // Method to display full profile including specialized data
    void displayFullInfo() {
        // Calling a method from the Parent class
        displayBasicInfo(); 
        cout << "Department: " << department << endl;
        cout << "Role: University Professor" << endl;
    }
};

int main() {
    // Creating an object (Instance) of the Derived Class
    // Using specific data to represent an academic profile
    Professor prof("Dr. Wael", 45, "Mathematics");

    cout << "--- Professional Profile ---" << endl;
    
    // The object 'prof' has access to its own methods and its parent's protected members
    prof.displayFullInfo();

    return 0;
}
