#include "io.h"
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>

void copy(int fd_in,int fd_out){
	char buf[1024] = {"\0"};
	ssize_t n;
	while(n=read(fd_in,buf,1024)!=0){
		if(n<0){
			fprintf(stderr, "read file failed %s\n", stderr(errno));
		}
		else if (n>0)
		{
			if (write(fd_out,buf,n)!=n)
			{
				fprintf(stderr, "write failed %s\n", stderr(errno));
			}
		}
	}
}