#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;

    for(int i = 1; i <= N; i++)
        if(!(N % i)) cout << i << endl;

    return 0;
}
