#include "cat.h"
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <stdlib.h>
#include <errno.h>
#define BUFFER_LEN 1024

void cat(int fd_in,int fd_out){
	char buffer[BUFFER_LEN] = {"\0"};
	ssize_t n;
	while((n = read(fd_in,buffer,BUFFER_LEN)) != 0){
		if(n<0){
			fprintf(stderr, "read file error:%s\n", strerror(errno));
		}else if(n>0){
			if(write(fd_out,buffer,n) !=n){
				fprintf(stderr, "write file error:%s\n", strerror(errno));
			}
		}
	}
}