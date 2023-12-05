#include <iostream>
#include <cmath>

int main() {
    //Локалізація
    setlocale(LC_CTYPE, "ukr");

    // Змінні для збереження координат точок
    double x1, y1, x2, y2;

   
    cout << "Введіть координати першої точки (x1 y1): ";
    cin >> x1 >> y1;

    
    cout << "Введіть координати другої точки (x2 y2): ";
    cin >> x2 >> y2;

    // Обчислення відстані за формулою
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Виведення результату
    cout << "Відстань між точками (" << x1 << ", " << y1 << ") і (" << x2 << ", " << y2 << ") дорівнює: " << distance << endl;

    return 0;
}
