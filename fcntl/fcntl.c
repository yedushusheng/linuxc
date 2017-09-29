#include "fcntl.h"
#include <stdio.h>
#include <fcntl.h>
#include <errno.h>

int setflag(int fd,int flag){
	int var = fcntl(fd,F_GETFL);
	var |= flag;
	if(fcntl(fd,F_SETFL,var)<0){
		return 1;
	}else{
		return 0;
	}
}