//triangle pattern

#include <iostream>
using namespace std;

int main(){

    cout << "enter the number of the rows:" << endl;
    int n;
    cin >> n;

    cout << "the inverted triangle pattern with stars is: " << endl;

    for( int i = 0; i < n; i++){
        
        for( int j = 0; j <i; j++){
            cout << " ";
        }

        for (int j = 0; j < (n-i); j++){
            cout << "*";
        }
        cout << endl;
    }


    cout << "pyramid pattern with numbers: " << endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j<(n-i); j++){
            cout << " ";
        }
        for(int j = 0; j <= i; j++){
            cout << j+1 ;
        }
        for(int j = i-1; j >= 0; j--){
            cout << j+1;
        }
        cout << endl;
    }
}


//