#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;

int main(){
    double F = 0;
    float C = 0;
    double temp = 0;
    char symbol = 'n';

    cout << "Enter the temperature: ";
    cin >> temp;
    cout << "Enter Celsius (c) or Fahrenheit (f): ";
    cin >> symbol;

    if (symbol == 'f') {
        C = (temp - 32) * 5/9;
        cout << "The temperature in Celsius is " << C << endl;
    }
    else {
        F = temp;
        F *= 1.8;
        F += 32;
        cout << "The temperature in Fahrenheit is " << F << endl;
    }

    return 0;
}
