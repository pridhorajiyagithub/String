#include<stdio.h>
//create register and login system
main()
{

char email[100],password[100], c[100],d[100];
puts("----sign up----");
puts("enter emails::");
gets(email);

puts("enter password::");
gets(password);

puts("----login----");

puts("enter emails::");
gets(c);

puts("enter password::");
gets(d);

if( strcmp(email,c) == 0 && strcmp(password,d) == 0 )
{
	puts("login succesfull....");
}
else
{
	puts("login fail....");
}

}
