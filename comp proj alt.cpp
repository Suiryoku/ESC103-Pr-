#include <iostream>
#include <string>
using namespace std;

// Define a struct to hold employee data
struct Employee {
    string name;
    int id;
    string jobTitle;
    double salary;
};

// Function to add a new employee to the database
void addEmployee(Employee employees[], int& numEmployees) {
    if (numEmployees >= 100) {
        cout << "Database is full. Cannot add more employees." << endl;
        return;
    }
    
    // Get employee data from user
    cout << "Enter name: ";
    cin >> employees[numEmployees].name;
    cout << "Enter ID: ";
    cin >> employees[numEmployees].id;
    cout << "Enter job title: ";
    cin >> employees[numEmployees].jobTitle;
    cout << "Enter salary: ";
    cin >> employees[numEmployees].salary;
    
    // Increment the number of employees in the database
    numEmployees++;
    
    cout << "Employee added successfully." << endl;
}

// Function to display all employees in the database
void displayEmployees(Employee employees[], int numEmployees) {
    cout << "Employees in database:" << endl;
    for (int i = 0; i < numEmployees; i++) {
        cout << "Name: " << employees[i].name << endl;
        cout << "ID: " << employees[i].id << endl;
        cout << "Job Title: " << employees[i].jobTitle << endl;
        cout << "Salary: " << employees[i].salary << endl;
        cout << endl;
    }
}

// Main function
int main() {
    // Initialize an array to hold up to 100 employees
    Employee employees[100];
    int numEmployees = 0;
    
    // Menu loop
    int choice;
    do {
        cout << "Menu:" << endl;
        cout << "1. Add employee" << endl;
        cout << "2. Display all employees" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                addEmployee(employees, numEmployees);
                break;
            case 2:
                displayEmployees(employees, numEmployees);
                break;
            case 3:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 3);
    
    return 0;
}
