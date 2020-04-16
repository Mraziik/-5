// Задание 5. Соболев А.А. КББО-02-19
#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

double f(double, double);

int main()
{	
setlocale(LC_ALL, "Russian");
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
double x;
cout << "Введите число: ";
cin >> x;
cout << "Кубический корень из " << x << " равен " << f(x, x) << endl;
return 0;
}

double f(double y, double x)
{
double y_;
y_ = 0.5*( y + 3*x/(2*pow(y, 2) + x/y));
if(abs(y_ - y) < pow(10, -5)) return y_;
else return f(y_, x);
system("pause"); 
return 0;
}
