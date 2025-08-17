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
    if (is_identity(arr)) {
        cout << "It is an identity matrix" << endl;
    } else {
        cout << "It is not an identity matrix" << endl;
    }
    return 0;
}