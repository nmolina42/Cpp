#include <iostream>

bool is_prime(int x)
{
    if (x <= 1) {
        return false;
    }

    for (int i = 3; i <= x/2; i = i + 2) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int main(int argc, char *argv[])
{
    long long n;
    while(std::cin >> n)
    {
        if(is_prime(n))
        {
            std::cout << n << " is a prime: True\n";
        }else
            std::cout << n << " is a prime: False\n";
    }
    return 0;
}
