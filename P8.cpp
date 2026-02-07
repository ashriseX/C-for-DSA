//pattern triangular

#include <iostream>
using namespace std;

int main(){

    cout << "Enter the number of rows for the pattern: " << endl;
    int rows;
    cin >> rows;

    cout << " simple triangular pattern with stars: " << endl;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }


    cout << " Simple right aligned triangular pattern with stars: " << endl;

    for (int i = 0; i < rows; i++){
        for (int j = rows; j >= 0; j--){
            if (j > i){
                cout << " ";
            }
            else{
                cout << " *";
            }
        }
        cout << endl;
    }
}