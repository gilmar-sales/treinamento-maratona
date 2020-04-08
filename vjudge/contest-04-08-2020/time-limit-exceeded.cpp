#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, limit, cost, time;
    cin >> n >> limit >> cost >> time;

    for(int i = 1; i < n; i++)
    {
        int a, b;
        cin >> a >> b;

        if(b <= limit && a < cost)
        {
            cost = a;
            time = b;
        }
    }

    if(time <= limit)
        cout << cost << endl;
    else
        cout << "TLE" << endl;

    return 0;
}
