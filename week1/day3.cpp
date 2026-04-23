#include <iostream>
using namespace std;

void clamp(int& value, int minimum, int maximum)
{
    if (value < minimum)
    {
        value = minimum;
    }
    else if (value > maximum)
    {
        value = maximum;
    }
   

}


int main() {
    // case 1: above maximum
    int a = 150;
    clamp(a, 0, 100);
    cout << "150 clamped to 0-100: " << a << endl;

    // case 2: below minimum
    int b = -5;
    clamp(b, 0, 100);
    cout << "-5 clamped to 0-100: " << b << endl;

    // case 3: within range
    int c = 50;
    clamp(c, 0, 100);
    cout << "50 clamped to 0-100: " << c << endl;

    return 0;
}