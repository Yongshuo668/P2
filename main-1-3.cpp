#include <iostream>
using namespace std;

void count_digits(int array[4][4]) {
    int count[10] = {0};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int num = array[i][j];
            if (num >= 0 && num <= 9) {
                count[num]++;
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        cout << i << ":" << count[i] << ";";
    }
    cout << endl;
}

int main() {
    int arr[4][4] = {{0, 0, 0, 0}, {1, 1, 1, 1}, {2, 2, 2, 2}, {3, 3, 3, 3}};
    count_digits(arr);
    return 0;
}