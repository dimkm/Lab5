#include <iostream>
using namespace std;

//Створення ф-ції
void DoubleValue(int value) 
{
    value *= 2;
}

int main() {

    //Локалізація
    setlocale(LC_ALL, "ukr");

    int number = 11;

    cout << "Початкове значення: " << number << endl;

    //Виклик ф-ції
    DoubleValue(number);

    cout << "Значення після виклику функції: " << number << endl;

    return 0;
}