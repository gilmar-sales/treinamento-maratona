#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    unsigned piece_size[] = {300, 1500, 600, 1000, 150};
    unsigned count = 225, n;

    for(int i = 0; i < 5; i++)
    {
        cin >> n;
        count += piece_size[i] * n;
    }

    cout << count << endl;

    return 0;
}