#include <stdio.h>
#include <stdlib.h>

int main()
{
    int amt;float dis,am;
printf("\n\t\tWelcome to the Vishal Mega Mart....\n\tPlease Enter the total billed amount\n");
scanf("%d",&amt);
if (amt>=1000)
{
 dis = 0.2*amt;
am = amt-dis;
printf("\t\tCongrats you got 20 percent discount on your purchase. Now you will have to pay Rs %5.2f only.\n\t\tHave a nice day......",am);
}
else
{printf("\t\tYou have to purchase items of above Rs 1000 to get a discount of 20 percent. Now you have to pay Rs %d",amt);}
    return 0;
}
