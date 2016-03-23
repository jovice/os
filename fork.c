#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
	pid_t id = fork();

	if (id < 0) { /* error occurred */
		fprintf(stderr, "Fork Failed\n");
		exit(-1);
	}	
	sleep(10);
	
	if (id == 0) { /* child process */
		printf("I am the child %d\n", getpid());
	}	else { /* parent process */
		printf("I am the parent %d\n", getpid());
	}
	
	return 0;
}
