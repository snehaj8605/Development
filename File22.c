#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd=0,isum=0,iret=0,i=0;
	char fname[20];
	char buffer[10];
	printf("enter file name");
	scanf("%s",fname);
	fd=open(fname,O_RDWR);
	if(fd==-1)
	{
		printf("Unable to open file\n");
		return -1;
	}

	while((iret=read(fd,buffer,10))!=0)//read 10 bytes
	{
		isum=isum+iret;
	}
	printf("file size is:%d\n",isum);
	close(fd);


	return 0;
}
