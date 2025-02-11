#include <iostream>

using namespace std;

int main() {
    int startDay, dayOfYear;
    
    // Prompt user for input
    cout << "Enter the starting day of the year (0 for Sunday, 1 for Monday, ..., 6 for Saturday): ";
    cin >> startDay;
    cout << "Enter the day of the year (1 to 366): ";
    cin >> dayOfYear;
    
    // Validate input
    if (startDay < 0 || startDay > 6 || dayOfYear < 1 || dayOfYear > 366) {

        cout << "Error: Please enter a valid start day (0-6) and day of the year (1-366)." << endl;
        return 1;
    
	}
    
    // Compute day of the week
    int dayOfWeek = (startDay + dayOfYear - 1) % 7;
    
    // Array of day names
    const char* days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    
    // Output result
    cout << "The day of the week is: " << days[dayOfWeek] << endl;
    
    return 0;
}
