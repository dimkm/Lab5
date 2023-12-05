#include <iostream>
using namespace std;

//Оголошення ф-ції
int AddNumbers(int a, int b = 0)
{
    return a + b;
}

int main() 
{
    //Локалізація
    setlocale(LC_ALL, "ukr");

    int x1, x2;

    cout << "Введiть перше число: ";
    cin >> x1;

    cout << "Введiть друге число: ";
    cin >> x2;

    //Зверенення до ф-ції
    int sum = AddNumbers(x1, x2);

    cout << "Сума чисел: " << sum << endl;

    return 0;
}