#include<iostream>
using namespace std;

int get_fibonacci_last_digit_fast(int n)
{
    int fib[n + 1];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        fib[i] = (fib[i - 1] + fib[i - 2]) % 10;
    }
    return fib[n];
}

int main()
{
    long long int n=0;
    cin >> n;
    int c = get_fibonacci_last_digit_fast(n);
    cout << c << '\n';

    return 0;
}
