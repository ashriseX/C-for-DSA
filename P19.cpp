#include <iostream>
using namespace std;

//recursions practice

//factorial
int factorial(int num){
  if(num==0){
    return 1;
  }

  return num*factorial(num-1);

}

int main(){
    cout << "Enter a number to find its factorial:" << endl;
    int num;
    cin >> num;
    cout <<"The factorial is :" << factorial(num);

    return 0;
}