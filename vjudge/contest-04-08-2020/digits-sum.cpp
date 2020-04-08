#include <iostream>

using namespace std;


unsigned digits_sum(unsigned n);

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    if(n % digits_sum(n))
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
    
    return 0;
}

unsigned digits_sum(unsigned n)
{
    unsigned place = 1;
    unsigned sum = 0;

    while (n)
    {
        unsigned place_value = n % (unsigned) 10;
        sum += place_value;
        n -= place_value;
        n /= 10;
    }
    
    return sum;
}