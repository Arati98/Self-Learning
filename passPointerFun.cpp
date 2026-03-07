#include <iostream>
using namespace std;

void updateValue(int *ptr) {
    *ptr = *ptr + 10;   
}

int main() {
    int num = 5;

    cout << "Before function call: " << num << endl;

    updateValue(&num); 

    cout << "After function call: " << num << endl;

    return 0;
}