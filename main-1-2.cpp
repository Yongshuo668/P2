#include <iostream>
using namespace std;

int is_identity(int array[10][10]);

int main() {
    int arr[10][10] = {0};
    for (int i = 1; i < 10; i++) {
        for (int j = 0; j < i; j++) {
            arr[i][j] = 1;
        }
    }
    cout << (is_identity(arr) ? "1" : "0") << endl;
    return 0;
}