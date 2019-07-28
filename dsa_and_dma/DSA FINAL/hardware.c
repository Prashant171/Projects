#include "computer.h"


///Function Name : get_pend()
///Description   : Dynamic Initialization of pendrives
///Input Params  : nill
///Return        : Starting Address of list

STORAGE* get_pend()
{
    STORAGE* new1;
    new1=(STORAGE*)malloc(sizeof(STORAGE));
    new1->next=NULL;


    strcpy(new1->name,"SANDISK CRUZER BLADE");
    new1->capacity=32;
    new1->price=729;
    new1->item=10;


    STORAGE* new2;
    new2=(STORAGE*)malloc(sizeof(STORAGE));
    new2->next=NULL;
    new1->next=new2;

    strcpy(new2->name,"SANDISK CRUZER BLADE");
    new2->capacity=16;
    new2->price=449;
    new2->item=10;


    STORAGE* new3;
    new3=(STORAGE*)malloc(sizeof(STORAGE));
    new3->next=NULL;
    new2->next=new3;

    strcpy(new3->name,"SONY USM32GR/B");
    new2->capacity=32;
    new3->price=949;
    new3->item=10;


    STORAGE* new4;
    new4=(STORAGE*)malloc(sizeof(STORAGE));
    new4->next=NULL;
    new3->next=new4;

    strcpy(new4->name,"TOSHIBA U301");
    new2->capacity=32;
    new4->price=789;
    new4->item=10;


    STORAGE* new5;
    new5=(STORAGE*)malloc(sizeof(STORAGE));
    new5->next=NULL;
    new4->next=new5;

    strcpy(new5->name,"HP V237W");
    new2->capacity=16;
    new5->price=599;
    new5->item=10;

    return new1;
}


///Function Name : get_hd()
///Description   : Dynamic Initialization of harddisks
///Input Params  : nill
///Return        : Starting Address of list

STORAGE* get_hd()
{
     STORAGE* new1;
    new1=(STORAGE*)malloc(sizeof(STORAGE));
    new1->next=NULL;


    strcpy(new1->name,"SONY WIRED EXTERNAL HD");
    new1->capacity=1;
    new1->price=3999;
    new1->item=10;


    STORAGE* new2;
    new2=(STORAGE*)malloc(sizeof(STORAGE));
    new2->next=NULL;
    new1->next=new2;

    strcpy(new2->name,"ADATA HV620 2.5 INCH HD");
    new2->capacity=1;
    new2->price=3399;
    new2->item=10;


    STORAGE* new3;
    new3=(STORAGE*)malloc(sizeof(STORAGE));
    new3->next=NULL;
    new2->next=new3;

    strcpy(new3->name,"SEAGATE WIRED EXTERNAL HD");
    new2->capacity=2;
    new3->price=6099;
    new3->item=10;


    STORAGE* new4;
    new4=(STORAGE*)malloc(sizeof(STORAGE));
    new4->next=NULL;
    new3->next=new4;

    strcpy(new4->name,"WD ELEMENTS 2.5 INCH EXTERNAL HD");
    new2->capacity=2;
    new4->price=5399;
    new4->item=10;


    STORAGE* new5;
    new5=(STORAGE*)malloc(sizeof(STORAGE));
    new5->next=NULL;
    new4->next=new5;

    strcpy(new5->name,"HP EXTERNAL HD");
    new2->capacity=1;
    new5->price=4199;
    new5->item=10;

    return new1;
}





