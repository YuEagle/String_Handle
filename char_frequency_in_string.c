//求一个字符串中出现频率最高的那个字符及其出现次数
//分析：空间换时间

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

void char_frequency_in_string(const char *str) {
    assert(str != NULL);
    const char *tmp = str;

    int array[128];
    int maxnum = 0;
    int maxindex = 0;

    memset(array, 0, 128 * 4);

    while (*tmp != '\0') {
        int index = *tmp;
        array[index] += 1;
        tmp++;
        if (array[index] > maxnum) {
            maxnum = array[index];
            maxindex = index;
        }
    }

    printf("maxindex %x, maxnum %d\n", maxindex, maxnum);

    int i;
    for(i = 0; i < 128; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }
}

int main() {
    char str[100] = "aassddffjkjfajiwhgaklfjoaoiiohakjdjknknvkjahhdf";

    char_frequency_in_string(str);

    return 0;
}
