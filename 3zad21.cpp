#include <iostream>
using namespace std;
void prost(int a, int b)
{
    if (a == 1)
        return;
    for ( ; ; b++)
        if (a % b == 0)
        {
            cout << b << endl;
            prost(a / b, b);
            return;
        }
}
int main()
{
    int a;
    cin >> a;
    prost(a, 2);
    return 0;
}