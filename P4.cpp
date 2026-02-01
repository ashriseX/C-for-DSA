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

    cout << "------------Mathematical Operators Practice------------" << endl;

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


    //relational operators are:
    /* == (equal to)  --> checks if two values are equal
    != (not equal to) --> checks if two values are not equal
    >  (greater than) --> checks if left value is greater than right value
    <  (less than) --> checks if left value is less than right value
    >= (greater than or equal to) --> checks if left value is greater than or equal to right value
    <= (less than or equal to) --> checks if left value is less than or equal to right value
    these operators return boolean values(true or false) 1 for true and 0 for false*/

    cout << "------------Relational Operators Practice------------" << endl;
    cout << "enter two numbers to compare them: " << endl;
    int x, y;
    cin >> x >> y;
    cout << "x == y: " << (x == y) << endl;
    cout << "x != y: " << (x != y) << endl;
    cout << "x > y: " << (x > y) << endl;
    cout << "x < y: " << (x < y) << endl;
    cout << "x >= y: " << (x >= y) << endl;
    cout << "x <= y: " << (x <= y) << endl;


    //logical operators are:
    /* && (logical AND)  --> returns true if both operands are true
    || (logical OR) --> returns true if at least one operand is true
    ! (logical NOT) --> returns true if operand is false and vice versa
    these operators return boolean values(true or false) 1 for true and 0 for false*/
    cout << "------------Logical Operators Practice------------" << endl;
    bool p = true;
    bool q = false;
    cout << "p && q: " << (p && q) << endl;
    cout << "p || q: " << (p || q) << endl;
    cout << "!p: " << (!p) << endl;

    //unary operators are:
    /* ++ (increment)  --> increases the value of operand by 1
    eg two types of increment:
    1. Pre-increment: ++var --> increases the value of var by 1 before using it in an expression
    2. Post-increment: var++ --> increases the value of var by 1 after using it in an expression
    similarly,
    -- (decrement) --> decreases the value of operand by 1
    eg two types of decrement:
    1. Pre-decrement: --var --> decreases the value of var by 1
    2. Post-decrement: var-- --> decreases the value of var by 1 after using it in an expression

    these operators work only on integer data types
    these operators require only one type of operand unlike binary which require two operands to function*/



    cout << "------------Unary Operators Practice------------" << endl;
    int num = 5;

    cout << "Using Post-increment and Post-decrement:" << endl;
    cout << "num before increment: " << num << endl;
    cout << "num after increment: " << num++ << endl;
    cout << "num after decrement: " << num-- << endl;
    cout << "Using Pre-increment and Pre-decrement:" << endl;
    cout << "num before increment: " << num << endl;
    cout << "num after increment: " << ++num << endl;
    cout << "num after decrement: " << --num << endl;
    return 0;
}