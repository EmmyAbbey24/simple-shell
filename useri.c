#include "shell.h"

void rd_command(char * command, size_t size) {
if (fgets(command, size, stdin) == NULL) {
if (feof(stdin)) {
jet_print("\n");
exit(EXIT_SUCCESS); }
else {
jet_print("Error while reading input.\n");
exit(EXIT_FAILURE);
}
}
command[strcspn(command, "\n")] = '\0';
}
