#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b, choice;
   printf("enter two numbers:");
   scanf("%d %d",&a,&b);

   while (1)
   {
       printf("\n\n1.addition");
       printf("\n2.subtraction");
       printf("\n3.multipliction");
       printf("\n4.division");
       printf("\n5.reminder");
       printf("\n6.exit");

       printf("\nenter your choice:");
       scanf("%d",&choice);

       switch(choice)
       {
       case 1:
        printf("addition=%d",a+b);
        break;

       case 2:
        printf("subtraction=%d",a-b);
        break;

       case 3:
        printf("multipication=%d",a*b);
        break;

       case 4:
        if(b!=0)
            printf("division=%d",a/b);
        break;

       case 5:
        if (b!=0)
            printf("reminder=%d",a%b);
        break;

       case 6:
        printf("program ended.");
        return 0;

       default:
        printf("invalid choice.");
       }
   }
    return 0;
}
