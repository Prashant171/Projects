#include "home.c"
#include "laptop.c"
#include "hardware.c"
#include "software.c"
#include "customer.c"

int main()
{
    int v;

    COMPUTER* start=NULL;
    start=getcomp();

    SOFTWARE* soft=NULL;
    soft=getsoftware();

    ORDER* order=NULL;
    QUEUE* wake=NULL;

    v=verify_user();

    if(v==1)
      selec(start,order,soft,wake);

    return 0;

}
