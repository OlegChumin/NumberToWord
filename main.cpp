#include <iostream>
using namespace std;

// Function to convert a number to its written name
string numberToWord(int num) {
    // Array containing names for numbers from 0 to 9
    string names[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if (num >= 0 && num <= 9) {
        return names[num];
    } else {
        return "Invalid number!";
    }
}

int main() {
    int num;

    // Read the number from the user
    cout << "Enter a number (0 to 9): ";
    cin >> num;

    // Call the function to get the written name and print it
    cout << "The written name of the number is: " << numberToWord(num) << endl;

    return 0;
}
