#include<stdio.h>
/*convert given string into uppercase*/
main()
{
	
	char ch[100];
	int i;

	printf("enter any text::");
	gets(ch);
	
	for(i=0;ch[i]!='\0';i++)
	{
	
		if(ch[i]>=97 &&ch[i]<=122)
		{
			ch[i] = ch[i] - 32;
			//printf("uppercase character is %c",ch);
		}
	}
	printf("upper string = %s",ch);
}
