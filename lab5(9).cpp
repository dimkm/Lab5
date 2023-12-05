#include <iostream>
using namespace std;

//Прототип ф-ції
unsigned long Perimeter(int length, int width);

int main()
{
    //Локалізація
    setlocale(LC_ALL, "ukr");

    int length, width;

    cout << "Введiть довжину: ";
    cin >> length;

    cout << "Введiть ширину: ";
    cin >> width;

    unsigned long result = Perimeter(length, width);
    cout << "Периметр: " << result << endl;

    return 0;
}

//Оголошення ф-ції
unsigned long Perimeter(int length, int width)
{
    return 2 * (static_cast<unsigned long>(length) + static_cast<unsigned long>(width));
};

int maxN(int a, int b)
{
    int maxNum = 0;
    if (a > b) {
        maxNum = a;
    }
    else {
        maxNum = b;
    }
}