#include <stdio.h>

int main() {

    int myNumbers[] = {10, 25, 50, 75, 100, 125};
    printf("%zu\n", sizeof(myNumbers)); // 24 bytes
    printf("%zu\n", sizeof(myNumbers) / sizeof(myNumbers[0])); // 6 elements
    printf("Hello World\n");
    return 0;
}