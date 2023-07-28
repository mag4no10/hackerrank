#include <stdio.h>


int max_of_four(int a, int b, int c, int d) {
    int max = a;
    if (a < b) {
        max = b;
        if (b < c) {
            max = c;
            if (c < d) {
                max = d;
            }
        }
    }
    else if (a < c) {
        max = c;
        if (c < d) {
            max = d;
        }
    }
    else if (a < d) {
        max = d;
    }
    return max;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}