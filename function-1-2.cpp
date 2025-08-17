#include <iostream>
using namespace std;

int sum_diagonal(int array[4][4]);

int main() {
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    cout << sum_diagonal(arr) << endl;
    return 0;
}