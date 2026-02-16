#include <iostream>
#include <vector>
//#include <bits/c++,h>   produces similar results but it is not advised to use it

using namespace std;

int main(){

    vector<int> vec;//0 value  
    vec ={1,2,3};

    vector<int> vec2 = {10,20,30};

    vector <int> vec3(3,0);
     // |0|0|0| in memory special for each loop used for controlling this vector

    vector<char> vecChar = {'a', 'b', 'c', 'd', 'e'};
    for(char val : vecChar){
        cout << val << endl;
    }


    return 0;

}