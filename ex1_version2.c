#include <stdio.h>
#include <string.h>

void reverse_words(char* str);
void str_reverse(char* str);
void str_reverse_range(char* str, int start, int end);

int main() {
    char str[100];
    printf("Введите строку: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0'; 

    printf("Перевернутая строка: ");
    reverse_words(str);
    printf("%s\n", str);
    return 0;
}

void reverse_words(char* str) {    
    str_reverse(str);
    int start = 0;
    int end = 0;
    while (str[end] != '\0') {        
        while (str[start] == ' ') {
            start++;
        }
        end = start;       
        while (str[end] != ' ' && str[end] != '\0') {
            end++;
        }
        
        str_reverse_range(str, start, end - 1);
        start = end;
    }
}

void str_reverse(char* str) {
    int len = strlen(str);
    int i, j;
    char temp;
    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

void str_reverse_range(char* str, int start, int end) {
    int i, j;
    char temp;
    for (i = start, j = end; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
