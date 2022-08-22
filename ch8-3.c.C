#include<stdio.h>
/*convert given character into lowercase*/
main()
{
	
	char ch;

	printf("enter any character::");
	scanf("%c",&ch);
	
	
		if(ch>=65 &&ch<=90)
		{
			ch = ch + 32;
			printf("lowercase character is %c",ch);
		}
		else
		{
			printf("try again!!");
		}
	
}
