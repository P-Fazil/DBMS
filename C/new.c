#include <stdio.h>

int main() {
    printf("Hello\n");
    int arr[5] = {1,32,4,4,2};
    for (int i = 0; i < 5; i++) {
        printf("%p\n", (void*)&arr[i]);
    }
}