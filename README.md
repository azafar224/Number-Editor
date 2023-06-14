**Number Editor**

This program allows you to perform various operations on a dynamic array of numbers, such as inserting, deleting, editing, finding, and replacing numbers. It also supports an undo feature to revert the last operation performed.

**Features**

    Insert numbers into the array.
    Delete a specific number from the array.
    Undo the last operation performed.
    View the numbers in the array.
    Edit a specific number in the array.
    Find the index of a specific number in the array.
    Replace a specific number at a given index in the array.
    Replace all occurrences of a specific number in the array.
    
**Usage**

    Compile and run the program.
    Follow the on-screen menu to select the desired operation.
    Perform the selected operation as prompted.

**Class Members**

**Private Members**

    num[20]: An array to store the numbers.
    counter: A counter to keep track of the number of elements in the array.
    undo[20]: An array of structures to store the undo history.
    top: A variable to keep track of the top index in the undo array.
    
**Public Members**

    isfull(): Checks if the array has space to insert more numbers.
    insert(): Inserts values into the array.
    isEmpty(): Checks if the array is empty.
    del(int number): Deletes a specified number from the array.
    view(): Displays the numbers in the array.
    isundo(): Checks if there are any operations to undo.
    undoo(): Undoes the last operation performed.
    editNum(int number): Edits a specified number in the array.
    findNum(int number): Finds the index of a specified number in the array.
    findreplaceone(int number): Replaces a specific number at a given index in the array.
    replaceAll(int number): Replaces all occurrences of a specific number in the array.
    
**Main Function**

    Initializes an instance of the NumberEditor class.
    Displays a menu of options and performs the selected operation until the user chooses to exit.
    
**Notes**

    The array is limited to a maximum of 20 elements.
    Undo history is maintained for up to 20 previous operations.
    Error messages are displayed if the array is full, empty, or if an invalid option is selected.
    Feel free to explore and use this program to manage and manipulate a dynamic array of numbers!
