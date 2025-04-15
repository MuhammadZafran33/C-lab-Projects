#include <iostream>
#include <fstream>
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{

//	ofstream outputFile;
//	outputFile.open("filedemo.txt");
//	 
// 	cout << "Now writing data to the file.\n";
//   // Write four names to the file.
//    outputFile << "KAMRAN\n";
//   outputFile << "ZAFRAN\n";
//    outputFile << "ABDULAZIZ\n";
//    outputFile << "SALMAN\n";
//    outputFile << "ADNAN\n";
// 
//    // Close the file
//    outputFile.close();
//    cout << "Done.\n";


//	ofstream outputFile;
//  	int number1, number2, number3;
// 
    // Open an output file.
//    outputFile.open("Numbers.txt");
//
//    // Get three numbers from the user.
//    cout << "Enter a number: ";
//    cin >> number1; 
//    cout << "Enter another number: ";
//    cin >> number2;
//    cout << "One more time. Enter a number: ";
//    cin >> number3;
//  
//    // Write the numbers to the file.
//    
//	outputFile << number2 << endl;
//    outputFile << number3 << endl;
//    outputFile << number1 << endl;
//    cout << "The numbers were saved to a file.\n";
// 
//    // Close the file
//    outputFile.close();
//    cout << "Done.\n";
//
//	ofstream outputFile;
// 	string name1, name2, name3;
// 	int m1, m2, m3;
//// 
//    // Open an output file.
//    //outputFile.open("Friends.txt");
//    string file;
//    cout<<"Enter File Path and Name : ";
//    cin>>file;
//    outputFile.open(file);
//	// Get the names of three friends.
//    cout << "Enter the names of three friends.\n";
//    cout << "Friend #1 Name: ";
//    cin >> name1;
//    cout<<"Friend #1 Marks : ";
//    cin>>m1;
//    cout << "Friend #2 Name : ";
//    cin >> name2;
//    cout<<"Friend #2 Marks : ";
//    cin>>m2;
//    cout << "Friend #3 Name : ";
//    cin >> name3;
//    cout<<"Friend #3 Marks : ";
//    cin>>m3;
//    
//	// Write the names to the file.
//    outputFile << "NAME\tMARKS\n";
//    outputFile << "=====================\n";
//	outputFile << name1 <<"\t"<<m1<<endl; 
//    outputFile << name2 <<"\t"<<m2<< endl;
//    outputFile << name3 <<"\t"<<m3<< endl;
//    outputFile << "=====================\n";
//    cout << "The names were saved to a file.\n";
//    
//	// Close the file
//    outputFile.close();

	ifstream inputFile;
	string Line;
//
	inputFile.open("Friends.txt");
   cout << "Reading data from the file.\n";
    
	//inputFile >> Line;       // Read name 1 from the file
    getline(inputFile, Line);
	cout << Line << endl;    // Display name 1
    //inputFile >> Line;       // Read name 2 from the file
    getline(inputFile, Line);
	cout << Line << endl;    // Display name 2
    //inputFile >> Line;       // Read name 3 from the file
    getline(inputFile, Line);
	cout << Line << endl;    // Display name 3
    inputFile.close();       // Close the file

//
//	ifstream inFile;
//	int value1, value2, value3, sum;
//    
//	// Open the file.
//    inFile.open("Numbers.txt");
//    // Read the three numbers from the file.
//    inFile >> value1;
//    inFile >> value2;
//    inFile >> value3;
//    // Close the file.
//    inFile.close();
//
//    // Calculate the sum of the numbers.
//    sum = value1 + value2 + value3;
//    // Display the three numbers.
//    cout << "Here are the numbers:\n"<< value1 << " " << value2<< " " << value3 << endl;
//      
//	// Display the sum of the numbers.
//    cout << "Their sum is: " << sum << endl;
//
//

	return 0;
}