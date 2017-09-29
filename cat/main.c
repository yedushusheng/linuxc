#include "cat.h"
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	if(argc<2){
		fprintf(stderr, "argc error:%s\n", strerror(errno));
		exit(1);
	}else{
		printf("input correct");
	}
	int fd_in = open(argv[1],O_RDONLY);
	if(fd_in<0){
		fprintf(stderr, "open file error:%s\n", fd_in);
		exit(1);
	}else{
		printf("open file :%s\n", fd_in);
	}
	cat(fd_in,STDOUT_FILENO);
	close(fd_in);
	return 0;
}