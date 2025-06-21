#include <err.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
        errx(EXIT_FAILURE, "Few arguments, missing string");
    else if (argc > 2)
        errx(EXIT_FAILURE, "Too many arguments");

    return EXIT_SUCCESS;
}
