
#include <iostream>
#include <cmath>
using namespace std;

// ������� ��� ������� ��������
void Task1(); // �������� 1: ��������� � �������������
void Task2(); // �������� 2: �������� ����� � �����
void Task3(); // �������� 3: ����� � �������� ������
void Menu();  // ���� ��� ������ �������

int main() {
    Menu(); // ������ ����
    return 0;
}

// �������� 1: ��������� � ������������� (If3)
void Task1() {
    cout << "�������� 1: ��������� � �������������." << endl;
    int number;
    cout << "������ ���� �����: ";
    cin >> number;

    if (number > 0) {
        number -= 8; // ³����� 8, ���� ����� �������
    } else if (number < 0) {
        number += 6; // ������ 6, ���� ����� ��'����
    } else {
        number = 10; // ����� 0 �� 10
    }

    cout << "�������� �����: " << number << endl;
}

// �������� 2: ��������, �� ��������� ����� � ������ (���������, � ���� ������ 1)
void Task2() {
    cout << "�������� 2: ��������, �� ����� ��������� � ������." << endl;
    double x, y;
    cout << "������ ���������� ����� (x, y): ";
    cin >> x >> y;

    // ���������, ���� ������ 3 � ������� � (0, 0)
    if (x * x + y * y <= 3) {
        cout << "����� ����������� � �����." << endl;
    } else {
        cout << "����� ����������� ���� �������." << endl;
    }
}

// �������� 3: ���������� ����� �� ��������� (���������, �����)
void Task3() {
    cout << "�������� 3: ���������� ����� �� ��������� ������." << endl;
    const double pi = 3.141592;
    double radius;
    cout << "������ ����� �����: ";
    cin >> radius;

    if (radius <= 0) {
        cout << "�������: ����� ������� ���� ��������." << endl;
        return;
    }

    double area = pi * radius * radius;
    double perimeter = 2 * pi * radius;

    cout << "�����: " << area << endl;
    cout << "��������: " << perimeter << endl;
}

// ���� ��� ������ �������
void Menu() {
    int choice;
    do {
        cout << "\n����:\n";
        cout << "1. �������� 1: ��������� � ������������� (If3)\n";
        cout << "2. �������� 2: �������� ����� � �����\n";
        cout << "3. �������� 3: ����� � �������� ������\n";
        cout << "0. �����\n";
        cout << "��� ����: ";
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
                cout << "����� �� ��������.\n";
                break;
            default:
                cout << "������������ ����. ��������� �� ���.\n";
        }
    } while (choice != 0);
}
