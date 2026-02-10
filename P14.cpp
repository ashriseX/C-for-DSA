#include <iostream>
#include <string>
using namespace std;


int binaryConversion(int num){
    if (num == 0){
        return 0;
    }
    int ans = 0;
    int power = 1; 
    while (num > 0){
      int remainder = num%2;
      num /= 2;
      ans += (remainder * power);
      power *= 10;
    }

    return ans;
}

int decimalConversion(int number){
    if (number == 0){
        return 0;
    }
    int ans = 0;
    int power = 1;

    while(number > 0){
        int remainder = number%10;
        ans += (remainder * power);
        power *= 2;
        number /= 10;
    }

    return ans;
}

int main(){

    int number;
    cout << "Enter the number you want to convert to the binary number system:" << endl;
    cin >> number;

    cout << "the conversion of number " << number << " to binary number system is " << binaryConversion( number) << endl;

    cout << "Enter the number in binary which you want to convert into decimal form:" << endl;
    cin >> number;

    cout << "the conversion of number " << number << " to decimal number system is " << decimalConversion( number);

    return 0;
}