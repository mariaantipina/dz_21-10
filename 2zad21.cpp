#include <iostream>
#include <cmath>

void dva(long long a, int b, int* system)
{
    if (a==0)
        return;
    *system += (a % 10) * pow(2, b);
    dva(a / 10, ++b, system);
}

int main(void)
{
    setlocale(LC_ALL, "Russian");
    long long a;
    int digit = 0;

    std::cout << "введите число в двоичной системе: ";
    std::cin >> a;
    dva(a, 0, &digit);
    std::cout << digit << std::endl;
}
