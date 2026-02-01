 #include <iostream>
 using namespace std;

 int main(){
   // Different data types in C++
   // int, char, float, bool, double
   //Prmitive data types
    int age = 25;
    cout << "age is: " << age << endl;
    cout << "its size in memory blocks is " << sizeof(age) << " bytes" << endl; 

    char grade = 'A';
    cout << "grade is: " << grade << endl;
    cout << "char data type variable's size in memory blocks is " << sizeof(grade) << " bytes" << endl;

    float gpa = 3.75f;  // 'f' suffix to indicate float literal or else the compiler will think of it as a double
      cout << "gpa is: " << gpa << endl;
      cout << "float data type variable's size in memory blocks is " << sizeof(gpa) << " bytes" << endl;
    
    bool isGraduated = false; //bool thakes input only in form of true and false which translate into machine language as either 0 or 1 and is the most basic data type.
      cout << "isGraduated is: " << isGraduated << endl;
      cout << "bool data type variable's size in memory blocks is " << sizeof(isGraduated) << " bytes" << endl;

    double preciseGpa = 3.7554321;
      cout << "preciseGpa is: " << preciseGpa << endl;
      cout << "double data type variable's size in memory blocks is " << sizeof(preciseGpa) << " bytes" << endl;

   //TYpe casting
   //Converting data from one type into another type is called type casting.
   //it can be done by compiler or the programmer and on this basis it is of two types:
   //1. Implicit type casting conventionally known as type conversion if done by compiler(done by compiler)
   //whatever operation is being done between two different data types, the compiler automatically converts the lower data type into higher data type to prevent data loss.
   //converts small data type --> Big data type
   //it is automatic.
   float PI = 3.14f;
   double precisePI = PI; //float to double conversion
   cout << "The value of precisePI is: " << precisePI << endl;


   char grade2 = 'B';
      int asciiValue = grade2; //char to int conversion
      cout << "The ASCII value of " << grade2 << " is " << asciiValue << endl;
      int value = grade2; //char to int conversion
      cout << "The ASCII value of " << grade2 << " is " << value << endl;
   
      int asccivalueOfGrade = grade;
      cout << "The ASCII value of " << grade << " is " << asccivalueOfGrade << endl;

   //2. Explicit type casting conventionally known as type casting if done by programmer(done by programmer)
   //it is done by using the cast operator
   //converts Big data type --> small data type
   // it is manual.

   double price = 45.99;
   cout << "The price is: " << price << endl;
   int roundedPrice = (int)price; //explicit type casting from double to int
   cout << "The rounded price is: " << roundedPrice << endl;

    return 0;
 }