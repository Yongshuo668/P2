#include <iostream>
#include <string>
using namespace std;

void print_binary_str(string decimal_number) {
    int num = stoi(decimal_number);
    string binary = "";
    while (num > 0) {
        binary = to_string(num % 2) + binary;
        num /= 2;
    }
    cout << binary << endl;
}