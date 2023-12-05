#include <iostream>
using namespace std;

//Оголошення ф-ції для int 
bool areEqual(int a, int b) 
{
    return a == b;
}

//Оголошення ф-ції для double
bool areEqual(double a, double b) 
{
    return a == b;
}

//Оголошення ф-ції для char
bool areEqual(char a, char b) 
{
    return a == b;
}

int main() 
{
    //Локалізаія
    setlocale(LC_ALL, "ukr");

    int int1 = 24, int2 = 24;
    double double1 = 11.5, double2 = 11.5;
    char char1 = 'S', char2 = 'S';

    bool intResult = areEqual(int1, int2);
    bool doubleResult = areEqual(double1, double2);
    bool charResult = areEqual(char1, char2);

    cout << "Числа int  однакові" << intResult << endl;
    cout << "Числа double однакові" << doubleResult << endl;
    cout << "Символи char однакові" << charResult << endl;

    return 0;
}