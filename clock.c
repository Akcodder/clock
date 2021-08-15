#include<stdio.h>

int main()
{
   int a;
   printf("Enter a Number which is Even if it is not even so cannot able to  see Time and Date\n ");
   scanf("%d",&a);
   if(a%2==0){
    printf("Current Date :%s\n", __DATE__ );
    printf("Current Time :%s\n", __TIME__ );
   }
   else{
   	printf("Your input is odd");
   }
}
