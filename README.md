Number Editor
This program allows the user to perform different operations on an array of integers. It includes functions to insert, delete, view, edit, find, replace, and undo operations.

Requirements
This program requires a C++ compiler to be installed on the system to run.

How to Use
Open the terminal or command prompt
Navigate to the directory where the program is saved
Run the following command to compile the program:
g++ number_editor.cpp -o number_editor
Run the program using the following command:
./number_editor
Follow the on-screen instructions to perform the desired operations on the array of integers.
Functions
This program includes the following functions:

insert() - inserts values into the array
del(int number) - deletes the first occurrence of the given number from the array
view() - displays the contents of the array
editNum(int number) - replaces the first occurrence of the given number in the array with a new number
findNum(int number) - finds the index of the first occurrence of the given number in the array
findreplaceone(int number) - finds the index of all occurrences of the given number in the array and replaces one of them with a new number
replaceAll(int number) - replaces all occurrences of the given number in the array with a new number
isfull() - checks if the array is full
isEmpty() - checks if the array is empty
isundo() - checks if the undo operation can be performed
undoo() - undoes the last performed operation on the array
License
This project is licensed under the MIT License.
