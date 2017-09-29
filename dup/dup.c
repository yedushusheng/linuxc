#include <stdio.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int fd  = open(argv[1],O_RDWR | O_CREAT,0644);
	if (dup2(fd,STDOUT_FILENO)<0)
	//将文件标准输出重定向到fd，而不是屏幕，这里的fd由传入的参数argv[1]决定
	//我们可以使用mdup test.txt指令这样最后print输出的hello world不再是在屏幕上而是在test.txt文件中
	{
		fprintf(stderr, "open file error:%s\n",strerror(errno));
	}
	printf("hello world");
	return 0;
}
/*
编译：gcc dup.c -o mdup
分析：该代码的作用是将输出print内容重定向到fd中
*/