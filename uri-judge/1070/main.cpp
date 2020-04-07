#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int x;
    int n = 0;

    cin >> x;

    while(n < 6)
    {
        if(x % 2 == 0)
            cout << ++x << endl;
        else
        {
            x += 2;
            cout << x << endl;
        }
        
        n++;
    }

    return 0;
}
