#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>

int main(int argc,char *argv[]){
	int fd = open("G:/test.txt",O_RDONLY);
	off_t n;
	if((n = lseek(fd,0,SEEK_END))<0){
		fprintf(stderr, "lseek error:%s\n", strerror(errno));
	}else{
		printf("file size :%ld\n", n);
	}
	return 0;
}