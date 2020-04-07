#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int c;
    cin >> c;

    for (int i = 0; i < c; i++)
    {
        int S = 0, n;
        cin >> n;

        for(int j = 0; j < n; j++)
            if(j % 2 == 1)
                S -= 1;
            else 
                S += 1;

        cout << S << endl;
    }
    return 0;
}
