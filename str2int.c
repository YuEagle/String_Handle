#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int str2int(const char *str) {
    assert(str != NULL);
    const char *tmp = str;
    int value = 0;

    while (*tmp != '\0') {
        int ret = *tmp - '0';
        value = value * 10 + ret;
        tmp++;
    }

    return value;
}

int main() {
    char str[] = "124673";

    int ret = str2int(str);
    printf("ret: %d\n", ret);

    return 0;
}
