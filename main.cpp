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
    cout << "Prastevila, ki so manjsa ali enaka stevilu " << input << ": ";
    for (int i = 2; i <= input; i++) {
        if (is_prime(i))
            cout << i << ", ";
    }

    // Output multiples of 3 and 5, smaller than input number
    cout << "\nStevila, ki so veckratniki stevil 3 in 5 ter so manjsa od stevila " << input << ": ";
    for (int i = 1; i < input; i++) {
        if (i % 3 == 0 && i % 5 == 0)
            cout << i << ", ";
    }



    return 0;
}
