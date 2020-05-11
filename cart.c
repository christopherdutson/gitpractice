#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
    char input[128];
    char* items[128];
    int i = 0;
    printf("Welcome to Shopping Cart!\n\n");

    do {
        printf("Enter an item to add to your list: (or 'q' to quit)\n");
        fgets(input, 127, stdin);
        puts(input);
        items[i] = strndup(input, 127);
        ++i;
    } while(strcmp(input, "q") != 10); // what?

    for(int j = 0; j < i; ++j) {
        printf("%s\n", items[j]);
    }
    printf("Have a nice day!\n");

    return 0;
}