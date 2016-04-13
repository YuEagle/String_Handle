#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void str_cpy(char *dest, const char *src) {
    assert(dest != NULL);
    assert(src != NULL);
    const char *tmp = src;

    while (*tmp != '\0') {
        *dest = *tmp;
        dest++;
        tmp++;
    }
}

int main() {
    char str[] = "adsfghkjl";
    char *dest = (char *)malloc(sizeof(str));

    str_cpy(dest, str);
    printf("dest str: %s\n", dest);

    free(dest);
    return 0;
}
