//Write a program of find sum of every row and column in a two dimentional array.
#include<iostream>
using namespace std;
int main () {
    int matrix[2][2]={{3,5},{4,4}};
    int rows=2;
    int cols=2;
    // Sum of each row
    cout << "\nSum of each row:\n";
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += matrix[i][j];
        }
        cout << "Row " << i + 1 << " = " << rowSum << endl;
    }

    // Sum of each column
    cout << "\nSum of each column:\n";
    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += matrix[i][j];
        }
        cout << "Column " << j + 1 << " = " << colSum << endl;
    }

    return 0;

}
