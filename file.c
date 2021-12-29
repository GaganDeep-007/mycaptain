#include <stdio.h>
 
int main()
{
    FILE *fp; 
    int i=0,pos;
    char ch;
    fp = fopen("file.txt","r"); 
    fseek(fp,0,SEEK_END);
    pos = ftell(fp); 
    while(i<pos)
    {
    	i++;
    	fseek(fp,-i,SEEK_END); 
    	ch = getc(fp); 
		printf("%c", ch);
	}
    fclose(fp);
    return 0;
}