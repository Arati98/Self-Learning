#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 5;
    
    //Unary Operators//

    cout << "Initial value of a:" << a << endl;
-
    ++a;
    cout << "After ++a (increment):" << a <<endl;

    --b;
    cout << "After  --b (decrement):" << b << endl;

    //Assignment Operator//

    a += 5;
    cout << "After a += 5 :" << a << endl;

    a *= 2;
    cout << "After a *= 2 :" << a << endl;

    //Logical Operator//

    if(a > 10 && b > 0);
    {
        cout << "logical AND condition is true" << endl;
    }

    if(a > 50 || b > 0)
    {
        cout << "logical OR condition is true" << endl;
    }

    if(!(a <b)){
        cout << "Logical NOT condition is true" << endl;

    }

    //Ternary Operator//

    int max = (a > b) ? a :b;
      
    cout << "Maximum number using ternary operator:"<< max << endl;

    return 0;

}