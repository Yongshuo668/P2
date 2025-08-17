#include <iostream>
using namespace std;

int sum_if_palindrome(int integers[], int length);

int main() {
    int arr[] = {1, 2, 2, 1};
    cout << sum_if_palindrome(arr, 4) << endl; 
    return 0;
}