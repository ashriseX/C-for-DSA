//Patterns

#include <iostream>
using namespace std;

int main(){
    cout << " Patterns for the DSA practice: " << endl;

    cout << "enter the number of rows and columns fir the pattern: " << endl;
    int rows, cols;
    cin >> rows >> cols;

    cout << " Simple rectangular pattern: " << endl;

    for(int i = 1; i <= rows; i++){ //outer loop for the rows or the y value in case of cartesian coordinate system
        for(int j = 1; j <= cols; j++){//inner loop for the columns or the x value in case of cartesian coordinate system
            cout << j << " ";
        }
        cout << endl;
    }

    cout << " simple rectangular pattern with stars and with start value of 0 as the row number: " << endl;
    for(int i = 0; i < rows; i++){ //outer loop for the rows or the y value in case of cartesian coordinate system
        for(int j = 0; j < cols; j++){//inner loop for the columns or the x value in case of cartesian coordinate system
            cout << "* ";
        }
        cout << endl;
    }

    cout << " simple rectangular pattern with alphabets and with start value of 0 as the row number: " << endl;
    for(int i = 0; i < rows; i++){ //outer loop for the rows or the y value in case of cartesian coordinate system
        char ch = 'A';
        for(int j = 0; j < cols; j++){//inner loop for the columns or the x value in case of cartesian coordinate system
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }


    cout << "simple pattern with continuous numbers starting from 1: " << endl;
    int count = 1;
    for(int i = 0; i < rows; i++){ //outer loop for the rows or the y value in case of cartesian coordinate system
        
        for(int j = 0; j < cols; j++){//inner loop for the columns or the x value in case of cartesian coordinate system
            cout << count << " ";
            count++;
        }
        cout << endl;
    }

    cout << "simple pattern with continuous Alphabets starting from A: " << endl;
    char ch = 'A';
    for(int i = 0; i < rows; i++){ //outer loop for the rows or the y value in case of cartesian coordinate system
        
        for(int j = 0; j < cols; j++){//inner loop for the columns or the x value in case of cartesian coordinate system
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }


}