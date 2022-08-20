#include <cstdio>

int main() {
    const int value = 111;
    printf("init value: %d\n", value);
    *((int*) &value) = 222;
    printf("new  value: %d\n", value);
    return(0);
}