#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
int fd=0;//file descriptor
char Fname[30];
printf("Enter file name\n");
scanf("%s",Fname);
fd=open(Fname,O_RDWR);//O_RDWR Open for reading and writing. The result is undefined if this flag is applied to a FIFO
if(fd==-1)
{
	printf("unable to open the file\n");
}else
{
	printf("file successfully opened with FD :%d\n",fd);
}
		return 0;
}
