#include <iostream>
using namespace std;

//Оголошення ф-ції
int Perimeter(int length, int width)
{
    return 2 * (length + width);
}

int main()
{

    //Локалізація
    setlocale(LC_ALL, "ukr");

    int length, width;

    cout << "Введiть довжину: ";
    cin >> length;

    cout << "Введiть ширину: ";
    cin >> width;

    //Виклик ф-ції
    int result = Perimeter(length, width);
    cout << "Периметр прямокутника: " << result << endl;

    return 0;
}