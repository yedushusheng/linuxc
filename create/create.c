#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>

int main(int argc,char *argv[]){
	int fd = open(argv[1],O_CREAT | O_EXCL,0644);
	if (fd<0)
	{
		fprintf(stderr, "open file error:%s\n", strerror(errno));
	}else{
		printf("fd is :%s\n", fd);
	}
	return 0;
}
/*编译：
gcc create.c -0 mcreate
*/