#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void inverse(char *str) {
    char *p1 = str;
    char *p2 = str;
    
    while (*p2 != '\0') {
        p2++;
    }

    p2--;

    while (p1 < p2) {
        char tmp = *p1;
        *p1 = *p2;
        *p2 = tmp;
        p1++;
        p2--;
    }
}

void int2str(int value, char *str) {
    assert(str != NULL);
    const char *tmp = str;
    int i = 0;
    while (value) {
        int va1 = value % 10;
        str[i] = va1 + '0';
        value = value / 10;
        i++;
    }

    str[i] = '\0';

    inverse(str);

}

int main() {
    char str[20];
    int value = 12378432;

    int2str(value, str);
    printf("str: %s\n", str);

    return 0;
}
