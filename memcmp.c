#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int mem_cmp(const char *str1, const char *str2, int count) {
    assert(str1 != NULL);
    assert(str2 != NULL);
    const char *tmp1 = str1;
    const char *tmp2 = str2;

    while (count) {
        int t = *tmp1++ - *tmp2++;
        if (t) {
            return t;
        }
        count--;
    }
     
    return 0;
}

int main() {
    char str1[20] = "asdfgh";
    char str2[20] = "asd123";

    int res = mem_cmp(str1, str2, 5);
    if (res > 0) {
        printf("str1 > str2\n");
    } else if (res < 0) {
        printf("str1 < str2\n");
    } else {
        printf("str1 = str2\n");
    }

    return 0;
}
