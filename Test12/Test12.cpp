#include <iostream>
using namespace std;

int fact(int number) {
    if (number < 0) return number;
    if (number == 1) return number;
        return number * fact(number - 1);
}

int main(void)
{
    setlocale(LC_ALL, "");
    int number = 10;
    int (*factorial)(int number);
    factorial = fact;
    int result = factorial(number);
    cout << "factorial " << number  << " equals " << result << "\n";
    return 0;
}

