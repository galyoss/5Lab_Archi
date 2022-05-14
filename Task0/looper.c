#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include "LineParser.h"

int execute(cmdLine *pCmdLine){
    return 0;
}

int main(int argc, char **argv){ 

	printf("Starting the program\n");
    char cwd[2048];
    char buff[1024];
    int exit;
	while(1) {
        getcwd(cwd, 2048);
        if (exit==1)
            break;
	    printf("user@%s >> ", cwd);
        fgets(buff, 1024, stdin);
        cmdLine * cmd =  parseCmdLines(buff);
        printf("%d\n", cmd->argCount);
	}

	return 0;
}