#include <stdio.h>  // Include standard I/O library for printf (for simulation purposes)

// Function prototypes
void changeValues(int *a, int *b);

int main() {
    // Declare and initialize two integer variables
    int value1 = 10;
    int value2 = 20;
    
    // Print the initial values of the variables
    printf("Initial values:\n");
    printf("Value1: %d\n", value1);
    printf("Value2: %d\n", value2);
    
    // Call function to change the values
    changeValues(&value1, &value2);
    
    // Print the updated values of the variables
    printf("\nUpdated values:\n");
    printf("Value1: %d\n", value1);
    printf("Value2: %d\n", value2);
    
    return 0;
}

// Function to swap the values of two integers
void changeValues(int *a, int *b) {
    // Temporary variable to hold the value during swap
    int temp;
    
    // Swap the values using a temporary variable
    temp = *a;  // Store the value of *a in temp
    *a = *b;    // Assign the value of *b to *a
    *b = temp;  // Assign the value stored in temp to *b
}

