#include <iostream>

using namespace std;


bool is_prime(const int& number) {
    for (int i = 2; i < number; i++) {
        if (number % i == 0) return false;
    }
    return true;
}


int main() {
    int input;

    cout << "Hello! Enter a positive number: ";
    cin >> input;

    // Output all prime numbers smaller or equal to input number
    for (int i = 2; i <= input; i++) {
        if (is_prime(i))
            cout << i << ", ";
    }



    return 0;
}
