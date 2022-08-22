#include<stdio.h>
#include<string.h>


int main()
{
  char y[25];
  int i, x=0, p;
  int l=0,u=0,d=0,e=0;
  printf("Enter a password: ");
  scanf("%s", &y);
  p = strlen(y);
  if(p>=6)
  {
     
     for (i = 0; i < p; i++)
     {
       if(y[i]>='A' && y[i]<='Z') u++;
       if(y[i]>='a' && y[i]<='z') l++;
       if(y[i]>='0' && y[i]<='9') d++;
       if(y[i]>=33 && y[i]<=47 || y[i]>=58 && y[i]<=64 || y[i]>=91 && y[i]<=96 || y[i]>=123 && y[i]<=255) e++;
     }
 }  
  if (l > 0 && u > 0 && d > 0 && e>0)
   {
          printf("Strong\n");
}
}
