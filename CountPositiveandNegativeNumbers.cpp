
/*A weather station records temperature readings during the day.
Positive readings mean above 0°C, negative readings mean below 0°C, and zero means exactly 0°C.

Your job is to analyze the data and find how many readings are positive, negative, and zero.

Input Format:

The first line contains an integer n — the number of readings.

The second line contains n space-separated integers representing the readings.
*/


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  

    int positive = 0, negative = 0, zero = 0;
    int temp;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (temp > 0)
            positive++;
        else if (temp < 0)
            negative++;
        else
            zero++;
    }

    cout << "Positive = " << positive << endl;
    cout << "Negative = " << negative << endl;
    cout << "Zero = " << zero << endl;

    return 0;
}

