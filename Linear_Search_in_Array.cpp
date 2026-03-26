#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int key;

    cout << "Enter number to search: ";
    cin >> key;

    for(int i = 0; i < 5; i++) {
        if(arr[i] == key) {
            cout << "Element found at index " << i;
            return 0;
        }
    }

    cout << "Element not found";

    return 0;
}
