#include <stdio.h>
#include <string.h>

int main() {
    char some_words[100], reverse_some_words[100];
    int n;

    fgets(some_words, sizeof(some_words), stdin);
    n = strlen(some_words) - 1;

    for (int i = 0; i < strlen(some_words); i++) {
        reverse_some_words[i] = some_words[n - i];
    }
    reverse_some_words[strlen(some_words)] = '\0';

    printf("%s\n", reverse_some_words);

    return 0;
}
