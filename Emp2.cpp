#include <iostream>
#include <iomanip> // Include for setw
using namespace std;

struct Employee {
    int EmpNo;
    string Name;
    int Grade;
    int BasicSalary;
    double TransportAllowance;
    double HseAllowance;
    double Gross;
    double Tax;
    double Net;
};

int main() {
    Employee E[30];
    int n;
    cout << "Number of employees in organization: ";
    cin >> n;

    double transportAllowance[] = {0.0, 0.08, 0.1, 0.12, 0.15, 0.18};
    double houseAllowance[] = {0.0, 0.1, 0.13, 0.15, 0.17, 0.2};

    for (int i = 0; i < n; i++) {
        cout << "Enter Employee No: ";
        cin >> E[i].EmpNo;
        cout << "Enter employee name: ";
        cin >> E[i].Name;
        cout << "Enter employee pay grade (1-5): ";
        cin >> E[i].Grade;

        if (E[i].Grade < 1 || E[i].Grade > 5) {
            cout << "Not a valid pay grade in organization! Cannot calculate salary!" << endl;
            break;
        }

        cout << "Enter Employee Basic Salary: ";
        cin >> E[i].BasicSalary;

        E[i].TransportAllowance = transportAllowance[E[i].Grade] * E[i].BasicSalary;
        E[i].HseAllowance = houseAllowance[E[i].Grade] * E[i].BasicSalary;
        E[i].Tax = 0.3 * E[i].BasicSalary;
        E[i].Gross = E[i].BasicSalary + E[i].HseAllowance + E[i].TransportAllowance;
        E[i].Net = E[i].Gross - E[i].Tax;
    }

    // Output the table
    cout << fixed << setprecision(
    

