#include <iostream>
#include <fstream>
#include <string>
#include "file_utils.h"

using namespace std;

int main() {
    string userInput;
    string fileName = "folder.txt";

    cout << "Enter text to store in the file: ";
    getline(cin, userInput);
    
    writeToFile(fileName, userInput);
    
    cout << "Data written to file. Current contents of the file:\n";
    readFromFile(fileName);
    
    cout << "\nEnter text to append to the file: ";
    getline(cin, userInput);
    
    appendToFile(fileName, userInput);
    
    cout << "Data appended to file. Updated contents of the file:\n";
    readFromFile(fileName);

    return 0;
}