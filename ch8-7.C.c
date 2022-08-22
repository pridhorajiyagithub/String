#include<stdio.h>
/*convert given string into toggeale*/
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
		else if(ch[i]>=65 && ch[i]<=90)
		{
			ch[i] = ch[i] + 32;
		}
	}
	printf("toggle string = %s",ch);
}
