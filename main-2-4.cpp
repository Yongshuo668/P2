#include <iostream>
using namespace std;

int sum_min_max(int integers[], int length);

int main() {
    int arr[] = {3, 1, 4, 1, 5};
    cout << sum_min_max(arr, 5) << endl; 
    return 0;
}