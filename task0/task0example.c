#include <stdio.h>
int main( ) {
char *name[2];
name[0] = ââ/bin/shââ;
name[1] = NULL;
execve(name[0], name, NULL);
}
