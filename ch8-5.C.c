#include<stdio.h>
/*convert given string into lowercase*/
main()
{
	
	char ch[100];
	int i;

	printf("enter any text::");
	gets(ch);
	
	for(i=0;ch[i]!='\0';i++)
	{
	
		if(ch[i]>=65 &&ch[i]<=90)
		{
			ch[i] = ch[i] + 32;
			//printf("uppercase character is %c",ch);
		}
	}
	printf("lowercase string = %s",ch);
}
