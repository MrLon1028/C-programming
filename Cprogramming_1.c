#include <stdio.h>

int main() {

    int myNumbers[] = {10, 25, 50, 75, 100, 125};
    printf("%zu\n", sizeof(myNumbers)); // 24 bytes
    int ArrayL = sizeof(myNumbers) / sizeof(myNumbers[0]); // 6 elements

    for (int i = 0; i < ArrayL; i++) {
        printf("%d\n", myNumbers[i]);
    }    
    printf("Hello World\n");
    return 0;
}