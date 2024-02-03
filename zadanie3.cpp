// zadanie3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<stdio.h>
#include<conio.h>
#include<math.h>



using namespace std;
void task1()
{
    #define t1 2

    #define z1 3 * exp(2)
    #define y1 sin(t1)
    #define x1 pow(4, 2) / (4 * y1 * exp(z1) - 2 * pow(t1, 3))
    setlocale(LC_ALL, "ru");
    //printf("%f\t\n", x);
    cout << "Значение функции при\nt = " << t1 << "\nz = " << z1 << "\ny = " << y1 << "\nбудет " << x1;
    //cout << x << endl;

}


void task2()
{
    #define x2 6.35
    #define y2 7.32
    #define z2 exp(x2) * sqrt(pow(x2, 3) + y2) / x2 - 1
    #define b2 sqrt(y2 * exp(x2)) - z2 * pow(x2, 2) / 1 + pow(tan(x2), 2)
    setlocale(LC_ALL, "ru");
    
    //printf("%f\t\n", x);
    cout << "Значение функции при\nx = " << x2 << "\ny = " << y2 << "\nz = " << z2 << "\nb = " << b2;
    //cout << x << endl;
}
void task3()
{
    setlocale(LC_ALL, "ru");
    float alpha, beta;
    cout << "введите значение альфа: ";
    cin >> alpha;
    cout << "введите значение бета: ";
    cin >> beta;
    float cosA = cos(alpha);
    float sinA = sin(alpha);
    float cosB = cos(beta);
    float sinB = sin(beta);
    float y = pow(cosA - cosB, 2) - pow(sinA - sinA, 2);
    cout << "y = " << y;
}
int main()
{
    task2();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
