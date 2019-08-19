#include <iostream>
#include <cmath>
using namespace std;

int calcPow(int base, int power)
{
    if(power == 0)
    {
        return 1;
    }
    else
    {
        return base * calcPow(base, power - 1);
    }
}
int main()
{
    cout << pow(2, 3) << endl;
    cout << calcPow(2, 3) << endl;
    return 0;
}
