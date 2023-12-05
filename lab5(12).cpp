#include <iostream>
using namespace std;

//Оголошення ф-ції
int Divide(int numerator, int denominator)
{
    if (denominator == 0)
    {
        cout << "Ділення на 0 неможливе" << endl;
        return -1;
    }
    else
    {
        return numerator / denominator;
    }
}

int main() {

    setlocale(LC_ALL, "ukr");

    int numerator, denominator;

    cout << "Введiть чисельник: ";
    cin >> numerator;

    cout << "Введiть знаменник: ";
    cin >> denominator;

    //Звернення до ф-ції
    int result = Divide(numerator, denominator);
    if (result != -1)
    {
        cout << "Результат дiлення: " << result << endl;
    }

    return 0;
}

