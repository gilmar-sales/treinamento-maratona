#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    unsigned N;
    cin >> N;

    if(N % 2)
        cout << N * 2 << endl;
    else
        cout << N << endl;

    return 0;
}