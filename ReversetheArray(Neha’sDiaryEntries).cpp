/*Given n numbers representing Neha’s daily exercise time, print them in reverse order.

🧠 Input Format:

The first line contains an integer n — the number of days.

The second line contains n space-separated integers representing exercise times.
Output Format:

Print the exercise times in reverse order on a single line separated by spaces.
*/


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i];
        if (i > 0) cout << " "; 
    }

    return 0;
}

