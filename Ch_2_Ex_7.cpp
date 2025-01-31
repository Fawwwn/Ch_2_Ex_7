#include <iostream>
using namespace std;

int main() 
{
    // Initial rise rate
    double riseRate = 1.5; // millimeters per year

    // Calculating rise in 5, 7, and 10 years
    double riseIn5Years = riseRate * 5;
    double riseIn7Years = riseRate * 7;
    double riseIn10Years = riseRate * 10;

    cout << "In 5 years, the ocean's level will be " << riseIn5Years << " millimeters higher." << endl;
    cout << "In 7 years, the ocean's level will be " << riseIn7Years << " millimeters higher." << endl;
    cout << "In 10 years, the ocean's level will be " << riseIn10Years << " millimeters higher." << endl;

    return 0;
}
