#include <stdio.h>

int main() {
    int i;
    int*j=&i;
    printf("the address of i is %d", &j);
    return 0;
}
