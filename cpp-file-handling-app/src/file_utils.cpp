#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void writeToFile(const string& filename, const string& data) {
    ofstream file(filename);
    if (file.is_open()) {
        file << data;
        file.close();
    } else {
        cerr << "Unable to open file for writing." << endl;
    }
}

void readFromFile(const string& filename) {
    ifstream file(filename);
    string line;
    if (file.is_open()) {
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cerr << "Unable to open file for reading." << endl;
    }
}

void appendToFile(const string& filename, const string& data) {
    ofstream file(filename, ios::app);
    if (file.is_open()) {
        file << data << endl;
        file.close();
    } else {
        cerr << "Unable to open file for appending." << endl;
    }
}