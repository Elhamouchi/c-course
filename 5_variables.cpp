#include <iostream>
using namespace std;
// testing main;
/*
int main(){
    string firstName = "abdellah";
    string lastName = "elhamouchi";
    int age = 19;

    cout << "first Name: " << firstName ;
    cout << "\nlast name: " << lastName;
    cout << "\nage: " << age << endl;


    // ========================


    bool mybool1 = true; // or false

    cout << mybool1 << "\n";

    bool mybool2 = 0; 
    cout << mybool2;


    // ==============


    char myLetter = 'a'; 

    cout << "\nthe chat type vatiable value: " << myLetter;

    // ==================


    int x = 1212;
    int y = 124;

    int sum = x + y;


    int a = 12, b = 13, c = 134;

    cout << endl << "a= " << a << "\nb= " << b << "\nc= " << c <<  "\n";

    cout << "\nthe sum of " << x << " + " << y << " is " << sum;

    //  =============================


    const float PI = 3.14;
    const string myConstName = "abdellah elhamouchi";
    cout << endl << PI;

    cout << "\nmyconst name: " << myConstName;
    
    string userName;

    cout << "\nEnter yout Name: ";
    cin >> userName;
    
    cout << "your name is: " << userName;
    return 0;
}
*/


// exerxice main;

int main(){
    //ex 1;
    cout << "exercice 1: \n";

    string name = "abdellah elhamouchi";
    int age = 19;
    string city = "taza";
    string country = "morocco";
    int month_salary = 5000;
    int yearly_salary  =  month_salary * 12;
    char gender = 'M';
    bool married = false;


    cout << "===========================================\n" ;
    cout << "Name: " << name << ".\n";
    cout << "Age: " << age << " Years.\n";
    cout << "country: " << country << ".\n";
    cout << "Month Salary: " << month_salary << " DH\n";
    cout << "Yearly Salary: " << yearly_salary << " DH\n";
    cout << "Gender: " << gender << "\n";
    cout << "Married: " << married << "\n";
    cout << "===========================================" << endl;
    // ex 2

    int num1 = 19;
    int num2 = 87;
    int num3 = 45;
    int total = num1 + num2 + num3;

    cout << "\n\n\n\n\n\n";

    cout << "exercice 2: \n";
    cout << num1 << " +\n";
    cout << num2 << " +\n";
    cout << num2 << " \n";
    cout << "___________________________________________\n\n";
    cout << "total = " << total << endl; 

    // ex 3;
    cout << "\n\n\n\n\n\n";

    cout << "exercice 3: \n";

    int yourCurrentAge = 19;
    int youtAgeAfter5Years = yourCurrentAge + 5;

    cout << "After 5 years will be " << youtAgeAfter5Years << " years old.";
    
    return 0;
}
