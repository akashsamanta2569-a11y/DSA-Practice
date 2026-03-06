#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];
    int sum = 0;

    cout << "Enter elements: ";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    float avg = (float)sum / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg << endl;

    return 0;
}
