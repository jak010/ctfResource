#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char msg[] = "Hello\n";
    char buf[32];
    write(1, msg, strlen(msg));
    read(0, buf, 128);
    return 0;
}
