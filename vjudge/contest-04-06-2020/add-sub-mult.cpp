#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    int A, B;
    cin >> A >> B;
    
    cout << max(A+B, A-B, A*B) << endl;

    return 0;
}
