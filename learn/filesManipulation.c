#include <stdio.h>

int main() {

    int fd = fileno(stdin);
    printf("fd=%d\n", fd);

    char buffer[128];

    fgets(buffer, sizeof(buffer), stdin);

    printf("%s", buffer);
    return 0;
}
