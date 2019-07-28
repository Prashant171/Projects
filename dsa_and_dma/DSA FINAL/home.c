#include "computer.h"
#include "online.c"


///Function Name : selec
///Description   : To select mode of shopping
///Input Params  : start,order,soft,wake
///Return        : void


void selec(COMPUTER* start,ORDER* order,SOFTWARE* soft,QUEUE* wake)
{
    int choice,chh;

    system("cls");
    printf(" -------------------------------------------------------------------------\n");
    printf("                                WELCOME TO                     \n");
    printf("                        ***   TECH CLOUD   ***                         \n");
    printf("    THE ULTIMATE PLACE TO FIND THE HARDWARE AND SOFTWARE COMPUTER SERVICES    \n");
    printf(" -------------------------------------------------------------------------\n\n");

    ///if user is a customer
    if(u==1)
        choice=0;

    ///if user is a owner
    if(u==2)
    {
        printf(" 1-> EXPORT\n");
        printf(" 2-> IMPORT\n");
        printf(" 3-> Exit\n\n ");

        scanf("%d",&choice);
    }

    switch(choice)
    {
       case 0: if (u==2)
               system("cls");

               printf(" **************************** SALES SECTION ******************************\n\n");

               printf(" 1-> SPOT SHOPPING\n");
               printf(" 2-> ONLINE SHOPPING\n");
               printf(" 3-> EXIT\n\n ");

               printf("\n Enter your choice\n ");
               scanf("%d",&chh);

               switch(chh)
               {
                 case 1: printf("\n Entering Spot Shopping!!!!\n");
                         printf(" To continue, enter any key...");
                         getch();
                         spot(start,order,soft,wake);
                         break;
                 case 2: printf("\n Entering Online Shopping!!!!\n");
                         printf(" To continue, enter any key...");
                         getch();
                         online(start,order,soft,wake);
                         break;
                 case 3: printf("\n Exiting The Shopping\n");
                         printf(" To continue, enter any key...");
                         getch();
                         printf("\a\a");
                         MessageBox(0, "Thank You !! Visit Again! :)", "TECH CLOUD", MB_OK);
                         printf("\n\n");
                         exit(0);
                         break;
                default:
                         printf("\a\a");
                         MessageBox(0, "Invalid Choice !!", "TECH CLOUD", MB_OK);
                         break;
               }
               break;

      case 1 : export(start,soft);
               break;

      case 2 : import(start,soft);
               break;

      case 3 : printf("\a\a");
               MessageBox(0, "Thank You!! VISIT AGAIN!! :)", "TECH CLOUD", MB_OK);
               exit(0);
               break;
     default :
               printf("\a\a");
               MessageBox(0, "Invalid Choice !!", "TECH CLOUD", MB_OK);
               break;
     }

    selec(start,order,soft,wake);

}

///Function Name : online
///Description   : In online section to select types of products
///Input Parms   : start,order,acc,wake
///Return        : void


void online(COMPUTER* start,ORDER* order,SOFTWARE* soft,QUEUE* wake)
{

    int choice=0;
    char key[10];
    system("cls");

    printf(" -------------------------------------------------------------------------\n");
    printf("                           ONLINE SHOPPING SECTION                      \n");
    printf(" -------------------------------------------------------------------------\n\n");

    printf(" 1-> HARDWARE COMPUTER SERVICES\n");
    printf(" 2-> SOFTWARE COMPUTER SERVICES\n");
    printf(" 3-> VIEW THE ORDERS\n");
    printf(" 4-> SERVE THE ORDERED ITEMS\n");
    printf(" 5-> SEARCH ITEMS BY KEYWORD\n");
    printf(" 6-> EXIT\n ");

    printf("\n Enter your choice\n ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
                printf("\n HARDWARE COMPUTER SERVICES SECTION!!!\n");
                printf(" To continue, enter any key...\n ");
                getch();
                wake=online_hardwr(start,order,soft,wake);
                break;

        case 2:
                printf("\n SOFTWARE COMPUTER SERVICES SECTION!!!\n");
                printf(" To continue, enter any key...\n ");
                getch();
                wake=online_softwr(soft,order,start,wake);
                break;

        case 3:
                display(wake);
                break;

        case 4:
                wake=serve(wake);
                online(start,order,soft,wake);
                break;

        case 5: system("cls");
                printf("\n-----------------------------------------------------------------------------");
                printf("\n                     ****  WELCOME TO SEARCH ENGINE ****                      ");
                printf("\n-----------------------------------------------------------------------------\n");
                printf(" What do u want to Search?\n\n");
                printf(" * Enter the keyword in CAPITAL LETTERS :\n ");

                scanf("%s",key);
                search(key,start,soft);
                break;


        case 6:
                printf(" Exiting From Online Shopping!!!\n");
                printf(" To continue, enter any key...\n ");
                getch();
                MessageBox(0, "Successfully Exited from Online Section", "TECH CLOUD", MB_OK);
                selec(start,order,soft,wake);
                break;

       default:

                MessageBox(0, "Invalid Choice !!", "TECH CLOUD", MB_OK);
                break;

        }

    online(start,order,soft,wake);

}



///Function Name : spot
///Description   : In spot section to select type of products
///Input Params  : start,order,soft,wake
///Return        : void


void spot(COMPUTER* start,ORDER* order,SOFTWARE* soft,QUEUE* wake)
{
    char key[10];
    while(1)
    {
        int choice=0;
        system("cls");
        printf("-------------------------------------------------------------------------\n");
        printf("                           WELCOME TO SPOT SHOPPING SECTION                       \n");
        printf("-------------------------------------------------------------------------\n\n");

        printf(" 1-> HARDWARE COMPUTER SERVICES\n");
        printf(" 2-> SOFTWARE COMPUTER SERVICES\n");
        printf(" 3-> YOUR CART\n");
        printf(" 4-> SEARCH ITEMS BY KEYWORD\n");
        printf(" 5-> EXIT\n ");

        printf("\n Enter your choice\n ");
        scanf("%d",&choice);

        switch(choice)
        {
          case 1:
                  printf("\n HARDWARE COMPUTER SERVICES SECTION!!!\n");
                  printf(" To continue, enter any key...\n ");
                  getch();
                  hardware_sec(start,order,soft,wake);
                  break;

          case 2:
                  printf("\n SOFTWARE COMPUTER SERVICES SECTION!!!\n");
                  printf(" To continue, enter any key...\n ");
                  getch();
                  software_sec(soft,order,start,wake);
                  break;

          case 3 :printf("\n Entering into your cart .......\n");
                  printf(" To continue, enter any key...\n ");
                  getch();
                  t=1;
                  buy(order,start,soft,wake);
                  break;

         case 4:  system("cls");
                  printf("\n-----------------------------------------------------------------------------");
                  printf("\n                     ****  WELCOME TO SEARCH ENGINE ****                      ");
                  printf("\n-----------------------------------------------------------------------------\n");
                  printf(" What do u want to Search\n\n");
                  printf(" * Enter the keyword in CAPITAL LETERS :\n ");

                  scanf("%s",key);
                  search(key,start,soft);
                  break;

          case 5:
                  printf("\n Exiting From Spot Shopping!!!\n");
                  printf(" To continue, enter any key...\n ");
                  getch();
                  MessageBox(0, "Successfully Exited from Spot Shopping Section", "TECH CLOUD", MB_OK);
                  selec(start,order,soft,wake);
                  break;

          default:
                  MessageBox(0, "Invalid Entry", "TECH CLOUD", MB_OK);
                  break;

        }
    }
}


///Function Name : hardware_sec
///Description   : Function Provides different hardware products and you can order it in 'spot shopping'
///Input Params  : start,order,soft,wake
///Return        : void


void hardware_sec(COMPUTER* start,ORDER* order,SOFTWARE* soft,QUEUE* wake)
{
    int choice=0,ch1=0,op=0,ch2=0;
    int i=1;
    system("cls");
    printf("-------------------------------------------------------------------\n");
    printf("                        HARDWARE SECTION                    \n");
    printf("-------------------------------------------------------------------\n\n");
    printf(" Search for...\n\n");

    printf(" 1->LAPTOPS\n");
    printf(" 2->PENDRIVES\n");
    printf(" 3->HARDDISKS\n\n ");

    printf("\n Enter your choice\n ");
    scanf("%d",&ch1);

    if (ch1==1)
    {
        system("cls");
        printf(" -------------------------------------------------------------------\n");
        printf("                        LAPTOPS SECTION                    \n");
        printf(" -------------------------------------------------------------------\n\n");

        printf("\n Latest laptop models are here......\n\n");
        printf(" Search based on...\n\n");

        printf(" 1-> BRAND\n");
        printf(" 2-> PROCESSOR NAME\n");
        printf(" 3-> PRICE\n");
        printf(" 4-> Exit\n\n ");

        printf("\n Enter your choice\n ");
        scanf("%d",&choice);

       if(choice==1)
       {
         system("cls");
         printf("\n Search for...\n\n");
         printf(" LENOVO\n ACER\n HP\n DELL\n ALIENWARE\n\n");
         COMPUTER* temp;
         temp=start;
         char brand[20];
         int i=1,flag=0;

         printf(" Enter the Brand Name\n ");
         scanf("%s",brand);

         system("cls");

         while(temp!=NULL)
         {
             if(strcmpi(temp->name,brand)==0)
             {
                  printf("\n Option :%d\n\n NAME\t\t : %s \n Processor_name\t : %s CORE %s %s\n HDD_capacity\t : %s",i,temp->name,temp->brand,temp->processor_name,temp->processor_generation,temp-> HDD_capacity);
                  printf("\n Ram\t\t : %s \n Graphics\t : %s\n Operating System: %s\n PRICE\t\t :Rs %f\n\n",temp->ram,temp->Graphics,temp->Operating_System,temp->price);
                  flag=1;
             }
             temp=temp->next;
             i++;

         }

         if (flag==0)
         {
             MessageBox(0, "Invalid choice", "TECH CLOUD", MB_OK);
             hardware_sec(start,order,soft,wake);
         }

      }

      else if(choice==2)
      {
         system("cls");
         printf("\n Search for...\n\n ");
         printf("\n i3\n i5\n i7\n\n");

         COMPUTER* temp;
         temp=start;
         char processor_name[10];
         int i=1,flag=0;

         printf(" Enter processor_name\n ");
         scanf("%s",processor_name);

         system("cls");

         while(temp!=NULL)
         {
             if(strcmpi(temp->processor_name,processor_name)==0)
             {
                  printf("\n Option :%d\n\n NAME\t\t : %s \n Processor_name\t : %s CORE %s %s\n HDD_capacity\t : %s",i,temp->name,temp->brand,temp->processor_name,temp->processor_generation,temp-> HDD_capacity);
                  printf("\n Ram\t\t : %s \n Graphics\t : %s\n Operating System: %s\n PRICE\t\t : Rs %f\n\n",temp->ram,temp->Graphics,temp->Operating_System,temp->price);
                  flag=1;

             }
             temp=temp->next;
             i++;

         }

         if (flag==0)
         {
             MessageBox(0, "Invalid choice", "TECH CLOUD", MB_OK);
             hardware_sec(start,order,soft,wake);
         }

      }


      else if(choice==3)
      {
         int low=0,high=0;

         system("cls");

         printf("\n Enter the price range from 21000 to 199999\n");

         printf(" Enter lower range\n ");
         scanf("%d",&low);

         printf(" Enter higher range\n ");
         scanf("%d",&high);

         COMPUTER* temp;
         temp=start;

         int i=1,flag=0;
         system("cls");

         while(temp!=NULL)
         {
             if(temp->price>=low&&temp->price<=high)
             {
                  printf("\n Option :%d\n\n NAME\t\t : %s \n Processor_name\t : %s CORE %s %s\n HDD_capacity\t : %s",i,temp->name,temp->brand,temp->processor_name,temp->processor_generation,temp-> HDD_capacity);
                  printf("\n Ram\t\t : %s \n Graphics\t : %s\n Operating System :%s\n PRICE\t\t : %fRs\n\n",temp->ram,temp->Graphics,temp->Operating_System,temp->price);
                  flag=1;
             }
             temp=temp->next;
             i++;

         }

         if (flag==0)
         {
             MessageBox(0, "Item not found for the range you entered", "TECH CLOUD", MB_OK);
             hardware_sec(start,order,soft,wake);
         }

      }

      else if(choice==4)
         spot(start,order,soft,wake);

      else
      {
           MessageBox(0,"Invalid choice","TECH CLOUD",MB_OK);
           hardware_sec(start,order,soft,wake);
      }


      printf("\n Your Choice? \n ");
      scanf("%d",&op);

      if(op<=0||op>30)
      {
         MessageBox(0, "Invalid choice", "TECH CLOUD", MB_OK);
         printf("\n Enter any key to continue\n ");
         getch();
         spot(start,order,soft,wake);

      }

      system("cls");
      printf("\n Add to Cart?\n\n");

      COMPUTER* temp;
      temp=start;
      int i=1;
      while(temp!=NULL)
      {
          if(i==op)
          {
              printf(" %s %s\n %f\n",temp->name,temp->model,temp->price);
              if(temp->item==0)
              {
                  printf("\n-----This ITEM IS OUT OF STOCK----\n");
                  MessageBox(0, " It is Notified to the Owner\n to Import this Item ", "TECH CLOUD", MB_OK);

                  FILE *fp;
                  fp=fopen("notification.txt","a");

                  fwrite(&temp->name,70,1,fp);
                  fclose(fp);
                   selec(start,order,soft,wake);
             }

            }

          temp=temp->next;
          i++;
      }

      printf("\n 1->YES\n 2->NO\n ");
      scanf("%d",&ch2);

      if(ch2==1)
      {
         COMPUTER* temp;
         ORDER* now;
         int i;
         temp=start;

         i=1;
         while(temp!=NULL)
         {
             if(i==op)
             {
                 now=order;

                 if(now==NULL)
                 {
                     now=(ORDER*)malloc(sizeof(ORDER));
                     strcpy(now->name,temp->name);
                     now->price=temp->price;
                     now->next=NULL;
                     order=now;
                 }
                 else
                 {
                     while(now->next!=NULL)
                      now=now->next;
                      now->next=(ORDER*)malloc(sizeof(ORDER));
                      strcpy(now->next->name,temp->name);
                      now->next->price=temp->price;
                      now->next->next=NULL;
                 }
                 temp->item--;
             }
             temp=temp->next;
             i++;
          }
       }

      else
      {
         spot(start,order,soft,wake);
      }

      int other=0;

      system("cls");

      printf("\n Continue Shopping?\n");
      printf(" 1->YES\n 2->NO\n ");
      scanf("%d",&other);

      if(other==1)
         spot(start,order,soft,wake);
      else
      {
         buy(order,start,soft,wake);
      }
     }

     else if(ch1==2)
     {
        STORAGE* pend=NULL;
        pend=get_pend();
        STORAGE* temp=NULL;
        temp=pend;

        system("cls");
        printf(" -------------------------------------------------------------------\n");
        printf("                           PENDRIVES SECTION                         \n");
        printf(" -------------------------------------------------------------------\n\n");

         while(temp!=NULL)
         {
               printf(" Option :%d\n Name  : %s\n Price : %f\n\n",i,temp->name,temp->price);
               temp=temp->next;
               i++;
          }

                printf(" To continue, enter any key...\n ");
                getch();

                int cho=0,op=0;
                printf("\n Your Choice?\n ");
                scanf("%d",&op);

                if(op<=0||op>5)
                {
                    MessageBox(0, "Invalid choice", "TECH CLOUD", MB_OK);
                    spot(start,order,soft,wake);
                }

                system("cls");
                printf("\n Add to Cart?\n");

                i=1;
                STORAGE* cur;
                cur=pend;

                while(cur!=NULL)
                {
                    if(i==op)
                    {
                        printf(" %s \n %f\n\n",cur->name,cur->price);
                        if(cur->item==0)
                         {
                            printf("\n-----This ITEM IS OUT OF STOCK----\n");
                            MessageBox(0, " It is Notified to the Owner\n to Import this Item ", "TECH CLOUD", MB_OK);

                            FILE *fp;
                            fp=fopen("notification.txt","a");

                            fwrite(&cur->name,70,1,fp);
                            fclose(fp);
                            selec(start,order,soft,wake);
                         }
                    }

                    i++;
                    cur=cur->next;
                }

                printf(" 1->YES\n 2->NO\n ");
                scanf("%d",&cho);

                if(cho==1)
                {
                    STORAGE* temp;
                    ORDER* now;
                    int i;
                    temp=pend;

                    i=1;
                    while(temp!=NULL)
                    {
                        if(i==op)
                        {
                            now=order;
                            if(now==NULL)
                            {
                                now=(ORDER*)malloc(sizeof(ORDER));
                                strcpy(now->name,temp->name);
                                now->price=temp->price;
                                now->next=NULL;
                                order=now;
                            }
                            else
                            {
                                while(now->next!=NULL)
                                    now=now->next;
                                now->next=(ORDER*)malloc(sizeof(ORDER));
                                strcpy(now->next->name,temp->name);
                                now->next->price=temp->price;
                                now->next->next=NULL;
                            }
                            temp->item--;
                        }
                        temp=temp->next;
                        i++;
                    }
                }


                int other=0;

                system("cls");
                printf("\n Do tou want to Continue Shopping?\n");
                printf(" 1->YES\n 2->NO\n ");
                scanf("%d",&other);

                if(other==1)
                    spot(start,order,soft,wake);
                else
                {
                    buy(order,start,soft,wake);
                    order=NULL;
                }

      }

      else if(ch1==3)
      {
              STORAGE* hd=NULL;
              hd=get_hd();
              STORAGE* temp=NULL;
              temp=hd;

              system("cls");
              printf(" -------------------------------------------------------------------\n");
              printf("                            HARDDISK SECTION                          \n");
              printf(" -------------------------------------------------------------------\n\n");

              while(temp!=NULL)
              {

                printf(" Option :%d\n Name  : %s\n Price : %f\n\n",i,temp->name,temp->price);

                 temp=temp->next;
                 i++;

              }

                printf(" To continue, enter any key...\n ");
                getch();

                int cho=0,op=0;
                printf("\n Your Choice?\n ");
                scanf("%d",&op);

                if(op<=0||op>5)
                {
                    MessageBox(0, "Invalid choice", "TECH CLOUD", MB_OK);
                    getch();
                    spot(start,order,soft,wake);
                }

                system("cls");
                printf("\n Add to Cart?\n");

                i=1;
                STORAGE* cur;
                cur=hd;

                while(cur!=NULL)
                {
                    if(i==op)
                    {
                         printf(" %s\n\n",cur->name);
                         if(cur->item==0)
                         {
                            printf("\n-----This ITEM IS OUT OF STOCK----\n");
                            MessageBox(0, " It is Notified to the Owner\n to Import this Item ", "TECH CLOUD", MB_OK);

                            FILE *fp;
                            fp=fopen("notification.txt","a");

                            fwrite(&cur->name,70,1,fp);
                            fclose(fp);
                            selec(start,order,soft,wake);
                         }
                    }

                    i++;
                    cur=cur->next;
                }

                printf(" 1->YES\n 2->NO\n ");
                scanf("%d",&cho);

                if(cho==1)
                {
                    STORAGE* temp;
                    ORDER* now;
                    int i;
                    temp=hd;

                    i=1;
                    while(temp!=NULL)
                    {
                        if(i==op)
                        {
                            now=order;
                            if(now==NULL)
                            {
                                now=(ORDER*)malloc(sizeof(ORDER));
                                strcpy(now->name,temp->name);
                                now->price=temp->price;
                                now->next=NULL;
                                order=now;
                            }
                            else
                            {
                                while(now->next!=NULL)
                                    now=now->next;
                                now->next=(ORDER*)malloc(sizeof(ORDER));
                                strcpy(now->next->name,temp->name);
                                now->next->price=temp->price;
                                now->next->next=NULL;
                            }
                            temp->item--;
                        }
                        temp=temp->next;
                        i++;
                    }
                }


                int other=0;

                system("cls");
                printf("\n Continue Shopping?\n");
                printf(" 1->YES\n 2->NO\n ");
                scanf("%d",&other);

                if(other==1)
                    spot(start,order,soft,wake);
                else
                {
                    buy(order,start,soft,wake);
                    order=NULL;
                }


        }
        else if (ch1==4)
        {
           spot(start,order,soft,wake);
        }
        else
        {
           MessageBox(0,"Invalid choice","TECH CLOUD",MB_OK);
           hardware_sec(start,order,soft,wake);
        }
}



///Function Name : software_sec
///Description   : Function Provides software products and can be ordered it in 'spot shopping'
///Input Params  : soft,order,start,wake
///Return        : void


void software_sec(SOFTWARE* soft,ORDER* order,COMPUTER* start,QUEUE* wake)
{
    system("cls");
    printf(" -------------------------------------------------------------------------\n");
    printf("                        'SOFTWARE COMPUTER SERVICES' SECTION                    \n");
    printf(" -------------------------------------------------------------------------\n");

    SOFTWARE* temp=NULL;
    temp=soft;
    int i=1;

        while(temp!=NULL)
        {
                printf(" Option : %d\n Name   : %s\n Price  : %f\n\n",i,temp->name,temp->price);

               temp=temp->next;
               i++;
        }

                int cho=0,op=0;
                printf(" Your Choice?\n ");
                scanf("%d",&op);

                if(op<=0||op>5)
                {
                    printf(" Invalid Option\n ");
                    getch();
                    spot(start,order,soft,wake);
                }

                system("cls");
                printf("\n Add to Cart?\n\n");

                i=1;
                SOFTWARE* cur;
                cur=soft;

                while(cur!=NULL)
                {
                     if(i==op)
                    {
                         printf(" %s\n Price:%f \n\n",cur->name,cur->price);
                         if(cur->item==0)
                         {
                            printf("\n-----This ITEM IS OUT OF STOCK----\n");
                            MessageBox(0, " It is Notified to the Owner\n to Import this Item ", "TECH CLOUD", MB_OK);

                            FILE *fp;
                            fp=fopen("notification.txt","a");

                            fwrite(&cur->name,70,1,fp);
                            fclose(fp);
                            selec(start,order,soft,wake);
                         }
                    }

                    i++;
                    cur=cur->next;
                }

                printf("\n 1->YES\n 2->NO\n ");
                scanf("%d",&cho);

                if(cho==1)
                {
                    SOFTWARE* temp;
                    QUEUE* now;
                    int i;
                    temp=soft;
                    now=wake;

                    i=1;
                    while(temp!=NULL)
                    {
                        if(i==op)
                        {
                            now=order;
                            if(now==NULL)
                            {
                                now=(ORDER*)malloc(sizeof(ORDER));
                                strcpy(now->name,temp->name);
                                now->price=temp->price;
                                now->next=NULL;
                                order=now;
                            }
                            else
                            {
                                while(now->next!=NULL)
                                    now=now->next;
                                now->next=(ORDER*)malloc(sizeof(ORDER));
                                strcpy(now->next->name,temp->name);
                                now->next->price=temp->price;
                                now->next->next=NULL;
                            }
                            temp->item--;
                        }
                        temp=temp->next;
                        i++;
                    }

                    system("cls");
                    printf("\n Item Added to Cart\n\n");
                    printf(" To continue, enter any key...\n ");
                    getch();
                }

                else
                {
                    spot(start,order,soft,wake);
                }
                int other=0;

                system("cls");
                printf("\n DO u want to Continue Shopping? \n");
                printf(" 1->YES\n 2->NO\n ");
                scanf("%d",&other);
                if(other==1)
                    spot(start,order,soft,wake);
                else
                {
                    buy(order,start,soft,wake);
                    order=NULL;
                }

}


///Function Name  : buy
///Description    : Function provides you the options for further orders or discarding the previous orders or completion of order
///Input Params   : order,start,soft,wake
///Return         : void



void buy(ORDER* order,COMPUTER* start,SOFTWARE* soft,QUEUE* wake)
{
    int pq=0;

    system("cls");

    ///if t=0 "Complete the Order" otherwise "Display Cart"

    if(t==0)
    {
                printf("\n Your Orders Are....\n\n");
    }
    else
    {
        printf("\n----------------------------------------------------------------------------- ");
        printf("\n                                YOUR CART                                     ");
        printf("\n-----------------------------------------------------------------------------\n\n");
    }


    ORDER* ord;
    ord=order;
    int o=1;

    if(ord==NULL)
    {
        MessageBox(0, "Your cart is empty", "TECH CLOUD", MB_OK);
        t=0;
        return;
    }
    else
    {
        while(ord!=NULL)
      {
        printf(" %d\n Name : %s\n Price: %f\n\n",o,ord->name,ord->price);
        ord=ord->next;
        o++;

      }
    }

    if(t==0)
    {
        printf(" 1->Add More items to the Order\n");
        printf(" 2->Discard Any of Items in Order\n");
        printf(" 3->Check Out\n ");
    }
    else
    {
        printf(" 1->Add More items to the Cart\n");
        printf(" 2->Discard Any of Items in Cart\n");
        printf(" 3->Buy now\n ");
    }

    t=0;
    int choo=0,opn=0;
    scanf("%d",&choo);
    switch(choo)
    {
     case 1:
             spot(start,order,soft,wake);
             break;
     case 2:
             printf("\n Enter the Option of item to be Discarded\n ");
             scanf("%d",&opn);

             if(opn<1 || opn>=o)
                MessageBox(0, "Invalid choice", "TECH CLOUD", MB_OK);
             else
             {
                 order=discard(order,opn);
             }

             buy(order,start,soft,wake);
             break;
     case 3: pq=cont(order);
             if(pq==1)
             {
                spot(start,order,soft,wake);
             }
             break;
    default : MessageBox(0, "Invalid choice", "TECH CLOUD", MB_OK);
              break;
     }
}


///Function Name : cont
///Description   : Function provides you Completion of Orders and Generation of bill
///Input Params  : order
///Return        : void


int cont(ORDER* order)
{
    float total_bill[30],tot_bill=0;
    int discount[30],i=0,flag=0;
    char name[20],number[11];
    system("cls");
    ORDER* pur;
    pur=order;

    if(pur==NULL)
    {
        MessageBox(0, "Your cart is empty", "TECH CLOUD", MB_OK);
        MessageBox(0, " Please Buy Anything..!!!\nDon't Miss the Offers...!!!", "TECH CLOUD", MB_OK);

        return 1;

    }
    else
    {
        system("cls");
        printf("\n Enter the following details\n\n");
        printf(" Name: ");
        scanf("%s",name);
        printf("\n Contact Number: ");
        scanf("%s",number);
        system("cls");

        get_payment_method(&flag);
        system("cls");
        printf("\n Order is placed Successful\n");
        printf("\n Enter any key to generate the bill....\n");
        getch();

        system("cls");

        ORDER* curr;
        curr=order;
        while(curr!=NULL)
        {
            discount[i]=discnt();
            total_bill[i]=curr->price-(discount[i]*curr->price/100);
            curr=curr->next;
            i++;
        }

        ORDER* cur;
        cur=order;
        int k=0;

        while(cur!=NULL)
        {
            k++;
            cur=cur->next;
        }

        rtrn();

        printf(" ------------------------------------------------------------------------------\n");
        printf("                                TECH CLOUD                                   \n");
        printf(" ------------------------------------------------------------------------------\n");
        printf(" BILL NO              : %d                                              \n\n",bill);
        printf(" NAME                 : %s                                              \n\n",name);
        printf(" Contact Number       : %s                                            \n\n",number);
        printf(" Total Items Purchased: %d                                                 \n\n",k);
        curr=order;
        i=0;
        printf(" ------------------------------Order Summary------------------------------------\n\n");

        while(curr!=NULL)
        {
            printf(" NAME                 : %s                                   \n\n",curr->name);
            printf(" Price                : %f                                  \n\n",curr->price);
            printf(" Discount             : %d  %%                              \n\n",discount[i]);
            printf(" Bill                 : %f                                \n\n",total_bill[i]);
            tot_bill=tot_bill+total_bill[i];
            curr=curr->next;
            i++;
        }
        printf(" ==============================================================================\n");
        printf(" TOTAL BILL           : %f                                          \n\n",tot_bill);
        printf(" ==============================================================================\n");

        printf("\n Payment method  : ");
        if(flag==1)
            printf(" Used CREDIT/DEBIT cards\n");
        else
            printf(" Pay by cash");
        bill++;
        order=NULL;
        printf("\n\n To continue, enter any key...\n ");
        getch();
        printf("\a\a");
        MessageBox(0, "Thank You!! VISIT AGAIN! :)", "TECH CLOUD", MB_OK);

        return 0;
    }

}


void get_payment_method(int *flag)
{
    int ch;ATM C;

    printf("\n Select the payment method\n");
    printf("\n 1->Credit card / Debit card /ATM Card  \n");
    printf(" 2->Cash on delivery\n ");

    printf("\n Enter your choice \n ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1 :  *flag=1;
                   printf("\n\n Enter the following Details\n\n");
                   printf("\n Card number: ");
                   scanf("%Lf",&C.card_number);
                   printf(" Expiry date: ");
                   scanf("%d",&C.mm);
                   printf(" Expiry year: ");
                   scanf("%d",&C.yyyy);
                   printf(" CVV: ");
                   scanf("%d",&C.CVV);
                   system("cls");
                   printf("\n Your card details \n");
                   printf("\n Card number : %Lf \n Expiry mm   : %d  \n YYYY : %d \n CVV  : %d",C.card_number,C.mm,C.yyyy,C.CVV);
                   MessageBox(0, "Your payment is succesfully completed", "TECH CLOUD", MB_OK);
                   break;

        case 2 :  *flag=2;
                   break;

        default : MessageBox(0, "Invalid choice", "TECH CLOUD", MB_OK);
                  system("cls");
                  get_payment_method(flag);
                  break;
    }
}

///Function Name : discnt
///Description   : function to compute discount by finding the date and month
///Input Params  : nill
///Return        : discount percentage


int discnt()
{
    char m[4];
    int mm=0,discount=0;
    timendate(m);
    mm=find_m(m);
    discount=dis(mm);
    return discount;

}



///Function Name : rtrn
///Description   : functiom to find month
///Input Params  : nill
///Return        : void


void rtrn()
{
    char m[4];
    int mm=0;
    timendate(m);
    mm=find_m(m);
    prnt(mm);
}



///Function Name : discard
///Description   : Function provides you to discard the previous orders
///Input Params  : order,opn
///return        : updated order


ORDER* discard(ORDER* order,int opn)
{
    int i=1;
    ORDER* temp=NULL;
    ORDER* pre=NULL;
    temp=order;
    pre=NULL;
    if(opn==1)
    {
        order=temp->next;
    }
    else
    {
        while(i!=opn)
        {
            pre=temp;
            temp=temp->next;
            i++;
        }
        pre->next=temp->next;
    }
    free(temp);

    return order;


}

///Function Name : search
///Input         : key or pattern, list of hardware and software products
///Output        : Found Items for given key in Sorted order and display in increasing order of price
///Description   : Provides functionalities for searching based on key and sorts the found items based on price


void search(char* key,COMPUTER* start,SOFTWARE* soft)
{
    int n,m,x=0,p;
    SEARCH S[50];

    COMPUTER* temp;
    temp=start;

    int i=0,j=0;
    int s_l=0,s_h=0,s_s=0,s_p=0;
    char *p1,*p2,*p3;

    while(temp!=NULL)
    {
        p1=temp->name;
        p2=key;

        for(i=0;i< strlen(temp->name);i++)
         {
            if(*p1==*p2)
           {
             p3=p1;
             for(j=0;j<strlen(key);j++)
             {
                if(*p3==*p2)
                {
                    p3++;p2++;
                }
                else
                    break;
             }
            p2=key;
            if(j==strlen(key))
            {
                strcpy(S[x].name,temp->name);
                S[x].price=temp->price;
                s_l++;
                x++;
                break;

            }
           }
           p1++;
          }
        temp=temp->next;
      }

    SOFTWARE* t2=NULL;
    t2=soft;

     i=0,j=0;

    while(t2!=NULL)
    {
        p1=t2->name;
        p2=key;

        for(i=0;i<strlen(t2->name);i++)
         {
            if(*p1==*p2)
           {
              p3=p1;
              for(j=0;j<strlen(key);j++)
              {
                if(*p3==*p2)
                {
                    p3++;p2++;
                }
                else
                    break;
              }
            p2=key;
            if(j==strlen(key))
            {
                strcpy(S[x].name,t2->name);
                S[x].price=t2->price;
                s_s++;
                x++;
                break;

            }
           }
           p1++;
          }
           t2=t2->next;
    }

    STORAGE* pend=NULL;
    pend=get_pend();

    STORAGE* t3=NULL;
    t3=pend;

     i=0,j=0;

    while(t3!=NULL)
    {
        p1=t3->name;
        p2=key;

        for(i=0;i<strlen(t3->name);i++)
        {
            if(*p1==*p2)
           {
              p3=p1;
              for(j=0;j<strlen(key);j++)
              {
                if(*p3==*p2)
                {
                    p3++;p2++;
                }
                else
                    break;
              }
            p2=key;
            if(j==strlen(key))
            {
                strcpy(S[x].name,t3->name);
                S[x].price=t3->price;
                s_p++;
                x++;
                break;

            }
           }
           p1++;
          }
        t3=t3->next;
    }

    STORAGE* hd=NULL;
    hd=get_hd();

    STORAGE* t1=NULL;
    t1=hd;

     i=0,j=0;

    while(t1!=NULL)
    {
        p1=t1->name;
        p2=key;

        for(i=0;i<strlen(t1->name);i++)
         {
            if(*p1==*p2)
           {
              p3=p1;
              for(j=0;j<strlen(key);j++)
              {
                if(*p3==*p2)
                {
                    p3++;p2++;
                }
                else
                    break;
              }
             p2=key;
             if(j==strlen(key))
             {
                strcpy(S[x].name,t1->name);
                S[x].price=t1->price;
                s_h++;
                x++;
                break;

             }
            }
           p1++;
          }
           t1=t1->next;
    }

    float tempr;
    char tempry[20];

    for(i=0;i<=(s_l + s_s+ s_h+ s_p)-2;i++)
    {
        for(j=0;j<=(s_l + s_s+ s_h+ s_p)-2-i;j++)
        {
            if(S[j+1].price<S[j].price)
            {
                strcpy(tempry,S[j].name);
                tempr=S[j].price;

                strcpy(S[j].name,S[j+1].name);
                S[j].price=S[j+1].price;

                strcpy(S[j+1].name,tempry);
                S[j+1].price=tempr;
            }
        }

    }

    if(s_l==0 && s_h==0 && s_s==0 && s_p==0)
     {
         printf("\n Search not found\n");
     }
     else
     {
          printf("\n Search found........\n\n");

          for(p=0;p<(s_l + s_s+ s_h+ s_p);p++)
           {
               printf(" %s \n",S[p].name);
               printf(" %f\n",S[p].price);
               printf(" \n");
           }



     }

     printf("\n Enter any key to continue\n");
     getch();
}



///Function Name : export
///Input         : starting address of hardware and software items list
///return type   : void
///Description   :Provides options for Exporting the Items to different branches based on Dijkstras Minimum path algorithm

void export(COMPUTER* start,SOFTWARE* soft)
{
    int op,destn;
    i=1;
    COMPUTER* temp;
    temp=start;
    system("cls");


    printf("\n ---------------------------LAPTOPS---------------------- ITEMS REMAINING\n\n");

    while(temp!=NULL)
    {
        printf(" Option:%d %s%s\n",i,temp->brand,temp->name);
        printf("\n\t\t\t\t\t\t\t\t%d\n\n",temp->item);
        temp=temp->next;
        i++;
    }

    STORAGE* t2=NULL;
    t2=get_pend();

    printf("\n -------------------------PENDRIVESe---------------------- ITEMS REMAINING\n\n");

    while(t2!=NULL)
    {
        printf(" Option:%d %s\n",i,t2->name);
        printf("\n\t\t\t\t\t\t\t\t%d\n\n",t2->item);
        t2=t2->next;
        i++;
    }

    STORAGE* t3=NULL;
    t3=get_hd();

    printf("\n -------------------------HARDDISKS----------------------- ITEMS REMAINING\n\n");

    while(t3!=NULL)
    {
        printf(" Option:%d %s\n",i,t3->name);
        printf("\n\t\t\t\t\t\t\t\t%d\n\n",t3->item);
        t3=t3->next;
        i++;
    }

    SOFTWARE* t;
    t=soft;

    printf("\n -----------------------SOFTWARE PRODUCTS------------------ ITEMS REMAINING\n\n");

    while(t!=NULL)
    {
        printf(" Option:%d %s",i,t->name);
        printf("\n\t\t\t\t\t\t\t\t%d\n\n",t->item);
        t=t->next;
        i++;
    }

    printf("\n ---------------------------------------------------------------------------\n");

    printf("\n\n Enter the option of item ..to export\n ");
    scanf("%d",&op);

    while(op>45 || op<0)
    {
        printf("\n\n Invalid choice\n");
        printf("\n Enter your choice again\n ");
        scanf("%d",&op);
    }

    printf("\n Select the place 'from where' you want to export\n");
    printf(" 1->Hubli\n 2->Bengaluru\n 3->Mumbai\n 4->Chennai\n 5->Hyderabad\n ");

    /*DIJKTRAS shortest path algorithm*/

	int n,cost[10][10],i,j,d[10],p[10],source;

	n=5;

	FILE* fp;
	fp=fopen("Distance.txt","r");
	if(fp==NULL)
    {
        printf(" Distance file not found \n");
        exit(0);
    }

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			fscanf(fp,"%d",&cost[i][j]);
		}
	}
	fclose(fp);


    scanf("%d",&source);

    while(source>5 || source<0)
    {
        printf("\n Invalid choice\n");
        printf("\n Enter your choice again\n");
        scanf("%d",&source);
    }


	dijkstras(n,cost,source,j,d,p);

    printf("\n\n Select the place 'where' you want to Export the Item\n");
    printf(" 1->Hubli\n 2->Bengaluru\n 3->Mumbai\n 4->Chennai\n 5->Hyderabad\n ");
    scanf("%d",&destn);

    while(destn>5 || destn<0)
    {
        printf("\n Invalid choice\n");
        printf("\n Enter your choice again\n ");
        scanf("%d",&destn);
    }

    int item;
    char name[60];
    temp=start;
    system("cls");
    i=1;
    while(temp!=NULL)
    {
        if(op==i)
        {
            temp->item--;
            strcpy(name,temp->name);
            item=temp->item;
        }
        temp=temp->next;
        i++;
    }

    STORAGE* t6=NULL;
    t6=get_pend();
    while(t6!=NULL)
    {

        printf(" Option:%d %s\n",i,t6->name);
        if(op==i)
         {
            t6->item--;
            strcpy(name,t6->name);
            item=t6->item;
        }
        t6=t6->next;
        i++;
    }

    STORAGE* t7=NULL;
    t7=get_hd();
    while(t7!=NULL)
    {

        printf(" Option:%d %s\n",i,t7->name);
        if(op==i)
         {
            t7->item--;
            strcpy(name,t7->name);
            item=t7->item;
        }
        t7=t7->next;
        i++;
    }


    t=soft;

    while(t!=NULL)
    {

        printf(" Option:%d %s\n",i,t->name);
        if(op==i)
         {
            t->item--;
            strcpy(name,t->name);
            item=t->item;
        }
        t=t->next;
        i++;
    }




     system("cls");
     printf("\n -----------------------------------------------------------------------\n");
     printf(" \t\t\t\tExport\t\t\t\n");
     printf(" -----------------------------------------------------------------------\n");

     MessageBox(0,"Item Exported to Required Destination","TECH CLOUD",MB_OK);
     printpath(d,p,n,source,destn);
     printf("\n ITEM DETAILS           : ");
     printf("\n Item                   : %s",name);
     printf("\n The items after export : %d\n",item);

     printf("\n\n Enter any key to go back\n ");
     getch();
}


void printpath(int d[],int p[],int n,int source,int destn)
{
	int dest,i;
	char place[20];

	for(dest=1;dest<=n;dest++)
	{
	    if(dest==destn)
        {
		  i=dest;
		  if(d[i]==999)
			printf(" %d is not reachable\n",i);
		  else
		  {
		      printf("\n The shipping details   :");
			while(i!=source)
			{
			    strcpy( place,getplace(i));

				printf(" %s<---",place);
				i=p[i];
			}
			printf(" %s \n Transportation charges : Rs %d\n",getplace(i),d[dest]);
		 }
        }
	}
}


char* getplace(int n)
{
    if(n==1) return ("HUBLI");
    if(n==2) return("BENGALORE");
    if(n==3) return("MUMBAI");
    if(n==4) return("CHENNAI");
    if(n==5) return("HYDERABAD");

}


void dijkstras(int n,int cost[10][10],int source,int dest,int d[],int p[])
{
	int i,j,u,v;
	int min;
	int s[10];


	for(i=1;i<=n;i++)
	{
		d[i]=cost[source][i];
		s[i]=0;
		p[i]=source;
	}

	s[source]=1;

	for(i=1;i<n;i++)
	{
		min=999;
		u=-1;

		for(j=1;j<=n;j++)
		{
			if(s[j]==0)
			{
				if(d[j]<=min)
				{
					min=d[j];
					u=j;
				}
			}
		}

		if(u==-1)
			return;

		s[u]=1;

		if(u==dest)
			return;


		for(v=1;v<=n;v++)
		{
			if(s[v]==0)
			{
				if(d[u]+cost[u][v]<d[v])
				{
				   d[v]=d[u]+cost[u][v];
				   p[v]=u;
				}
			}
		}
	}
}



///Function Name : import
///Input         : starting address of Hardware and Software items list
///return type   : void
///Description   : Provides options for Importing the Items from differnt branches based on Dijkstras Minimum path algorithm


void import(COMPUTER* start,SOFTWARE* soft)
{
    int op,destn;
    i=1;
    COMPUTER* temp=NULL;
    temp=start;
    system("cls");

    printf("\n ---------------------------LAPTOPS---------------------- ITEMS REMAINING\n\n");

    while(temp!=NULL)
    {
        printf(" Option:%d %s%s\n",i,temp->brand,temp->name);
        printf("\n\t\t\t\t\t\t\t\t%d\n\n",temp->item);
        temp=temp->next;
        i++;
    }

    STORAGE* t2=NULL;
    t2=get_pend();

    printf("\n -------------------------PENDRIVES---------------------- ITEMS REMAINING\n\n");

    while(t2!=NULL)
    {
        printf(" Option:%d %s\n",i,t2->name);
        printf("\n\t\t\t\t\t\t\t\t%d\n\n",t2->item);
        t2=t2->next;
        i++;
    }

    STORAGE* t3=NULL;
    t3=get_hd();

    printf("\n -------------------------HARDDISKS----------------------- ITEMS REMAINING\n\n");

    while(t3!=NULL)
    {
        printf(" Option:%d %s\n",i,t3->name);
        printf("\n\t\t\t\t\t\t\t\t%d\n\n",t3->item);
        t3=t3->next;
        i++;
    }

    SOFTWARE* t;
    t=soft;

    printf("\n -----------------------SOFTWARE PRODUCTS------------------ ITEMS REMAINING\n\n");

    while(t!=NULL)
    {
        printf(" Option:%d %s\n",i,t->name);
        printf("\n\t\t\t\t\t\t\t\t%d\n\n",t->item);
        t=t->next;
        i++;
    }
    printf("\n ---------------------------------------------------------------------------\n");

    printf("\n\n Enter the option of item ..to import\n ");
    scanf("%d",&op);

    while(op>45 || op<0)
    {
        MessageBox(0,"Invalid choice","TECH CLOUD",MB_OK);
        printf("\n Enter your choice again\n ");
        scanf("%d",&op);
    }

    printf("\n\n Select the place 'from where' you want to import the item \n ");
    printf("\n 1->Hubli\n 2->Bengaluru\n 3->Mumbai\n 4->Chennai\n 5->Hyderabad\n ");

    /*DIJKTRAS shortest path algorithm*/
	int n,cost[10][10],i,j,d[10],p[10],source;

	n=5;

	FILE* fp;
	fp=fopen("Distance.txt","r");
	if(fp==NULL)
    {
        MessageBox(0,"Distance file not found ","TECH CLOUD",MB_OK);
        exit(0);
    }

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			fscanf(fp,"%d",&cost[i][j]);
		}
	}

	fclose(fp);

    scanf("%d",&source);

    while(source>5 || source<0)
    {
        MessageBox(0,"Invalid choice","TECH CLOUD",MB_OK);
        printf("\n Enter your choice again\n ");
        scanf("%d",&source);
    }

	dijkstras(n,cost,source,j,d,p);

    printf("\n\n Select the place 'where' you want to import the item \n");
    printf("\n 1->Hubli\n 2->Bengaluru\n 3->Mumbai\n 4->Chennai\n 5->Hyderabad\n ");
    scanf("%d",&destn);


    while(destn>5 || destn<0)
    {
        MessageBox(0,"Invalid choice","TECH CLOUD",MB_OK);
        printf(" Enter your choice again\n ");
        scanf("%d",&destn);
    }


    int item;
    char name[60];
    temp=start;
    system("cls");
    i=1;
    while(temp!=NULL)
    {
        if(op==i)
        {
            temp->item++;
            strcpy(name,temp->name);
            item=temp->item;
        }
        temp=temp->next;
        i++;
    }

    STORAGE* t6=NULL;
    t6=get_pend();
    while(t6!=NULL)
    {

        printf(" Option:%d %s\n",i,t6->name);
        if(op==i)
         {
            t6->item--;
            strcpy(name,t6->name);
            item=t6->item;
        }
        t6=t6->next;
        i++;
    }

    STORAGE* t7=NULL;
    t7=get_hd();
    while(t7!=NULL)
    {

        printf(" Option:%d %s\n",i,t7->name);
        if(op==i)
         {
            t7->item--;
            strcpy(name,t7->name);
            item=t7->item;
        }
        t7=t7->next;
        i++;
    }

    t=soft;

    while(t!=NULL)
    {

        printf(" Option:%d %s\n",i,t->name);
        if(op==i)
        {
            t->item++;
            strcpy(name,t->name);
            item=t->item;
        }
        t=t->next;
        i++;
    }

     system("cls");
     printf("\n -----------------------------------------------------------------------\n");
     printf(" \t\t\t\tImport\t\t\t\n");
     printf("-----------------------------------------------------------------------\n");

     MessageBox(0," Item Imported from Required Destination ","TECH CLOUD",MB_OK);
     printpath(d,p,n,source,destn);
     printf("\n Item Details           : \n");
     printf("\n Item                   : %s",name);
     printf("\n The items after import : %d\n",item);

     printf("\n\n Enter any key to go back\n ");
     getch();
}
