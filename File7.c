#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
int fd=0,iret=0;//file descriptor
char Fname[30];
char data[7];//data is type of array
printf("Enter file name\n");
scanf("%s",Fname);
fd=open(Fname,O_RDWR);//O_RDWR open for reading and writing.
//The result is undefined if this flag is applied to a FIFO
if(fd==-1)
{
	printf("unable to open the file\n");
	return -1;//return to os
}else
{
	printf("file successfully read with FD :%d\n",fd);
	
}
iret=read(fd,data,7);

write(1,data,iret);
close(fd);
		return 0;
}
