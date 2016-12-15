	#include <stdlib.h>
	#include <stdio.h>
	#include <unistd.h>
	#include <sys/wait.h>

int main(int argv, char *argc){
	int pid;
	
	pid=fork();
	switch(pid)
	{case -1:
	printf("error");
	break;
	case 0:
	execl("/home/pierre/Documents/doc/statique/lecture2", "lecture2", NULL);
	break;
	default:
	wait(NULL);
	break;
	}
return 0;
}

