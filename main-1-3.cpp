#include <iostream>
using namespace std;

void count_digits(int array[4][4]);

int main() {
    int arr[4][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 0, 1},
        {2, 3, 4, 5}
    };
    count_digits(arr);
    return 0;
}