#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <LineParser.h>

int main(int argc, char **argv){ 

	printf("Starting the program\n");
    char cwd[2048];
    char buff[1024];
    FILE* stdinput = fopen(STDIN_FILENO);
	while(1) {
	    printf("user@%s >> ", cwd);
        fgets(buff, 1024, stdinput);
        cmdLine * cmd =  parseCmdLines(buff);
        printf("%d\n", cmd->argCount);
	}

	return 0;
}