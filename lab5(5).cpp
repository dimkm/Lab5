#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

int main() {

    //Локалізація
    setlocale(LC_CTYPE, "ukr");
    
    //Визнаяає кількість випадкових чисел
    const int numberOfRandomNumbers = 6;  

    // Ініціалізація генератора випадкових чисел
    srand(static_cast<unsigned int>(time(nullptr)));

    // Генерація та виведення випадкових чисел
    cout << "Випадкові числа: ";
    for (int i = 0; i < numberOfRandomNumbers; ++i) {
        int randomNumber = rand() % 100;  
        cout << randomNumber << " ";
    }
    while(int count < 10){
        cout << count << "";
        ++count
    }
    

    return 0;
}

