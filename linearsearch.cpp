#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;  // Found, return index
    }
    return -1;  // Not found
}

int main() {
    int n, key;
    
    // Taking array size input
    cout << "Enter number of elements in array: ";
    cin >> n;
    
    int arr[n]; // Declaring array
    
    // Taking array elements input
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Taking key input
    cout << "Enter element to search: ";
    cin >> key;

    // Searching for the key
    int index = linearSearch(arr, n, key);
    
    // Display result
    if (index != -1)
        cout << "Element found at index " << index << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
