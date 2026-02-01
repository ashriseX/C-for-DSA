//practice for operators in C++ 

#include <iostream>
using namespace std;

int main(){

    /*mathematical operators are:
    + (plus)  --> addition
    - (minus) --> subtraction
    * (asterisk) --> multiplication
    /  (forward slash) --> division
    % (percentage) --> modulus(remainder)
    these operators work only on numerical data types(int, float, double)*/

    cout << "enter two number to perform mathematical operations on them: " << endl;
    int a, b;
    cin >> a >> b;

    cout << "The sum of a and b is: " << a + b << endl;
    cout << "The difference of a and b is: " << a - b << endl;
    cout << "The product of a and b is: " << a * b << endl;
    cout << "The division of a by b is: " << a / b << endl;
    cout << "The modulus of a by b is: " << a % b << endl;


    //the resut of mathematical operations is dependent on the data type of the variables used in the operation.
    //eg if int is added, subtracted, multiplied or divided by int, the result will be int
    //but if int is added, subtracted, multiplied or divided by float, the result will be float.
        float c, d;
        cout << "enter two float numbers to perform mathematical operations on them: " << endl;
        cin >> c >> d;
    
        cout << "The sum of c and d is: " << c + d << endl;
        cout << "The difference of c and d is: " << c - d << endl;
        cout << "The product of c and d is: " << c * d << endl;
        cout << "The division of c by d is: " << c / d << endl;


    return 0;
}