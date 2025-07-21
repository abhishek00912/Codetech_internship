#ifndef FILE_UTILS_H
#define FILE_UTILS_H

#include <string>

// Function to write data to a file
void writeToFile(const std::string& filename, const std::string& data);

// Function to read data from a file
std::string readFromFile(const std::string& filename);

// Function to append data to a file
void appendToFile(const std::string& filename, const std::string& data);

#endif // FILE_UTILS_H