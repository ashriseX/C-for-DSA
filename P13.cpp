#include<iostream>
using namespace std;

//nCr = n! / r! (n-r)!

int factorial(int num){
    int fact = 1;
    while(num !=0){
        fact *= num;
        num--;
    }
    return fact;

}

int binomialCoefficient(int n, int r){
    int C = (factorial(n))/(factorial(r) * factorial(n-r));
    return C;
    
}

int main(){

    cout << "Enter the value of the n and r for the binomial coefficient: " << endl;
    int n;
    int r;
    cin >> n;
    cin >> r;

    cout << "The binomial coefficient of the values " << n << " and " << r << " is " << binomialCoefficient(n, r);
    
}