//
// Created by louis on 04/04/2025.
//

#include "quotes.h"
// quotes.c
#include "quotes.h"

void print_quote(char ** quotes, int index) {
    printf("%s\n", quotes[index]);
}

void print_random_quote(char ** quotes) {
    int index = rand() % MAX_QUOTES;
    print_quote(quotes, index);
}