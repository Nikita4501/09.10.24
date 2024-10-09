#include<string>
#include<windows.h>
#include <iostream>
using namespace std;

int main() 
{
    SetConsoleCP(1251); SetConsoleOutputCP(1251);
    int a1[3][4] = { {1, 2, -3, 4}, {5, 6, -7, 8}, {-9, 10, 11, -12} };
    int b1 = 3;
    int c1 = 4;

    // 1) Суммирование значений двумерного массива
    int sum = 0;
    for (int i = 0; i < b1; ++i) 
    {
        for (int j = 0; j < c1; ++j) 
        {
            sum += a1[i][j];
        }
    }
    cout << "Сумма элементов двумерного массива: " << sum << endl;

    // 2) Найти среднее значение двумерного массива
    float sred = static_cast<float>(sum) / (b1 * c1);
    cout << "Среднее значение элементов двумерного массива: " << sred << endl;

    // 3) Найти положительные и отрицательные числа двумерного массива
    cout << "Положительные числа: ";
    for (int i = 0; i < b1; ++i) 
    {
        for (int j = 0; j < c1; ++j) 
        {
            if (a1[i][j] > 0) 
            {
                cout << a1[i][j] << " ";
            }
        }
    }
    cout << endl;

    cout << "Отрицательные числа: ";
    for (int i = 0; i < b1; ++i) 
    {
        for (int j = 0; j < c1; ++j) 
        {
            if (a1[i][j] < 0) 
            {
                cout << a1[i][j] << " ";
            }
        }
    }
    cout << endl;

    return 0;
}