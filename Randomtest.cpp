#include <iostream>
using namespace std;

int x, y;     // Using Global Variables

void SetEqualGreater (int &num1, int &num2)
{
    if (num1 < num2)
        num1 = num2;
    else
        num2 = num1;
}

int main(){

    cin >> x >> y;
    SetEqualGreater(x, y);
    cout << "x = y = " << x << endl;

    return 0;
}
