#include "computer.h"

///Function Name : getsoftware
///Description   : Dynamic Intialization of software products
///Input Params  : nill
///Return        : Starting address of List


SOFTWARE* getsoftware()
{
   SOFTWARE *sf1;
   sf1=(SOFTWARE *)malloc(sizeof(SOFTWARE));
   sf1->next=NULL;

    strcpy(sf1->name,"KASPERSKY ANTIVIRUS SOFTWARE 2016 NEW SLIM PACK");
    sf1->no_of_pcs=1;
    sf1->version=2016;
    sf1->subscription_validity=1;
    strcpy(sf1->software,"Anti-virus software");
    sf1->price=360;
    sf1->item=10;

    SOFTWARE *sf2;
    sf2=(SOFTWARE *)malloc(sizeof(SOFTWARE));
    sf2->next=NULL;
    sf1->next=sf2;

    strcpy(sf2->name,"2016-2017 QUICK HEAL TOTAL SECURITY 2 PC 3 YEAR ");
    sf2->no_of_pcs=2;
    sf2->version=2017;
    sf2->subscription_validity=3;
    strcpy(sf2->software,"Total security software");
    sf2->price=2795;
    sf2->item=10;


    SOFTWARE *sf3;
    sf3=(SOFTWARE *)malloc(sizeof(SOFTWARE));
    sf3->next=NULL;
    sf2->next=sf3;

    strcpy(sf3->name,"KASPERSKY ANTIVIRUS SOFTWARE 2017(1cd,1095 Days Valid Serial key");
    sf3->no_of_pcs=1;
    sf3->version=2017;
    sf3->subscription_validity=3;
    strcpy(sf3->software,"Anti-virus software");
    sf3->price=780;
    sf3->item=10;


    SOFTWARE *sf4;
    sf4=(SOFTWARE *)malloc(sizeof(SOFTWARE));
    sf4->next=NULL;
    sf3->next=sf4;

    strcpy(sf4->name,"E-SCAN ANTIVIRUS 1PC 3YR");
    sf4->no_of_pcs=1;
    sf4->version=2011;
    sf4->subscription_validity=3;
    strcpy(sf4->software,"Anti-virus software");
    sf4->price=548;
    sf4->item=10;


    SOFTWARE *sf5;
    sf5=(SOFTWARE *)malloc(sizeof(SOFTWARE));
    sf5->next=NULL;
    sf4->next=sf5;

    strcpy(sf5->name,"K7 TOTAL SECURITY 11 pc 1year New pack 2017 version");
    sf5->no_of_pcs=1;
    sf5->version=2017;
    sf5->subscription_validity=1;
    strcpy(sf5->software,"Total Security Software");
    sf5->price=5949;
    sf5->item=10;

    return sf1;
}
