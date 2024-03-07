#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name;
    int number,price,shipping_price,item_price,total_price=0,discount,overnight_price,answer,i,total_order_price,shopping;


    continue_shopping:


    printf("enter the number of items\n");
    scanf("%d",&number);
    if (number<2)
    {
        printf("a minimum of 2 items is required\n");
    }
    else
    {

    for (i;i<number;i++)
    {
        printf("enter item name\n");
        scanf("%s",&name);
        printf ("enter item price\n");
        scanf("%d",&price);
        if (price<10)
        {
            item_price=price+2;
        }
        else if (price>=10)
        {
              item_price=price+3;
        }

        total_price= total_price+item_price;


    }


    if (number>5)
    {
        discount=total_price*0.2;
    }
    else
    {
        discount=0;
    }
    printf("do you want an overnight shipping ?\n 1- Yes\n 2- No\n please enter your choice number\n");
    scanf("%d",&answer);

    if (answer==1)
    {
       overnight_price=5;
    }
    else if (answer==2)
    {
         overnight_price=0;

    }

    total_order_price= total_price+overnight_price-discount;
    printf("total price is = %d\n",total_order_price);
    printf(" %d pounds for item price with 2 or 3 pounds extra for shipping \n %d pounds for overnight shipping\n %d pounds discount 'applied only if you order more than 5 items'\n",item_price,overnight_price,discount);

    printf("do you want to continue shopping\n 1- Yes\n 2- NO\n");
    scanf("%d",shopping);
    if(shopping=1)
    {
        goto continue_shopping;
    }
    else if (shopping=2)
    {

    return 0;
    }
    }

    return 0;
}
