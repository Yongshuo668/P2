#include <iostream>
using namespace std;

int sum_diagonal(int array[4][4]) {
    int sum = 0;
    for (int i = 0; i < 4; i++) {
        sum += array[i][i];
    }
    return sum;
}

int main() {
    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    cout << "The sum of the main diagonal elements is:" << sum_diagonal(arr) << endl;
    return 0;
