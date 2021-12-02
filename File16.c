#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
	int fd=0;
	fd=open("LB17.txt",O_RDWR);
	if(fd==-1)
	{
		printf("unable to open file\n");
		return -1;
	}
///////////
//0 from starting position
//1 second Current position
//2 from end of the file
	lseek(fd,10,2);//lseek helps to shift the number/char further
	write(fd,"*",1);//single * thaty 1
	close(fd);
	return 0;
}
