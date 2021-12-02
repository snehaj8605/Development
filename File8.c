#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
int fd=0,iret=0;//file descriptor
char Fname[30];
char Buffer[1024];
printf("Enter file name\n");
scanf("%s",Fname);
fd=open(Fname,O_RDONLY);//O_RDWR open for reading and writing.The result is undefined if this flag is applied to a FIFO
if(fd==-1)
{
	printf("unable to open the file\n");
	return -1;//return to os
}else
{
	printf("file successfully open with FD :%d\n",fd);
	
}
printf("data from file is:\n");//54bytes
while((iret=read(fd,Buffer,sizeof(Buffer)) )!=0)//read call
{
	write(1,Buffer,iret);
}

close(fd);
		return 0;
}
