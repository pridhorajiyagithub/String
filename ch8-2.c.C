#include<stdio.h>
/*convert given character into uppercase*/
main()
{
	
	char ch;

	printf("enter any character::");
	scanf("%c",&ch);
	
	
		if(ch>=97 &&ch<=122)
		{
			ch = ch - 32;
			printf("uppercase character is %c",ch);
		}
		else
		{
			printf("try again!!");
		}
	
}
