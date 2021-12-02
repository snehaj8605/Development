#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
int fd=0,iret=0;//file descriptor
char Fname[30];
char data[]="Marvellous Infosystems";//data is type of array
printf("Enter file name\n");
scanf("%s",Fname);
fd=open(Fname,O_RDWR);//O_RDWR open for reading and writing. The result is undefined if this flag is applied to a FIFO
if(fd==-1)
{
	printf("unable to open the file\n");
	return -1;//return to os
}else
{
	printf("file successfully opened with FD :%d\n",fd);
	
}
iret=write(fd,data,22);
printf("%d bytes get successfully written in the file\n",iret);

		return 0;
}
