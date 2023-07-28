#include <stdio.h>

void update(int *a,int *b) {
    int a_copy = *a;
    *a += *b;
    int b_copy = a_copy - *b;
    if (b_copy < 0) {
        b_copy = 0 - b_copy;
    }
    *b = b_copy;     
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}