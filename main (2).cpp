/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath> // Для математичних обчислень
using namespace std;
int main()
{ // Завдання 1: Дано двозначне число. Знайти суму і добуток його цифр.
    cout << "Завдання 1. Дано двозначне число." << endl;

    // Введення числа
    int number;
    cout << "Введіть двозначне число: ";
    cin >> number;

    // Перевірка, що введене число є двозначним
    if (number < 10 || number > 99) {
        cout << "Помилка: введене число не є двозначним." << endl;
        return 1; // Завершення програми
    }

    // Розбиття числа на цифри
    int digit1 = number / 10; // Перша цифра
    int digit2 = number % 10; // Друга цифра

    // Обчислення
    int sum = digit1 + digit2; // Сума цифр
    int product = digit1 * digit2; // Добуток цифр

    // Виведення результатів
    cout << "Сума цифр: " << sum << endl;
    cout << "Добуток цифр: " << product << endl;
  
  // Завдання 2: Перевірити істинність висловлювання: «Справедливі нерівності A > 2 і B ? 3».
    cout << "\nЗавдання 2. Перевірити нерівності A > 2 і B ? 3." << endl;
    int A, B;
    cout << "Введіть ціле число A: ";
    cin >> A;
    cout << "Введіть ціле число B: ";
    cin >> B;

    // Перевірка умов
    bool condition = (A > 2) && (B <= 3);
    cout << "Висловлювання істинне: " << boolalpha << condition << endl;
  // Завдання 3: Обчислити математичний вираз.
    cout << "\nЗавдання 3. Обчислення математичного виразу." << endl;

    // Визначення числа ?
    const double pi = 3.141592;

    // Вхідне значення x
    double x = 2.5; // Підставлене значення
    cout << "Значення x = " << x << endl;

    // Обчислення чисельника
    double numerator = pow(log(x * x + cos(37 * pi / 180)), 2);

    // Обчислення sin^2(x^2)
    double sin_squared = pow(sin(x * x), 2);

    // Обчислення знаменника
    double denominator = sin_squared + sqrt(fabs(1 - 2 * cos(x) - sin_squared));

    // Обчислення функції
    double y = numerator / denominator;

    // Виведення результату
    cout << "Результат обчислення функції y = " << y << endl;

    return 0;

}