#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    cout << n / 2 * (n / 2 + n % 2) << endl;
    return 0;
}
