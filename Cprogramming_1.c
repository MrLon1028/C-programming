#include <stdio.h>

int main() {

    int myNumbers[] = {10, 25, 50, 75, 100, 125};
    printf("%zu\n", sizeof(myNumbers)); // 24 bytes
    int ArrayL = sizeof(myNumbers) / sizeof(myNumbers[0]); // 6 elements

    for (int i = 0; i < ArrayL; i++) {
        printf("%d\n", myNumbers[i]);
    }
    if (myNumbers[0] == 10) {
        printf("The first element is 10\n");
    } else {
        printf("The first element is not 10\n");
    }

    printf("Hello World\n");

    
    return 0;
}