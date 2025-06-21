#include <err.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
        errx(EXIT_FAILURE, "Few arguments, missing string");
    else if (argc > 2)
        errx(EXIT_FAILURE, "Too many arguments");

    char c;
    size_t ind;
    size_t length;

    length = strlen(argv[1]);

    for (ind = 0; ind != length; ind++) {
        c = argv[1][ind];    
    }

    return EXIT_SUCCESS;
}
