#include <iostream>
#include <string>

using namespace std;

void generatePattern(int num) {
    for (int i = 0; i < num; ++i) {
        string spaces(i, ' ');
        string numbers;
        for (int j = num - i; j > 0; --j) {
            numbers += to_string((num - i) % 10);
        }
        cout << spaces << numbers << endl;
    }
}

int main() {
    int num;
    cout << "Enter Number: ";
    cin >> num;

    if (num == 5) {
        generatePattern(num);
    } else {
        int new_num = (num % 5) + 5;
        generatePattern(new_num);
    }

    return 0;
}