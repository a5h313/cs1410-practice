#include <iostream>

using namespace std;

int main(){

    double tempC, tempF;

    cout << "Temperature in Celsius: " << endl;
    cin >> tempC;

    tempF = 9.0 * tempC / 5.0 + 32;
    cout << "Temperature in Fahrenheit: " << tempF << endl;

    return 0;
}