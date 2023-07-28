#include <stdio.h>

int main() {
    char ch, s[100], sentence[100];
    scanf("%c\n%s\n%[^\n]%*c", &ch, s, sentence);
    printf("%c\n%s\n%s", ch, s, sentence);
    return 0;
}