#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    //defining variables
    string operation;
    double number1 ,number2;

    //get user input 
    cout << "Enter First Number: ";
    cin >>number1;
    cout << "Enter Operation like(+,-,*,/): " ;
    cin >>operation;
    cout << "Enter Second Number: ";
    cin >>number2;

    //if else statements for operation checking
    if(operation == "+"){
        cout << number1 + number2;
    }else if(operation == "-"){
        cout << number1 - number2;
    }else if(operation == "*"){
        cout << number1 * number2;
    }else if(operation == "/"){
        cout << number1 / number2;
    }
    else {
        cout << "please enter a valid operator or valid numbers ";
    }

   return 0;
};