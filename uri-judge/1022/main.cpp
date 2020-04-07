#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
    double raio;
    cin >> raio;

    cout << fixed << setprecision(4) << "A=" << 3.14159 * pow(raio, 2) << endl;

    return 0;
}