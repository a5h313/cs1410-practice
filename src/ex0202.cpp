#include <iostream>
#include <string>

using namespace std;

int main(){
    cout << "Enter day: ";
    string day;
    cin >> day;

    if (day == "saturday" || day == "sunday") {
        cout << "It's a weekend." << endl;
    }
    else {
        cout << "It's a weekday." << endl;
    }
    return 0;
}