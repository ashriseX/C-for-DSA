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

    return 0;
 }
    