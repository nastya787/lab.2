#include <iostream>
#include <cmath>
using namespace std;

// Функції для кожного завдання
void Task1(); // Завдання 1: Алгоритми з розгалуженням
void Task2(); // Завдання 2: Перевірка точки у фігурі
void Task3(); // Завдання 3: Площа і периметр фігури
void Menu();  // Меню для вибору завдань

int main() {
    Menu(); // Виклик меню
    return 0;
}

// Завдання 1: Алгоритми з розгалуженням (If3)
void Task1() {
    cout << "Завдання 1: Алгоритми з розгалуженням." << endl;
    int number;
    cout << "Введіть ціле число: ";
    cin >> number;

    if (number > 0) {
        number -= 8; // Відняти 8, якщо число додатне
    } else if (number < 0) {
        number += 6; // Додати 6, якщо число від'ємне
    } else {
        number = 10; // Заміна 0 на 10
    }

    cout << "Отримане число: " << number << endl;
}

// Завдання 2: Перевірка, чи потрапляє точка у фігуру (наприклад, у круг радіуса 1)(Geom6)
void Task2() {
    cout << "Завдання 2: Перевірка, чи точка потрапляє у фігуру." << endl;
    double x, y;
    cout << "Введіть координати точки (x, y): ";
    cin >> x >> y;

    // Наприклад, круг радіуса 3 з центром у (0, 0)
    if (x * x + y * y <= 3) {
        cout << "Точка знаходиться у фігурі." << endl;
    } else {
        cout << "Точка знаходиться поза фігурою." << endl;
    }
}

// Завдання 3: Обчислення площі та периметра (наприклад, круга)(Geom6)
void Task3() {
    cout << "Завдання 3: Обчислення площі та периметра фігури." << endl;
    const double pi = 3.141592;
    double radius;
    cout << "Введіть радіус круга: ";
    cin >> radius;

    if (radius <= 0) {
        cout << "Помилка: радіус повинен бути додатним." << endl;
        return;
    }

    double area = pi * radius * radius;
    double perimeter = 2 * pi * radius;

    cout << "Площа: " << area << endl;
    cout << "Периметр: " << perimeter << endl;
}

// Меню для вибору завдань
void Menu() {
    int choice;
    do {
        cout << "\nМеню:\n";
        cout << "1. Завдання 1: Алгоритми з розгалуженням (If3)\n";
        cout << "2. Завдання 2: Перевірка точки у фігурі\n";
        cout << "3. Завдання 3: Площа і периметр фігури\n";
        cout << "0. Вихід\n";
        cout << "Ваш вибір: ";
        cin >> choice;

        switch (choice) {
            case 1:
                Task1();
                break;
            case 2:
                Task2();
                break;
            case 3:
                Task3();
                break;
            case 0:
                cout << "Вихід із програми.\n";
                break;
            default:
                cout << "Неправильний вибір. Спробуйте ще раз.\n";
        }
    } while (choice != 0);
}

