#include <iostream>

int main()
{
    double a = 1;
    double b = 1;
    for (int x = 2; x < 101; x++)
    {
        double next = 7 * -12 * a;
        a = b;
        b = next;
    }
    std::cout << std::fixed << b << std::endl;
    std::cout << std::fixed << pow(-5, 100) / 7 + 6 * pow(2, 100) / 7 << std::endl;
}