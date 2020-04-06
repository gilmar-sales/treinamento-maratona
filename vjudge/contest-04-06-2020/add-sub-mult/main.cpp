#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int A, B;
    cin >> A >> B;

    int largest = A + B;

    if(A - B > largest) largest = A - B;
    if(A * B > largest) largest = A * B;

    cout << largest << endl;

    return 0;
}
