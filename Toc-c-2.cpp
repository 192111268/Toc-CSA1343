#include <stdio.h>
#include <string.h>

int main() {
    char s[10];
    int k, c = 0;
    printf("Use Only 0's or 1's\nEnter a string: ");
    scanf("%s", s);
    k = strlen(s);
    for (int i = 0; i < k; i++) {
        if (s[i] != '0' && s[i] != '1') {
            printf("\nstring must be 0's and 1's");
            return 0;
        }
    }
    if (s[0] == '0' && s[k - 1] == '1')
        printf("\nString Accepted");
    else
        printf("\nNot Accepted");
    return 0;
}
