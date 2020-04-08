#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
        for(int j = 0; j < 2; j++)
            cout << i << " " << i*i + j << " " << i*i*i +j << endl;
    

    return 0;
}
