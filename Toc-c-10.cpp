#include <stdio.h>
#include <stdbool.h>

#define M 100

typedef struct { int t[M],n; } S;

void e(S n[], int s, bool v[]) {
    if (v[s]) return;
    v[s] = true;
    for (int i = 0; i < n[s].n; i++) e(n, n[s].t[i], v);
}

int main() {
    int m, s;
    scanf("%d", &m);
    S n[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &n[i].n);
        for (int j = 0; j < n[i].n; j++) scanf("%d", &n[i].t[j]);
    }
    printf("\ne-closures:\n");
    for (int i = 0; i < m; i++) {
        bool v[m] = {false};
        e(n, i, v);
        printf("e-closure(%d): ", i);
        for (int j = 0; j < m; j++) if (v[j]) printf("%d ", j);
        printf("\n");
    }
    return 0;
}

