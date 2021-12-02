#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd=0;
	char Arr[10];

	fd=open("LB17.txt",O_RDWR);
	if(fd==-1)
	{
		printf("unable to open file\n");
	}
///////////
//0 from starting position
//1 second Current position
//2 from end of the file
	lseek(fd,5,0);//lseek helps to shift the number/char further
	read(fd,Arr,5);
	printf("Data from file is:");
	write(1,Arr,5);
	printf("\n");
	close(fd);
	return 0;
}
