#include <iostream>
using namespace std;


void updateSalary(int &salary);


int main() {
    int salary = 50000;

    cout << "Salary before increment: " << salary << endl;

    
    updateSalary(salary);

    cout << "Salary after increment: " << salary << endl;

    return 0;
}


void updateSalary(int &salary) {
    salary = salary + 5000;   
}