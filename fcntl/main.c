#include "fcntl.h"
#include <stdio.h>
#include <fcntl.h>
#include <errno.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int fd = open(argv[1],O_RDWR | O_CREATE,0644);
	if(setflag(fd,O_APPEND) == 0){
		exit(1);
	}else{
		printf("%ssuccess \n", fd);
	}
	return 0;
}