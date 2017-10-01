#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int main(int argc, char const *argv[])
{
	ssize_t n;
	char buffer[100] = {"\0"};
	while((n=read(STDIN_FILENO,buffer,100))!=0){
		if(write(STDOUT_FILENO,buffer,n)!=n){
			fprintf(stderr, "output error :%s\n", strerror(errno));
		}
	}
	return 0;
}