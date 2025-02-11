#include <iostream>
#include <iomanip>  

using namespace std;
int main() {
    int pounds, shillings, pence;
    const int SHILLINGS_PER_POUND = 20;
    const int PENCE_PER_SHILLING = 12;
    const int PENCE_PER_POUND = SHILLINGS_PER_POUND * PENCE_PER_SHILLING;
    
    // this will take Input from the user............
    cout << "Enter pounds: ";
    cin >> pounds;
    cout << "Enter shillings: ";
    cin >> shillings;
    cout << "Enter pence: ";
    cin >> pence;
    
    // Convert to decimal pounds
    double decimalPounds = pounds + (shillings * PENCE_PER_SHILLING + pence) / static_cast<double>(PENCE_PER_POUND);
    
    // Output of the programm
    std::cout << "Decimal pounds = \x9C" << std::fixed << std::setprecision(2) << decimalPounds << std::endl;
    
    return 0;
}
