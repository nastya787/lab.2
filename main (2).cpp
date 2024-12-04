/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath> // ��� ������������ ���������
using namespace std;
int main()
{ // �������� 1: ���� ��������� �����. ������ ���� � ������� ���� ����.
    cout << "�������� 1. ���� ��������� �����." << endl;

    // �������� �����
    int number;
    cout << "������ ��������� �����: ";
    cin >> number;

    // ��������, �� ������� ����� � ����������
    if (number < 10 || number > 99) {
        cout << "�������: ������� ����� �� � ����������." << endl;
        return 1; // ���������� ��������
    }

    // �������� ����� �� �����
    int digit1 = number / 10; // ����� �����
    int digit2 = number % 10; // ����� �����

    // ����������
    int sum = digit1 + digit2; // ���� ����
    int product = digit1 * digit2; // ������� ����

    // ��������� ����������
    cout << "���� ����: " << sum << endl;
    cout << "������� ����: " << product << endl;
  
  // �������� 2: ��������� ��������� �������������: ����������� �������� A > 2 � B ? 3�.
    cout << "\n�������� 2. ��������� �������� A > 2 � B ? 3." << endl;
    int A, B;
    cout << "������ ���� ����� A: ";
    cin >> A;
    cout << "������ ���� ����� B: ";
    cin >> B;

    // �������� ����
    bool condition = (A > 2) && (B <= 3);
    cout << "������������� �������: " << boolalpha << condition << endl;
  // �������� 3: ��������� ������������ �����.
    cout << "\n�������� 3. ���������� ������������� ������." << endl;

    // ���������� ����� ?
    const double pi = 3.141592;

    // ������ �������� x
    double x = 2.5; // ϳ��������� ��������
    cout << "�������� x = " << x << endl;

    // ���������� ����������
    double numerator = pow(log(x * x + cos(37 * pi / 180)), 2);

    // ���������� sin^2(x^2)
    double sin_squared = pow(sin(x * x), 2);

    // ���������� ����������
    double denominator = sin_squared + sqrt(fabs(1 - 2 * cos(x) - sin_squared));

    // ���������� �������
    double y = numerator / denominator;

    // ��������� ����������
    cout << "��������� ���������� ������� y = " << y << endl;

    return 0;

}