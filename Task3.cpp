#include <iostream>
using namespace std;

// Function for checking prime number..................
bool sirPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int L, U;
    
    // this will take input from the user ..........
    cout << "Enter lower range value (L): ";
    cin >> L;
    cout << "Enter upper range /last limit value (U): ";
    cin >> U;
    
    // Relates input which are not True...............
    if (L >= U) {
        cout << "Invalid range! Lower range must be less than upper range." << endl;
        return 1;
    }
    
    cout << "Prime numbers between " << L << " and " << U << " are: ";
    
    // Finding the input number that is prime or not...................................
    for (int i = L; i <= U; i++) {
        if (sirPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    
    return 0;
}
