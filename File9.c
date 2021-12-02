#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
int fdsrc=0,fddest=0,iret=0;//file descriptor
char Fname1[30];
char Fname2[30];
char Buffer[1024];//Mug 1KB(1024)

printf("Enter source file name\n");
scanf("%s",Fname1);

fdsrc=open(Fname1,O_RDONLY);
//O_RDWR open for reading and writing.
//The result is undefined if this flag is applied to a FIFO

if(fdsrc==-1)
{
	printf("unable to open the file\n");
	return -1;//return to os
}else
{
	printf("file successfully read with FD :%d\n",fdsrc);
	
}
printf("enter destination file name:\n ");
scanf("%s",Fname2);
fddest=creat(Fname2,0777);

while((iret=read(fdsrc,Buffer,sizeof(Buffer)))!=0)//read call
{
	write(fddest,Buffer,iret);
}

close(fdsrc);
close(fddest);
		return 0;
}
