//Right loop move

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void loopmove(char *str, int count) {
    assert(str != NULL);
    char *p = str;

    while (*p != '\0') {
        p++;
    }
    p--;

    while (count) {
        char ch = *p;
        char *tmp = p;
        while (tmp != str) {
            char *q = tmp - 1;
            *tmp = *q;
            tmp--;
        }

        *tmp = ch;
        count--;
    }
}

int main() {
    char str[] = "asdfghjkl";
    printf("before move, str: %s\n", str);
    int count = 5;
    loopmove(str, count);
    printf("after move %d, str: %s\n", count, str);

    return 0;
}
