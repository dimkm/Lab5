#include <iostream>
#include <cmath>

using namespace std;

int main() {

    //Локалізація
    setlocale(LC_CTYPE, "ukr");

    // Коефіцієнти квадратного рівняння
    double a, b, c;

    cout << "Введіть коефіцієнт a: ";
    cin >> a;

    cout << "Введіть коефіцієнт b: ";
    cin >> b;

    cout << "Введіть коефіцієнт c: ";
    cin >> c;

    // Обчислення дискримінанту
    double discriminant = b * b - 4 * a * c;

    // Перевірка дискримінанту
    if (discriminant > 0) {
        // Два  корені
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);

        cout << "Корені рівняння: " << x1 << " і " << x2 << endl;
    }
    else if (discriminant == 0) {
        // Один корінь
        double x = -b / (2 * a);
        cout << "Корінь рівняння: " << x << endl;
    }
    else {
       
        cout << "Рівнання не має коренів" << endl;
    }

    return 0;
}
