#include "shell.h"

void jet_print(const char *my_format)
{
write(STDOUT_FILENO, my_format, strlen(my_format));
}
