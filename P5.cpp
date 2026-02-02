//conditional statements and loops
#include <iostream>
using namespace std;

int main(){

    //----------------if else statement ----------------
    cout << "------------If Else Statement Practice------------" << endl;

    //if else age checker example
    cout << "Enter your age:" << endl;
    int age;
    cin >> age;

    if (age < 18){
        cout << "You are a minor and not eligible to vote" << endl;

    }
    else {
        cout << "you are  eligible to vote" << endl;

    }

    //even odd example
    
    cout << " Enter a number to check if it is even or odd:" << endl;
    int number;
    cin >> number;
    if (number %2 == 0){
        cout << number << " is an even number" << endl;
    }
    else {
        cout << number << " is an odd number" << endl;
    }
    


    //  if else if  grading system example
    cout << " Enter your grade percentage in in the exam:" << endl;
    int grade;
    cin >> grade;
    if (grade >= 90 && grade <= 100){
        cout << "You got an A grade" << endl;
    }
    else if (grade >= 80){
        cout << "You got a B grade" << endl;
    }
    else if (grade >= 70){
        cout << "You got a C grade" << endl;
    }
    else if (grade >= 60){
        cout << "You got a D grade" << endl;
    }
    else {
        cout << "You got an F grade" << endl;
    }


    return 0;
}