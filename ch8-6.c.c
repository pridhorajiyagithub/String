#include<stdio.h>

main()
{



{
    int i = 0;
char string[50];
    for(i=0; i<=25; i++)
    {
        string[i] = tolower(string[i]);  // Converts all characters to lower case
        if(string[i-1] == ' ') // If the character before is a space
        {
            string[i] = toupper(string[i]); // Converts characters after spaces to upper case
        }
    }

    string[0] = toupper(string[0]); // Converts the first character to upper case
    return 0;
}
}
