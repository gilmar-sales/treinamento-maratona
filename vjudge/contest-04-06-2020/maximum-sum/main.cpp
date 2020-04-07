#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    unsigned A, B, C, K;
    cin >> A >> B >> C >> K;

    unsigned* major = &A;

    if(B > *major) major = &B;
    if(C > *major) major = &C;

    for(int i = 0; i < K; i++)
    {
        *major *= 2;
    }

    cout << A + B + C << endl;
    return 0;
}
