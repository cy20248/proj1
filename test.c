#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main() {
	char buff[10];
	int fd, val1, val2, val3, val4;

	fd = open("test.txt",O_RDONLY);
	val1 = fd;
	if(val1 < 0){
		perror("コメント1---");
		exit(1);
	}

	val2 = read(fd, buff, 10);
	if(val2 < 0){
		perror("コメント2");
		exit(1);
	}

	val3 = write(1, buff, 10);
	if(val3 < 0){
		perror("コメント3");
		exit(1);
	}
	
	printf("\n");

	val4 = close(fd);
	if(val1 < 0){
		perror("コメント4");
		exit(1);
	}
}
