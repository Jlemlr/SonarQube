#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bufferOverflowExample() {
    char buffer[10];
    // Buffer overflow issue
    strcpy(buffer, "This string is too long for the buffer!");
    printf("Buffer content: %s\n", buffer);
}

void memoryLeakExample() {
    int *leakedMemory = (int *)malloc(sizeof(int) * 10);
    // Memory is allocated but never freed
}

void unusedVariableExample() {
    int unusedVariable = 42; // Unused variable
}

void hardcodedCredentialsExample() {
    char username[] = "admin";
    char password[] = "12345"; // Hardcoded credentials
    printf("Username: %s, Password: %s\n", username, password);
}

void nullPointerDereferenceExample() {
    int *ptr = NULL;
    // Null pointer dereference
    *ptr = 10;
}

int main() {
    bufferOverflowExample();
    memoryLeakExample();
    unusedVariableExample();
    hardcodedCredentialsExample();
    nullPointerDereferenceExample();
    return 0;
}
