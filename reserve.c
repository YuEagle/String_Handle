#include <stdio.h>
#include <assert.h>

void reserve(char *str) {
    assert(str != NULL);
    char *p1 = str;
    char *p2 = str;

    while (*p2) { //The value of *p2 will be '\0'.
        p2++;
    }
    p2 -= 1;

    while (p1 < p2) {
        char tmp = *p1;
        *p1++ = *p2;
        *p2-- = tmp;
    }
}

int main() {
    char str[] = "adsfghkjl";
    reserve(str);
    printf("str: %s\n", str);
    
    return 0;
}
