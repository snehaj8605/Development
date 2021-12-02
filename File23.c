#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd=0,iret=0;
	char fname[20];
	
	printf("enter file name");
	scanf("%s",fname);

	fd=open(fname,O_RDWR);
	if(fd==-1)
	{
		printf("Unable to open file\n");
		return -1;
	}
iret=lseek(fd,0,2);
	
	printf("file size is:%d\n",iret);
	close(fd);


	return 0;
}
