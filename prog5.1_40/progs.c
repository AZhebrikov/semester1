#include<stdio.h>
main(void)
{
 int a,b,c,d;FILE *f;
 d=0;
 f=fopen("KEK.txt","r");
 if(f!=NULL)
 {
  if(fscanf(f,"%d",&a)!=1)
  {
   printf("File is empty");
  }
  else
  {
   if(fscanf(f,"%d",&b)!=1)
   {
    printf("File is empty");
   }
   else
   {
    while(fscanf(f,"%d",&c)==1)
    {
     if(a<b)
     {
      if(c<=b)
      {
       d++;
       a=b;
       b=c;
      }
      else
      {
       a=b;
       b=c;
      }
     }
     else
     {
      a=b;
      b=c;
     }
    }
    if(a<b)
    {
     d++;
    }
    printf("%d",d);
   }
  }
 }
 else
 printf("Can't open file");
}
