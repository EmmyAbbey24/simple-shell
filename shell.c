#include "shell.h"

int main(void) {
	char command[128];

	while (1) {
	display_prompt();
	rd_command(command, sizeof(command));
	execute_command(command);
	}
	return (0);
}`	
