#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd=0,icnt=0,iret=0,i=0;
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
		for(i=0;i<iret;i++)
		{
			if((buffer[i]=='a')||(buffer[i]=='e')||(buffer[i]=='i')||(buffer[i]=='o')||
				(buffer[i]=='u'));
			{
				icnt++;
			}
		}
	}
	printf("total number of vowels are:%d\n",icnt);
	close(fd);


	return 0;
}
