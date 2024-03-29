#include <stdio.h>
#include <string.h>

int main() {
    char s[10];
    int k, c = 0;
    printf("Use Only a's or b's\nEnter a string: ");
    scanf("%s", s);
    k = strlen(s);
    for (int i = 0; i < k; i++) {
        if (s[i] != 'a' && s[i] != 'b') {
            printf("\nstring must be a's and b's");
            return 0;
        }
    }
    if (s[0] == 'a' && s[k - 1] == 'a')
        printf("\nString Accepted");
    else
        printf("\nNot Accepted");
    return 0;
}
