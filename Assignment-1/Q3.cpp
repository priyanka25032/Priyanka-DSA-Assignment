//Design the logic of a program to rotate a 1-D array by K-positions.

#include <iostream>
using namespace std;

// Function to perform left rotation
void leftRotate(int A[], int n, int k) {
    k = k % n; // normalize k
    cout << "Left Rotation by " << k << ": ";
    for (int i = 0; i < n; i++) {
        cout << A[(i + k) % n] << " ";
    }
    cout << endl;
}

// Function to perform right rotation
void rightRotate(int A[], int n, int k) {
    k = k % n; // normalize k
    cout << "Right Rotation by " << k << ": ";
    for (int i = 0; i < n; i++) {
        cout << A[(i - k + n) % n] << " ";
    }
    cout << endl;
}

int main() {
    int A[] = {1, 2, 3, 4, 5};
    int n = sizeof(A) / sizeof(A[0]);
    int k;

    cout << "Enter k (number of rotations): ";
    cin >> k;

    leftRotate(A, n, k);
    rightRotate(A, n, k);

    return 0;
}