/**
 *author: Mohamed Mahmoud
 *date: 13/4/2020
 */
#include <stdio.h>

void revSentence() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        revSentence();
        printf("%c", c);
    }
}

int main() {
    printf("Enter a sentence: ");
    revSentence();
    return 0;
}

