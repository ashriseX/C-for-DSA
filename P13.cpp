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
//test case values 5 and 3 as 5!=120, 3!= 6, 5-3!=2, C = 120/6*2 = 120/12=10 so C=10

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