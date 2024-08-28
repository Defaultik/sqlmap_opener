#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
    char command[1024] = "python \"C:/Program Files/SQLMap/sqlmap.py\"";

    for (int i = 1; i < argc; i++) {
        strcat(command, " ");
        strcat(command, argv[i]);
    }

    system(command);

    return 0;
}