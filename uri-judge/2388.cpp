#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    unsigned n = 0, total = 0;
    unsigned T, V;

    cin >> n;

    for (unsigned i = 0; i < n; i++)
    {
        cin >> T >> V;

        total += T * V;
    }

    cout << total << endl;

    return 0;
}
