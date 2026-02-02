// upper lower case checker

#include <iostream>
using namespace std;

int main(){
    cout << " enter a character to check if it is upper case or lower case: " << endl;
    char ch;
    cin >> ch;
    int asciiValue = (int)ch;

    if (asciiValue >= 65 && asciiValue <= 90){
        cout << ch << " is an upper case letter." << endl;
    }
    else if (asciiValue >= 97 && asciiValue <= 122){
        cout << ch << " is a lower case letter." << endl;
    }
    else {
        cout << ch << " is not an alphabet letter." <<endl;
    }


    cout << " ---------------------- Turnary Operator Practice ----------------------" << endl;
    //syntax of turnary operator
    // condition ? expression_if_true : expression_if_false;

    cout << " enter a number to check if it is even or odd using turnary operator: " << endl;
    int num;
    cin >> num;
    cout << num << " is " <<( (num % 2 == 0) ? "even" : "Odd") << endl;
    
    return 0;
 }
    