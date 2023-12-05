#include <iostream>
#include <cstdlib>  

int main() {

    //Локалізація
    setlocale(LC_CTYPE, "ukr");

    // Оголошення рядка для збереження введеного значення
    char buffer[256];

    // Введення рядка від користувача
    cout << "Введіть рядок: ";
    cin.getline(buffer, sizeof(buffer));

    // Перетворення рядка на ціле число
    int integerValue = atoi(buffer);

    // Перетворення рядка на довге число
    long longValue = atol(buffer);

    // Перетворення рядка на речове число
    double doubleValue = atof(buffer);

    // Виведення результатів на екран
    cout << "Ціле число: " << integerValue << endl;
    cout << "Довге число: " << longValue << endl;
    cout << "Речове число: " << doubleValue << endl;

    return 0;
}
