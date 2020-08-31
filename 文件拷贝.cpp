#include <stdio.h>
#include <stdlib.h>
int CopyFile(char* SrcFile,char* DesFile)
{
FILE* fp,*fw;
long length;
long n,cpyfinish;
char buf[1024];
if((fp=fopen(SrcFile,"rb"))==NULL)
{
return 1;
}
fw=fopen(DesFile,"wb");
fseek(fp,0L,SEEK_END);
length=ftell(fp);
rewind(fp);
while(length>0)
{
n=fread(buf,1,1024,fp);
fwrite(buf,1,n,fw);
length-=1024;
}
fclose(fw);
fclose(fp);
return 0;
}
int main()
{
CopyFile("c”Ô—‘± º«.docx","client99.docx");
return 0;
}
