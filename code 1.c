#include<stdio.h>
int main()
{
    int n;
   printf("Press 1 to turn on thw tap or 0 to turn OFF the tap: ");
   scanf("%d",&n);
   if(n>2)
   {
       printf("Invalid");
       
   }
   else if(n>0)
   {
       printf("Tap is ON ");
       
   }
   else
   { printf("Tap is now closed");
   }
    return 0;
}
