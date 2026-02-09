//extracting and adding the digits in anumber

#include<iostream>
using namespace std;

int digitSum(int num){
    int sum = 0;
    do{
    sum += (num%10);
    num /= 10;
    } while(num !=0);
    return sum;

}

int main(){

    cout << "the sum of number 5678 is:" <<endl;
    cout << digitSum(5678);

    return 0;
}