#include <iostream>
using namespace std;

int main(){
    // pattern of hollow rectangle with the stars 

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (i == 0 || i == 4 || j == 0 || j == 4){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }

    //hollow diamond pattern with the stars
    int n;
    cout << "enter the number of rows for the pattern: " << endl;
    cin >> n;

    for (int i = 0; i < n; i++){

        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        for (int j = 0; j < 2*i+1; j++){
            if (j == 0 || j == 2*i){
                cout << "*";
            }
            else{
                cout << " ";
            }

        }
        cout << endl;
    }

    cout << endl;

    cout << "my logic for the hollow diamond:";
    cout << endl;


    //upper part of hollow diamond
    for(int i =0; i<n; i++){
        //spaces
        for(int j = 0; j < (n-i-1); j++){
            cout << " ";
        }
        cout << "*";

        if(i != 0){
            for(int j = 0; j < 2*i-1; j++){
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    //lower part of hollow diamond
    for(int i = n-1; i >= 0; i--){
        //spaces
        for(int j = 0; j < (n-i-1); j++){
            cout << " ";
        }
        cout << "*";
        if(i != n && i!=0){
            for(int j = 0; j < 2*i-1; j++){
                cout << " ";

            }
            cout << "*";
        }
        cout << endl;
        
    }

    return 0;
}