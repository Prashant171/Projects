#include "computer.h"


///Function Name : timendate
///Description   : finds the month
///Input Params  : string m
///Return        : void


void timendate(char* m)
{
    char month[30];
    int i=0,j=0;
    time_t result;
    result = time(NULL);

    strcpy(month,asctime(localtime(&result)));
    i=4;
    while(i<7)
    {
        m[j]=month[i];
        i++;
        j++;
    }
    m[j]='\0';


}


///function name : find_m
///description   : finds which month the order has booked/vacated the room
///Input Params  : string m
///Return        : month number


int find_m(char m[4])
{
    int r;

    if(strcmp(m,"Jan")==0)
        r=1;
    else if(strcmp(m,"Feb")==0)
        r=2;
    else if(strcmp(m,"Mar")==0)
        r=3;
    else if(strcmp(m,"Apr")==0)
        r=4;
    else if(strcmp(m,"May")==0)
        r=5;
    else if(strcmp(m,"Jun")==0)
        r=6;
    else if(strcmp(m,"Jul")==0)
        r=7;
    else if(strcmp(m,"Aug")==0)
        r=8;
    else if(strcmp(m,"Sep")==0)
        r=9;
    else if(strcmp(m,"Oct")==0)
        r=10;
    else if(strcmp(m,"Nov")==0)
        r=11;
    else if(strcmp(m,"Dec")==0)
        r=12;

    return r;
}


///Function Name : dis
///Description   : returns the disscount amount which is already defined as per the month of booking.
///Input Params  : month number
///Return        : Percentage of discount

int dis(int m)
{
    switch(m)
    {
    case 1:
        return 9;

    case 2:
        return 4;

    case 3:
        return 8;

    case 4:
        return 5;

    case 5:
        return 6;

    case 6:
        return 6;

    case 7:
        return 5;

    case 8:
        return 3;

    case 9:
        return 7;

    case 10:
        return 10;

    case 11:
        return 12;

    case 12:
        return 8;
    }
    return 0;
}


///Function Name : prnt
///Description   : prints the offer based on month
///Input Params  : month number
///Return        : void


void prnt(int m)
{
    switch(m)
    {
    case 1:
        printf(" IT'S NEW YEAR! BUY ANYTHING AND GET 9%% DISCOUNT!\n");
        break;

    case 2:
        printf(" GET 4%% OF DISCOUNT ON THIS EID-MILAD\n");
        break;

    case 3:
        printf(" THIS UGADI....!! GET 8%% OF DISCOUNT ON ANY PRODUCT...\n");
        break;

    case 4:
        printf(" LET THE MONTH WITH GOOD FRIDAY BE REALLY GOOD!\n");
        printf(" SHOP ANYTHING FROM ALL COMPUTERS AND GET 5%% OF DISCOUNT\N");
        break;

    case 5:
        printf(" DON'T MISS THE OFFERS THIS SUMMER!\n");
        printf(" BUY ANYTHING FROM ALL COMPUTERS AND GET UPTO 6%% OF DISCOUNT\n");
        break;

    case 6:
        printf(" GET A DISCOUNT OF 6%% THIS SUMMER!\n");
        break;

    case 7:
        printf(" GET A DISCOUNT OF 5%% THIS RAINY SEASON!\n");
        break;

    case 8:
        printf(" LIMITED OFFER ON INDEPENDENCE DAY!\N");
        printf(" GET A DISCOUNT OF 3%%\n");
        break;

    case 9:
        printf(" GET A DISCOUNT OF 7%% THIS GANESH CHATHURTHI!\n");
        break;

    case 10:
        printf(" FOR THIS DASARA, GET A DISCOUNT OF 10%%\n");
        break;

    case 11:
        printf(" THIS DIWALI, BUY ANYTHING AND GET 12%% DISCOUNT!\n");
        break;

    case 12:
        printf(" LET US MAKE THIS CHRISTMAS SPECIAL FOR YOU!");
        printf(" BUY FROM ALL COMPUTERS AND GET A DISCOUNT OF 8%%\n");
        break;
    }
}
