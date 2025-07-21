# C++ File Handling Application

This project demonstrates basic file-handling techniques in C++. It allows users to read from, write to, and append data to text files through a simple command-line interface.

## Project Structure

```
cpp-file-handling-app
├── src
│   ├── main.cpp          # Entry point of the application
│   ├── file_utils.cpp    # Implementation of file-handling functions
│   └── file_utils.h      # Header file for file-handling functions
```

## Compilation and Execution

To compile and run the application, follow these steps:

1. Open a terminal and navigate to the project directory.
2. Compile the source files using the following command:
   ```
   g++ src/main.cpp src/file_utils.cpp -o file_handling_app
   ```
3. Run the compiled application:
   ```
   ./file_handling_app
   ```

## Usage

Upon running the application, you will be prompted to enter text that will be written to a file named `folder.txt`. You can also choose to read from or append to the file using the provided options in the application.

## File Handling Techniques Demonstrated

- **Writing to a File**: The application allows users to write input data to a text file.
- **Reading from a File**: Users can read the contents of the file to see what has been stored.
- **Appending to a File**: The application provides functionality to add more data to the existing file without overwriting it.

This project serves as a practical introduction to file handling in C++, showcasing essential operations and user interaction.