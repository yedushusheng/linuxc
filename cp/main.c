#include "cp.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <stdlib.h>

int main(int argc,char *argv[]){
	if(argc<3){
		fprintf(stderr, "arcs number error:%s\n", strerror(errno));
		exit(1);
	}else{
		printf("input right");
	}
	int fd_in = open(argv[1],O_RDONLY);
	if (fd_in<0)
	{
		printf("open file error:%s\n", strerror(errno));
		exit(1);
	}else{
		printf("open file :%s\n", fd_in);
	}
	int fd_out = open(argv[2],O_WRONLY | O_CREAT | O_TRUNC,0644);
	/*不要忘记后面的0644*/
	if (fd_out<0)
	{
		fprintf(stderr, "open file error:%s\n", strerror(errno));
	}else{
		printf("open file :%s\n", fd_out);
	}
	copy(fd_in,fd_out);
	close(fd_in);
	close(fd_out);
	return 0;
}