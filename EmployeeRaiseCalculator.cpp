// EmployeeRaiseCalculator
// TITLE: Employee Raise Calculator

#include <iostream>
using namespace std;

// Function to ask for the number of employees and returns the number
int getNumber() {
    int number = 0;
    cout << "Enter the number of employee(s): ";
    cin >> number;
    return number;
}

// Function to ask the salary of each employee and returns the salary
double getSalary(int empNumber) {
    double salary;
    cout << "\nEnter the salary for employee " << empNumber << ": ";
    cin >> salary;
    return salary;
}

// Function to calculate the raise for each employee according to the given percentage and returns the raise
double calcRaise(double salary) {
    double raise;
    if (salary <= 25000) {
        raise = salary * 0.05;
    } else if (salary >= 25001 && salary <= 35000) {
        raise = salary * 0.04;
    } else {
        raise = salary * 0.03;
    }
    return raise;
}

// Function to add the raise to the total and returns the total raise
double totalRaises(double raise, double total) {
    return raise + total;
}

int main() {
    // Defining the variables and calling the function getNumber to get the number of employees
    int number;
    double salary, raise, total = 0;
    number = getNumber();

    // For loop to print each employee and their raise
    for (int i = 1; i <= number; i++) {
        salary = getSalary(i);
        raise = calcRaise(salary);
        cout << "Employee " << i << " receives a raise of $" << raise << ".\n\n";
        total = totalRaises(raise, total);
    }

    // Prints the total raise
    cout << "The total cost of the raises: $" << total << "\n";
    return 0;
}
