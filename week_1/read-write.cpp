#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void writeToFile(const string &filename) {
    ofstream outFile(filename); // Opens the file for writing (overwrites existing content)
    if (!outFile) {
        cerr << "Error opening file for writing!" << endl;
        return;
    }

    string data;
    cout << "Enter text to write to the file (type END to stop):" << endl;
    while (true) {
        getline(cin, data);
        if (data == "END") break;
        outFile << data << endl;
    }
    outFile.close();
    cout << "Data written successfully to " << filename << endl;
}

void appendToFile(const string &filename) {
    ofstream outFile(filename, ios::app); // Opens file in append mode
    if (!outFile) {
        cerr << "Error opening file for appending!" << endl;
        return;
    }

    string data;
    cout << "Enter text to append to the file (type END to stop):" << endl;
    while (true) {
        getline(cin, data);
        if (data == "END") break;
        outFile << data << endl;
    }
    outFile.close();
    cout << "Data appended successfully to " << filename << endl;
}

void readFromFile(const string &filename) {
    ifstream inFile(filename); // Opens file for reading
    if (!inFile) {
        cerr << "Error opening file for reading!" << endl;
        return;
    }

    string line;
    cout << "\n--- File Content ---" << endl;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    cout << "--------------------\n";
    inFile.close();
}

int main() {
    string filename = "example.txt";
    int choice;

    do {
        cout << "\nFile Handling Menu\n";
        cout << "1. Write to file\n";
        cout << "2. Append to file\n";
        cout << "3. Read from file\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // To ignore leftover newline from cin

        switch (choice) {
            case 1:
                writeToFile(filename);
                break;
            case 2:
                appendToFile(filename);
                break;
            case 3:
                readFromFile(filename);
                break;
            case 4:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
