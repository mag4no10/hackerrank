#include <stdio.h>


void printEnglish(int num) {
    if (num > 9) {
        num % 2 == 0? printf("even\n") : printf("odd\n");
        return;  
    }
    switch(num) {
        case 1: printf("one");
                break;
        case 2: printf("two");
                break;
        case 3: printf("three");
                break;
        case 4: printf("four");
                break;
        case 5: printf("five");
                break;
        case 6: printf("six");
                break;
        case 7: printf("seven");
                break;
        case 8: printf("eight");
                break;
        case 9: printf("nine");
                break;
    }
    printf("\n");
}
int main() {
    int a, b;
    scanf("%d\n%d", &a, &b);
    for (int i = a; i <= b; i++) {
        printEnglish(i);      
    }
    return 0;
}
