
#include "computer.h"
#include "discount.c"


///Function Name : getcomp
///Description   : Dynamic Intialization of Computer
///Input Params  : nill
///Return        : Starting address of List


COMPUTER* getcomp()
{
    COMPUTER* new1;
    new1=(COMPUTER*)malloc(sizeof(COMPUTER));
    new1->next=NULL;

    strcpy(new1->name,"HP NOTEBOOK");
    strcpy(new1->model,"15q-BU010TU 2017 15.6-inch Laptop");
    strcpy(new1->brand,"Intel");
    strcpy(new1->processor_name,"i3-6006 2GHz");
    strcpy(new1->processor_generation,"6th Generation");
    strcpy(new1->ram,"4GB DDR4");
    strcpy(new1->HDD_capacity,"1TB 5400rpm Serial ATA Hard Drive");
    strcpy(new1->Graphics,"Integrated");
    strcpy(new1->Operating_System,"Windows 10");
    new1->price=28810;
    new1->item=10;

    COMPUTER* new2;
    new2=(COMPUTER*)malloc(sizeof(COMPUTER));
    new2->next=NULL;
    new1->next=new2;

    strcpy(new2->name,"HP");
     strcpy(new2->model,"15q-BU008TU 2017 15.6-inch Laptop");
    strcpy(new2->brand,"Intel");
    strcpy(new2->processor_name,"1.6GHz Intel Pentium N3710 processor");
    strcpy(new2->ram,"4GB DDR3");
    strcpy(new2->HDD_capacity,"500GB 5400rpm Serial ATA Hard Drive");
    strcpy(new2->Graphics,"Integrated");
    strcpy(new2->Operating_System,"Windows 10");
    new2->price=22990;
    new2->item=10;

    COMPUTER* new3;
    new3=(COMPUTER*)malloc(sizeof(COMPUTER));
    new3->next=NULL;
    new2->next=new3;

    strcpy(new3->name,"HP");
    strcpy(new3->model,"15-BW098AU 15.6-inch HD Laptop");
    strcpy(new3->brand,"AMD");
    strcpy(new3->processor_name,"1.8GHz AMD E2-9000e processor");
    strcpy(new3->ram,"4GB DDR4 RAM");
    strcpy(new3->HDD_capacity,"1TB 5400rpm Serial ATA Hard Drive");
    strcpy(new3->Graphics,"AMD Radeon R2 Graphics");
    strcpy(new3->Operating_System,"Windows 10");
    new3->price=21777;
    new3->item=10;


    COMPUTER* new4;
    new4=(COMPUTER*)malloc(sizeof(COMPUTER));
    new4->next=NULL;
    new3->next=new4;

    strcpy(new4->name,"HP");
    strcpy(new4->model,"15-bs579tx 2017 15.6-inch Laptop");
    strcpy(new4->brand,"Intel");
    strcpy(new4->processor_name,"i3-6006U  2GHz");
    strcpy(new4->processor_generation,"6th Gen");
    strcpy(new4->ram,"8GB DDR4 Ram");
    strcpy(new4->HDD_capacity,"1TB 5400rpm Serial ATA Hard Drive");
    strcpy(new4->Graphics,"AMD Radeon 520 2GB Graphics");
    strcpy(new4->Operating_System,"Windows 10");
    new4->price=36190;
    new4->item=10;


    COMPUTER* new5;
    new5=(COMPUTER*)malloc(sizeof(COMPUTER));
    new5->next=NULL;
    new4->next=new5;

    strcpy(new5->name,"HP PAVILION");
    strcpy(new5->model,"14-bf013tu 2017 15.6-inch Laptop");
    strcpy(new5->brand,"Intel");
    strcpy(new5->processor_name,"i3-7100U 2.4GHz");
    strcpy(new5->processor_generation,"6");
    strcpy(new5->ram,"4GB DDR4-2133 SDRAM(1*4GB)");
    strcpy(new5->HDD_capacity,"1TB HDD_capacity 5400rpm SATA");
    strcpy(new5->Graphics,"Intel HD Graphics 620");
    strcpy(new5->Operating_System,"Windows 10");
    new5->price=48990;
    new5->item=10;


    COMPUTER* new6;
    new6=(COMPUTER*)malloc(sizeof(COMPUTER));
    new6->next=NULL;
    new5->next=new6;

    strcpy(new6->name,"HP PAVILION");
    strcpy(new6->model,"14-AL176TX 2017 14-inch Laptop");
    strcpy(new6->brand,"Intel");
    strcpy(new6->processor_name,"i5");
    strcpy(new6->processor_generation,"7th Gen");
    strcpy(new6->ram,"8GB DDR4");
    strcpy(new6->HDD_capacity,"1TB 5400rpm Serial ATA Hard Drive");
    strcpy(new6->Graphics,"NVIDIA Geforce 940Mx");
    strcpy(new6->Operating_System,"Windows 10");
    new6->price=57990;
    new6->item=10;


    COMPUTER* new7;
    new7=(COMPUTER*)malloc(sizeof(COMPUTER));
    new7->next=NULL;
    new6->next=new7;

    strcpy(new7->name,"HP");
    strcpy(new7->model,"Envy 13-AB069TU Notebook 13.3-inch Laptop");
    strcpy(new7->brand,"Intel");
    strcpy(new7->processor_name,"i5");
    strcpy(new7->processor_generation,"7th Gen");
    strcpy(new7->ram,"8GB DDR4");
    strcpy(new7->HDD_capacity,"256 GB SSD");
    strcpy(new7->Graphics,"Intel HD Graphics 520");
    strcpy(new7->Operating_System,"Windows 10");
    new7->price=73990;
    new7->item=10;


    COMPUTER* new8;
    new8=(COMPUTER*)malloc(sizeof(COMPUTER));
    new8->next=NULL;
    new7->next=new8;

    strcpy(new8->name,"HP");
    strcpy(new8->model,"Envy 13-ab070TU Notebook 13.3-inch Laptop");
    strcpy(new8->brand,"Intel");
    strcpy(new8->processor_name,"i7");
    strcpy(new8->processor_generation,"7th Gen");
    strcpy(new8->ram,"8GB DDR4");
    strcpy(new8->HDD_capacity,"512 GB SSD");
    strcpy(new8->Graphics,"Intel HD Graphics 520");
    strcpy(new8->Operating_System,"Windows 10");
    new8->price=85990;
    new8->item=10;


    COMPUTER* new9;
    new9=(COMPUTER*)malloc(sizeof(COMPUTER));
    new9->next=NULL;
    new8->next=new9;

    strcpy(new9->name,"HP");
    strcpy(new9->model,"15-AU639TX 15.6-inch Laptop");
    strcpy(new9->brand,"Intel");
    strcpy(new9->processor_name,"i7-7500U 2.70 GHz");
    strcpy(new9->ram,"4GB DDR3");
    strcpy(new9->HDD_capacity,"1TB 5400rpm Serial ATA Hard Drive");
    strcpy(new9->Graphics,"NVIDIA GeForce GT 940MX(4GB DDR3)");
    strcpy(new9->Operating_System,"Windows 10");
    new9->price=49500;
    new9->item=10;


    COMPUTER* new10;
    new10=(COMPUTER*)malloc(sizeof(COMPUTER));
    new10->next=NULL;
    new9->next=new10;

    strcpy(new10->name,"HP");
    strcpy(new10->model,"15-BA044AU 15.6-inch Laptop");
    strcpy(new10->brand,"AMD");
    strcpy(new10->processor_name,"AMD Quad Core A6-7310 APU");
    strcpy(new10->ram,"4GB DDR3");
    strcpy(new10->HDD_capacity,"1TB 5400rpm Serial ATA Hard Drive");
    strcpy(new10->Graphics,"AMD RadeonTM R4 Graphics");
    strcpy(new10->Operating_System,"Windows 10");
    new10->price=27950;
    new10->item=10;


    COMPUTER* new11;
    new11=(COMPUTER*)malloc(sizeof(COMPUTER));
    new11->next=NULL;
    new10->next=new11;

    strcpy(new11->name,"LENOVO");
    strcpy(new11->model,"Ideapad 110 80T700151H 15.6-inch Laptop");
    strcpy(new11->brand,"INTEL");
    strcpy(new11->processor_name,"Pentium N3710");
    strcpy(new11->ram,"4GB DDR3");
    strcpy(new10->HDD_capacity,"1TB ");
    strcpy(new11->Graphics,"Integrated");
    strcpy(new11->Operating_System,"Windows 10");
    new11->price=23352;
    new11->item=10;


    COMPUTER* new12;
    new12=(COMPUTER*)malloc(sizeof(COMPUTER));
    new12->next=NULL;
    new11->next=new12;

    strcpy(new12->name,"LENOVO");
    strcpy(new12->model,"IDEAPAD 320E 80XH01GKIN 15.6-inch Laptop");
    strcpy(new12->brand,"Intel");
    strcpy(new12->processor_name,"i3-6006U");
    strcpy(new12->processor_generation,"6th Gen");
    strcpy(new12->ram,"4GB DDR3");
    strcpy(new12->HDD_capacity,"1TB 5400rpm Serial ATA Hard Drive");
    strcpy(new12->Graphics,"Integrated");
    strcpy(new12->Operating_System,"Windows 10");
    new12->price=27990;
    new12->item=10;


    COMPUTER* new13;
    new13=(COMPUTER*)malloc(sizeof(COMPUTER));
    new13->next=NULL;
    new12->next=new13;

    strcpy(new13->name,"LENOVO");
    strcpy(new13->model,"IDEAPAD 320-151SK 80XH01FKIN 15.6-inch Laptop");
    strcpy(new13->brand,"Intel");
    strcpy(new13->processor_name,"i3-6006U");
    strcpy(new13->processor_generation,"4.0");
    strcpy(new13->ram,"4GB DDR3");
    strcpy(new13->HDD_capacity,"2TB 5400rpm Serial ATA Hard Drive");
    strcpy(new13->Graphics,"Integrated");
    strcpy(new13->Operating_System,"Windows 10");
    new13->price=34078;
    new13->item=10;


    COMPUTER* new14;
    new14=(COMPUTER*)malloc(sizeof(COMPUTER));
    new14->next=NULL;
    new13->next=new14;

    strcpy(new14->name,"LENOVO");
    strcpy(new14->model,"Yoga 510 80VB00ADIH 14-inch Laptop");
    strcpy(new14->brand,"Intel");
    strcpy(new14->processor_name,"i3-7100");
    strcpy(new14->processor_generation,"6th Gen");
    strcpy(new14->ram,"4GB DDR3");
    strcpy(new14->HDD_capacity,"1TB 5400rpm Serial ATA Hard Drive");
    strcpy(new14->Graphics,"Integrated");
    strcpy(new14->Operating_System,"Windows 10");
    new14->price=44990;
    new14->item=10;


    COMPUTER* new15;
    new15=(COMPUTER*)malloc(sizeof(COMPUTER));
    new15->next=NULL;
    new14->next=new15;

    strcpy(new15->name,"LENOVO");
    strcpy(new15->model,"2016 LENOVO Flex 3 15.6-inch FULL HD ");
    strcpy(new15->brand,"Intel");
    strcpy(new15->processor_name,"i7-6500U 2.5GHz");
    strcpy(new15->processor_generation,"6th Gen");
    strcpy(new15->ram,"8GB DDR3L");
    strcpy(new15->HDD_capacity,"256 GB SSD");
    strcpy(new15->Graphics,"Integrated");
    strcpy(new15->Operating_System,"Windows 10");
    new15->price=97842;
    new15->item=10;


    COMPUTER* new16;
    new16=(COMPUTER*)malloc(sizeof(COMPUTER));
    new16->next=NULL;
    new15->next=new16;

    strcpy(new16->name,"LENOVO");
    strcpy(new16->model,"Thinkpad Edge E470 20H1A050IG 14-inch Laptop");
    strcpy(new16->brand,"Intel");
    strcpy(new16->processor_name,"i5-7200U");
    strcpy(new16->processor_generation,"7th Gen");
    strcpy(new16->ram,"4GB DDR4");
    strcpy(new16->HDD_capacity,"256 GB SSD");
    strcpy(new16->Graphics,"Integrated");
    strcpy(new16->Operating_System,"Windows 10 Professional");
    new16->price=69990;
    new16->item=10;


    COMPUTER* new17;
    new17=(COMPUTER*)malloc(sizeof(COMPUTER));
    new17->next=NULL;
    new16->next=new17;

    strcpy(new17->name,"LENOVO");
    strcpy(new17->model,"Y520 80WK00R1IN 15.6-inch Laptop");
    strcpy(new17->brand,"Intel");
    strcpy(new17->processor_name,"i7-7700HQ");
    strcpy(new17->processor_generation,"7th Gen");
    strcpy(new17->ram,"8GB DDR4");
    strcpy(new17->HDD_capacity,"1.1TB 5400rpm Serial ATA Hard Drive");
    strcpy(new17->Graphics,"NVIDIA GeForce 940MX(4GB)");
    strcpy(new17->Operating_System,"Windows 10");
    new17->price=91461;
    new17->item=10;


    COMPUTER* new18;
    new18=(COMPUTER*)malloc(sizeof(COMPUTER));
    new18->next=NULL;
    new17->next=new18;

    strcpy(new18->name,"ACER");
    strcpy(new18->model,"ASPIRE R3-131T 11.6-inch Touchscreen Laptop");
    strcpy(new18->brand,"Intel");
    strcpy(new18->processor_name,"Pentium Quad Core N3700");
    strcpy(new18->ram,"4GB DDR3");
    strcpy(new18->HDD_capacity,"500GB 5400rpm Serial ATA Hard Drive");
    strcpy(new18->Graphics,"Intel HD Graphics");
    strcpy(new18->Operating_System,"Windows 10");
    new18->price=29950;
    new18->item=10;


    COMPUTER* new19;
    new19=(COMPUTER*)malloc(sizeof(COMPUTER));
    new19->next=NULL;
    new18->next=new19;

    strcpy(new19->name,"ACER");
    strcpy(new19->model,"ACER 15.6-inch Laptop");
    strcpy(new19->brand,"Intel");
    strcpy(new19->processor_name,"i5-7200U 2.5 to 3.1GHz");
    strcpy(new19->processor_generation,"7th Gen");
    strcpy(new19->ram,"8GB DDr4");
    strcpy(new19->HDD_capacity,"1TB 5400rpm Serial ATA Hard Drive");
    strcpy(new19->Graphics,"Intel Integrated");
    strcpy(new19->Operating_System,"Windows 10");
    new19->price=39999;
    new19->item=10;


    COMPUTER* new20;
    new20=(COMPUTER*)malloc(sizeof(COMPUTER));
    new20->next=NULL;
    new19->next=new20;

    strcpy(new20->name,"ACER");
    strcpy(new20->model,"SP513-51 13.3-inch Laptop");
    strcpy(new20->brand,"Intel");
    strcpy(new20->processor_name,"i3-7100U");
    strcpy(new20->processor_generation,"6th Gen");
    strcpy(new20->ram,"4GB DDR4");
    strcpy(new20->HDD_capacity,"256 GB SSD");
    strcpy(new20->Graphics,"Integrated");
    strcpy(new20->Operating_System,"Windows 10");
    new20->price=49213;
    new20->item=10;


    COMPUTER* new21;
    new21=(COMPUTER*)malloc(sizeof(COMPUTER));
    new21->next=NULL;
    new20->next=new21;

    strcpy(new21->name,"DELL");
    strcpy(new21->model,"DELL INSPIRON 2017 14-inch Laptop");
    strcpy(new21->brand,"Intel");
    strcpy(new21->processor_name,"i3");
    strcpy(new21->processor_generation,"6th Gen");
    strcpy(new21->ram,"4GB DDR4");
    strcpy(new21->HDD_capacity,"1TB 5400rpm Serial ATA Hard Drive");
    strcpy(new21->Graphics,"Intel HD Graphics");
    strcpy(new21->Operating_System,"Windows 10");
    new21->price=32790;
    new21->item=10;


    COMPUTER* new22;
    new22=(COMPUTER*)malloc(sizeof(COMPUTER));
    new22->next=NULL;
    new21->next=new22;

    strcpy(new22->name,"DELL");
    strcpy(new22->model,"Inspiron 15-3567 15.6-inch Laptop");
    strcpy(new22->brand,"Intel");
    strcpy(new22->processor_name,"i3-6006U");
    strcpy(new22->processor_generation,"6th Gen");
    strcpy(new22->ram,"4GB DDR4");
    strcpy(new22->HDD_capacity,"1TB 5400rpm Serial ATA Hard Drive");
    strcpy(new22->Graphics,"Integrated");
    strcpy(new22->Operating_System,"Windows 10");
    new22->price=35990;
    new22->item=10;


    COMPUTER* new23;
    new23=(COMPUTER*)malloc(sizeof(COMPUTER));
    new23->next=NULL;
    new22->next=new23;

    strcpy(new23->name,"Dell");
    strcpy(new23->model,"Inspiron 3443 15.6-inch Laptop");
    strcpy(new23->brand,"Intel");
    strcpy(new23->processor_name,"i7 5500U");
    strcpy(new23->processor_generation,"5th Gen");
    strcpy(new23->ram,"4GB DDR4");
    strcpy(new23->HDD_capacity,"1TB 5400rpm Serial ATA Hard Drive");
    strcpy(new23->Graphics,"NVIDIA GeForce 9400GT(2GB)");
    strcpy(new23->Operating_System,"Windows 10");
    new23->price=44550;
    new23->item=10;


    COMPUTER* new24;
    new24=(COMPUTER*)malloc(sizeof(COMPUTER));
    new24->next=NULL;
    new23->next=new24;

    strcpy(new24->name,"Dell");
    strcpy(new24->model,"Vostro 15 5568 15.6-inch Laptop");
    strcpy(new24->brand,"Intel");
    strcpy(new24->processor_name,"i5-7200U");
    strcpy(new24->processor_generation,"7th Gen");
    strcpy(new24->ram,"8GB DDR4");
    strcpy(new24->HDD_capacity,"1TB 5400rpm Serial ATA Hard Drive");
    strcpy(new24->Graphics,"NVIDIA GeForce 940MX");
    strcpy(new24->Operating_System,"Windows 10");
    new24->price=62000;
    new24->item=10;


    COMPUTER* new25;
    new25=(COMPUTER*)malloc(sizeof(COMPUTER));
    new25->next=NULL;
    new24->next=new25;

    strcpy(new25->name,"DELL");
    strcpy(new25->model,"Inspiron 7560 15.6-inch Laptop");
    strcpy(new25->brand,"Intel");
    strcpy(new25->processor_name,"i7");
    strcpy(new25->processor_generation,"7th Gen");
    strcpy(new25->ram,"8GB DDR4");
    strcpy(new25->HDD_capacity,"1TB+128GB SSD");
    strcpy(new25->Graphics,"NVIDIA GeForce 940MX(4GB)");
    strcpy(new25->Operating_System,"Windows 10");
    new25->price=81690;
    new25->item=10;


    COMPUTER* new26;
    new26=(COMPUTER*)malloc(sizeof(COMPUTER));
    new26->next=NULL;
    new25->next=new26;

    strcpy(new26->name,"ASUS");
    strcpy(new26->model,"R542UQ-DM164 15.6-inch Laptop");
    strcpy(new26->brand,"Intel");
    strcpy(new26->processor_name,"i5-7200U");
    strcpy(new26->processor_generation,"7th Gen");
    strcpy(new26->ram,"8GB DDR3");
    strcpy(new26->HDD_capacity,"1TB 5400rpm Serial ATA Hard Drive");
    strcpy(new26->Graphics,"NVIDIA GeForce 9400GT(2GB)");
    strcpy(new26->Operating_System,"Windows 10");
    new26->price=50100;
    new26->item=10;


    COMPUTER* new27;
    new27=(COMPUTER*)malloc(sizeof(COMPUTER));
    new27->next=NULL;
    new26->next=new27;

    strcpy(new27->name,"ASUS");
    strcpy(new27->model,"ZENBOOK UX303UA-YS51 13.3-inch Laptop");
    strcpy(new27->brand,"Intel");
    strcpy(new27->processor_name,"i5");
    strcpy(new27->processor_generation,"6th Gen");
    strcpy(new27->ram,"8GB DDR4");
    strcpy(new27->HDD_capacity,"128 GB SSD");
    strcpy(new27->Graphics,"Intel HD Graphics");
    strcpy(new27->Operating_System,"Windows 10");
    new27->price=65999;
    new27->item=10;


    COMPUTER* new28;
    new28=(COMPUTER*)malloc(sizeof(COMPUTER));
    new28->next=NULL;
    new27->next=new28;

    strcpy(new28->name,"ASUS");
    strcpy(new28->model,"Transformer 10.1-inch Touchscreen 2 in 1 Laptop");
    strcpy(new28->brand,"Intel");
    strcpy(new28->processor_name,"i5 2.8GHz");
    strcpy(new28->processor_generation,"7th Gen");
    strcpy(new28->ram,"4GB DDR4");
    strcpy(new28->HDD_capacity,"128 GB SSD");
    strcpy(new28->Graphics,"Integrated");
    strcpy(new28->Operating_System,"Windows 10");
    new28->price=53433;
    new28->item=10;


    COMPUTER* new29;
    new29=(COMPUTER*)malloc(sizeof(COMPUTER));
    new29->next=NULL;
    new28->next=new29;

    strcpy(new29->name,"ALIENWARE");
    strcpy(new29->model,"Alienware 13 Y560901IN9 13-inch Laptop");
    strcpy(new29->brand,"Intel");
    strcpy(new29->processor_name,"i5-5200U");
    strcpy(new29->processor_generation,"7th Gen");
    strcpy(new29->ram,"8GB DDR4");
    strcpy(new29->HDD_capacity,"1TB 5400rpm Serial ATA Hard Drive");
    strcpy(new29->Graphics,"NVIDIA GeForce GTX1050(2GB)");
    strcpy(new29->Operating_System,"Windows 10");
    new29->price=117299;
    new29->item=10;


    COMPUTER* new30;
    new30=(COMPUTER*)malloc(sizeof(COMPUTER));
    new30->next=NULL;
    new29->next=new30;

    strcpy(new30->name,"ALIENWARE");
    strcpy(new30->model,"AW15R3-3831SLV 15.6-inch Laptop");
    strcpy(new30->brand,"Intel");
    strcpy(new30->processor_name,"i7");
    strcpy(new30->processor_generation,"7th Gen");
    strcpy(new30->ram,"16GB DDR4");
    strcpy(new30->HDD_capacity,"128GB SSD+1TB");
    strcpy(new30->Graphics,"NVIDIA GeForce GTX1060");
    strcpy(new30->Operating_System,"Windows 10");
    new30->price=185320;
    new30->item=10;

    return new1;
}
