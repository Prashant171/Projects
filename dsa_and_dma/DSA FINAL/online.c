#include "computer.h"


///Function Name : online_hardwr
///Description   : Function Provides search of different hardware products and they can be ordered
///Input Params  : start,order,soft,wake
///Return        : updated wake


QUEUE* online_hardwr(COMPUTER* start,ORDER* order,SOFTWARE* soft,QUEUE* wake)
{
   int choice=0,ch1=0,op=0,ch2=0;
    int i=1,flag=0;
    system("cls");
    printf(" -------------------------------------------------------------------\n");
    printf("                        HARDWARE SECTION                    \n");
    printf(" -------------------------------------------------------------------\n");
    printf(" Shop by category\n\n");

    printf(" 1->LAPTOPS\n");
    printf(" 2->PENDRIVES\n");
    printf(" 3->HARDDISKS\n\n ");

    printf("\n Enter your choice\n ");
    scanf("%d",&ch1);

   if (ch1==1)
    {
        system("cls");
        printf(" -------------------------------------------------------------------\n");
        printf("                       LAPTOPS SECTION                    \n");
        printf(" -------------------------------------------------------------------\n");
        printf("\n Latest laptop models are here......\n\n");
        printf(" Search for...\n\n");

        printf(" 1-> BRAND\n");
        printf(" 2-> PROCESSOR NAME\n");
        printf(" 3-> PRICE\n");
        printf(" 4-> Exit\n\n ");

        printf("\n Enter your choice\n ");
        scanf("%d",&choice);

        if(choice==1)
        {
         system("cls");
         printf(" Search for...\n\n");
         printf(" LENOVO\n ACER\n HP\n DELL\n ALIENWARE\n\n");
         COMPUTER* temp;
         temp=start;
         char brand[20];
         int i=1;
         flag=0;

         printf(" Enter the Brand Name\n ");
         scanf("%s",brand);

         system("cls");

         while(temp!=NULL)
         {
             if(strcmpi(temp->name,brand)==0)
             {
                  printf("\n Option :%d\n\n NAME\t\t : %s \n Processor_name\t : %s CORE %s %s\n HDD_capacity\t : %s",i,temp->name,temp->brand,temp->processor_name,temp->processor_generation,temp-> HDD_capacity);
                  printf("\n Ram\t\t : %s \n Graphics\t : %s\n Operating System: %s\n PRICE\t\t : Rs%f\n\n",temp->ram,temp->Graphics,temp->Operating_System,temp->price);
                  flag=1;
             }
             temp=temp->next;
             i++;

         }

         if (flag==0)
         {
             MessageBox(0, "Invalid choice", "TECH CLOUD", MB_OK);
             online_hardwr(start,order,soft,wake);
         }

         printf(" To continue, enter any key...\n ");
         getch();
       }

       else if(choice==2)
       {
         system("cls");
         printf(" Search for...\n\n");
         printf("\n i3\n i5\n i7\n\n");

         COMPUTER* temp;
         temp=start;
         char processor_name[10];
         int i=1;
         flag=0;

         printf(" Enter processor_name\n ");
         scanf("%s",processor_name);

         system("cls");

         while(temp!=NULL)
         {
             if(strcmpi(temp->processor_name,processor_name)==0)
             {
                  printf("\n Option :%d\n\n NAME\t\t : %s \n Processor_name\t : %s CORE %s %s\n HDD_capacity\t : %s",i,temp->name,temp->brand,temp->processor_name,temp->processor_generation,temp-> HDD_capacity);
                  printf("\n Ram\t\t : %s \n Graphics\t : %s\n Operating System: %s\n PRICE\t\t : Rs%f\n\n",temp->ram,temp->Graphics,temp->Operating_System,temp->price);
                  flag=1;
             }
             temp=temp->next;
             i++;

         }

         if (flag==0)
         {
             MessageBox(0, "Invalid choice", "TECH CLOUD", MB_OK);
             online_hardwr(start,order,soft,wake);
         }

         printf(" To continue, enter any key...\n\n ");
         getch();
       }


       else if(choice==3)
       {
         int low=0,high=0;

         system("cls");

         printf(" Enter the price range above 21000 and below 199999\n");

         printf(" Enter lower range\n ");
         scanf("%d",&low);

         printf(" Enter higher range\n ");
         scanf("%d",&high);

         COMPUTER* temp;
         temp=start;

         int i=1;
         flag=0;
         system("cls");

         while(temp!=NULL)
         {
             if(temp->price>=low&&temp->price<=high)
             {
                  printf("\n Option :%d\n\n NAME\t\t : %s \n Processor_name\t : %s CORE %s %s\n HDD_capacity\t : %s",i,temp->name,temp->brand,temp->processor_name,temp->processor_generation,temp-> HDD_capacity);
                  printf("\n Ram\t\t : %s \n Graphics\t : %s\n Operating System: %s\n PRICE\t\t : Rs%f\n\n",temp->ram,temp->Graphics,temp->Operating_System,temp->price);
                  flag=1;

             }
             temp=temp->next;
             i++;

         }

         if (flag==0)
         {
             MessageBox(0, "Item not found for the range you entered", "TECH CLOUD", MB_OK);
             online_hardwr(start,order,soft,wake);
         }

         printf(" To continue, enter any key...\n ");
         getch();
       }
       else if(choice==4)
       {
         online(start,order,soft,wake);;
       }
       else
       {
         MessageBox(0,"Invalid choice","TECH CLOUD",MB_OK);
         online_hardwr(start,order,soft,wake);
       }

       printf("\n Your choice?\n ");
       scanf("%d",&op);

       if(op<=0||op>30)
       {
         MessageBox(0,"Invalid choice","TECH CLOUD",MB_OK);
         printf("\n Enter any key to go back\n ");
         getch();
         online(start,order,soft,wake);
       }

       system("cls");
       printf(" Add to Cart?\n\n");

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
         QUEUE* now;
         now=wake;

         int i;
         temp=start;

         i=1;
         while(temp!=NULL)
         {
             if(i==op)
             {
                 if(now==NULL)
                 {
                      now=(QUEUE*)malloc(sizeof(QUEUE));
                     strcpy(now->name,temp->name);
                     now->price=temp->price;
                     now->next=NULL;
                     wake=now;
                 }
                 else
                 {
                     while(now->next!=NULL)
                      now=now->next;
                      now->next=(QUEUE*)malloc(sizeof(QUEUE));
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
         online(start,order,soft,wake);
        }

         system("cls");
         printf(" Item Added to Cart\n\n");
         printf(" To continue, enter any key...\n ");
         getch();

        int other=0;

        system("cls");

        printf("\n Do you want to Continue Shopping?\n");
        printf(" 1->YES\n 2->NO\n ");
        scanf("%d",&other);
        if(other==1)
         online(start,order,soft,wake);

  }

  else if(ch1==2)
  {
        system("cls");
        printf(" -------------------------------------------------------------------\n");
        printf("                           PENDRIVES SECTION                         \n");
        printf(" -------------------------------------------------------------------\n");

        STORAGE* pend=NULL;
        pend=get_pend();

        STORAGE* temp=NULL;
        temp=pend;

        while(temp!=NULL)
        {
            printf(" Option :%d\n Name  : %s\n Price : %f\n\n",i,temp->name,temp->price);
            temp=temp->next;
            i++;

        }

        int cho=0,op=0;
        printf(" Your choice?\n ");
        scanf("%d",&op);

        if(op<=0||op>5)
        {
            MessageBox(0, "Invalid choice", "TECH CLOUD", MB_OK);
            printf("\n Enter any key to go back\n ");
            getch();
            online(start,order,soft,wake);
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
            QUEUE* now;
            now=wake;
            int i;
            temp=pend;

            i=1;
            while(temp!=NULL)
            {
                if(i==op)
                {
                    if(now==NULL)
                    {
                        now=(QUEUE*)malloc(sizeof(QUEUE));
                        strcpy(now->name,temp->name);
                        now->price=temp->price;
                        now->next=NULL;
                        wake=now;
                    }
                    else
                    {
                        while(now->next!=NULL)
                            now=now->next;
                        now->next=(QUEUE*)malloc(sizeof(QUEUE));
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

        system("cls");
        printf(" Item Added to Cart\n\n");
        printf(" To continue, enter any key...\n ");
        getch();

        int other=0;

        system("cls");
        printf("\n Do you want to Continue Shopping?\n");
        printf(" 1->YES\n 2->NO\n ");
        scanf("%d",&other);
        if(other==1)
            online(start,order,soft,wake);

    }

    else if(ch1==3)
    {
        system("cls");
        printf(" -------------------------------------------------------------------\n");
        printf("                          HARDDISK SECTION                        \n");
        printf(" -------------------------------------------------------------------\n");


        STORAGE* hd=NULL;
        hd=get_hd();

        STORAGE* temp=NULL;
        temp=hd;

        while(temp!=NULL)
        {

            printf(" Option :%d\n Name  : %s\n Price : %f\n\n",i,temp->name,temp->price);
            temp=temp->next;
            i++;

        }

        printf(" To continue, enter any key...\n\n ");
        getch();

        int cho=0,op=0;
        printf("\n Your choice?\n ");
        scanf("%d",&op);

        if(op<=0||op>5)
        {
            MessageBox(0, "Invalid choice", "TECH CLOUD", MB_OK);
            printf("\n Enter any key to go back\n ");
            getch();
            online(start,order,soft,wake);
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
            QUEUE* now;
            now=wake;
            int i;
            temp=hd;

            i=1;
            while(temp!=NULL)
            {
                if(i==op)
                {
                    if(now==NULL)
                    {
                        now=(QUEUE*)malloc(sizeof(QUEUE));
                        strcpy(now->name,temp->name);
                        now->price=temp->price;
                        now->next=NULL;
                        wake=now;
                    }
                    else
                    {
                        while(now->next!=NULL)
                            now=now->next;
                        now->next=(QUEUE*)malloc(sizeof(QUEUE));
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

        system("cls");
        printf(" Item Added to Cart\n\n");
        printf(" To continue, enter any key...\n ");
        getch();

        int other=0;

        system("cls");
        printf("\n Do you want to Continue Shopping?\n");
        printf(" 1->YES\n 2->NO\n ");
        scanf("%d",&other);
        if(other==1)
            online(start,order,soft,wake);

    }

    else if(ch1==4)
        online(start,order,soft,wake);

    else
    {
        MessageBox(0,"Invalid choice","TECH CLOUD",MB_OK);
        online_hardwr(start,order,soft,wake);
    }

   return wake;
}


///Function Name :  online_softwr
///Description   :  Function provides different software services and can be ordered
///Input Params  :  soft,order,start,wake
///Return        :  updated wake


QUEUE* online_softwr(SOFTWARE* soft,ORDER* order,COMPUTER* start,QUEUE* wake)
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

    printf(" To continue, enter any key...\n ");
    getch();

    int cho=0,op=0;
    printf("\n Your Choice?\n ");
    scanf("%d",&op);

    if(op<=0||op>5)
    {
        MessageBox(0, "Invalid choice", "TECH CLOUD", MB_OK);
        printf("\n Enter any key to go back\n ");
        getch();
        online(start,order,soft,wake);
    }

    system("cls");
    printf("\n Add to cart?\n");

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

    printf(" 1->YES\n 2->NO\n ");

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
                if(now==NULL)
                {
                    now=(QUEUE*)malloc(sizeof(QUEUE));
                    strcpy(now->name,temp->name);
                    now->price=temp->price;
                    now->next=NULL;
                    wake=now;
                }
                else
                {
                    while(now->next!=NULL)
                        now=now->next;
                    now->next=(QUEUE*)malloc(sizeof(QUEUE));
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
        online(start,order,soft,wake);
    }

    int other=0;

    system("cls");
    printf("\n DO u want to Continue Shopping?\n");
    printf(" 1->YES\n 2->NO\n ");
    scanf("%d",&other);

    if(other==1)
            online(start,order,soft,wake);

    return wake;

}


///Function Name : display
///Description   : function displays ordered items
///Input Params  : wake
///Return        : void


void display(QUEUE* wake)
{
    QUEUE* temp;
    temp=wake;
    int i=1;

    system("cls");

    if(temp==NULL)
    {
        MessageBox(0, " You have not ordered any items ", "TECH CLOUD", MB_OK);
    }
    else
    {
        while(temp!=NULL)
        {
            printf(" %d\n Name  : %s\n Price : %f\n\n",i,temp->name,temp->price);
            i++;
            temp=temp->next;
        }
    }

    printf(" To continue, enter any key...\n ");
    getch();

}



///Function Name : serve
///Description   : Function serves the items in the Cart
///Input Params  : wake
///Return        : updated wake


QUEUE* serve(QUEUE* wake)
{
    QUEUE* temp;
    temp=wake;

    if(temp==NULL)
    {
        printf(" The Cart is Empty\n\n");
        printf("\n\n To continue, enter any key...\n ");
        getch();
    }
    else
    {
        wake=wake->next;
        temp->next=NULL;
        buy_online(temp);
        free(temp);
    }

    return wake;
}



///Function Name : buy_online
///Description   : Function accepts the user information and generates the Bill
///Input Params  : order
///Return        : void


void buy_online(QUEUE* order)
{
    float total_bill[30],tot_bill=0;
    int discount[30],i=0,flag=0;
    AD add;

    system("cls");
    add=get_shipping_address(add);

    system("cls");
    get_payment_method(&flag);

    system("cls");

    printf("\n Order is placed Successful\n");
    printf("\n Enter any key to generate the bill....\n");
    getch();

    system("cls");
    QUEUE* curr;
    curr=order;

    while(curr!=NULL)
    {
        discount[i]=discnt();
        total_bill[i]=curr->price-(discount[i]*curr->price/100);
        curr=curr->next;
        i++;
    }

    QUEUE* cur;
    cur=order;
    int k=0;

    while(cur!=NULL)
    {
        k++;
        cur=cur->next;
    }
    rtrn();

    printf(" ------------------------------------------------------------------------------\n");
    printf("                                TECH CLOUD                                  \n");
    printf(" ------------------------------------------------------------------------------\n");
    printf(" BILL NO              : %d                                              \n\n",bill);
    printf(" NAME                 : %s                                              \n\n",add.name);
    printf(" Contact Number       : %s                                            \n\n",add.phoneno);
    printf(" Total Items Purchased: %d                                                 \n\n",k);
    curr=order;
    i=0;
    while(curr!=NULL)
    {
        printf(" NAME                 : %s                                   \n\n",curr->name);
        printf(" Price                : %f                                  \n\n",curr->price);
        printf(" Discount             : %d %%                               \n\n",discount[i]);
        printf(" Bill                 : %f                                \n\n",total_bill[i]);
        tot_bill=tot_bill+total_bill[i];
        curr=curr->next;
        i++;
    }
    printf(" ==============================================================================\n");
    printf(" TOTAL BILL           : %f                                          \n\n",tot_bill);
    printf(" ==============================================================================\n");

    printf("\n\n ************** SHIPPING ADDRESS ***********\n\n");
    display_address(&add);
    printf("\n\n");
    printf(" ------------------------------------------------------------------------------\n\n\n");

    printf("\n Payment method  : ");
    if(flag==1)
    {
        printf(" Used Credit/Debit Cards\n");
    }
    else
        printf(" Payment on Delivery\n");

    bill++;
    MessageBox(0, "Order Placed !!\nYour item Will be delivered Within 8 days!!", "TECH CLOUD", MB_OK);
    printf("\a\a");
    MessageBox(0, "KEEP SHOPPING! :) ", "TECH CLOUD", MB_OK);
    order=NULL;
    printf("\n\n To continue, enter any key...\n ");
    getch();
}


AD get_shipping_address(AD add)
 {
    FILE *fp;
    int ch,i=1,num,flag=0;
    fp=fopen("address.txt","r");
    if(fp!=NULL)
    {
        while(!feof(fp))
        {
            fread(&add,sizeof(AD),1,fp);
            if(feof(fp))
                break;

            if((strcmp(add.username,username)==0) && (strcmp(add.password,passwd)==0))
            {
                printf("\n Adress %d :\n",i);
                display_address(&add);printf("\n");
                i++;
                flag=1;
            }
        }

    }
    fclose(fp);
    if(flag==1)
    {
        printf("\n 1->Select an existing shipping address");
        printf("\n 2->Add a new shipping address\n");
        scanf("%d",&ch);
        if(ch<1 && ch>2)
            MessageBox(0, "Invalid choice", "TECH CLOUD", MB_OK);
    }
    else
    {
        printf("\n No address found\n");
        printf("\n 2->Add a new shipping address\n ");
        scanf("%d",&ch);
        if(ch!=2)
            MessageBox(0, "Invalid choice", "TECH CLOUD", MB_OK);
    }

    switch(ch)
    {
        case 1 : printf("\n Enter the address number\n");
                 scanf("%d",&num);
                 add=getdata(num);
                 system("cls");

                 printf("\n\n Selected shipping address is\n");
                 display_address(&add);
                 break;
        case 2 : add=add_new_address();
                 break;
       default : MessageBox(0, "Invalid choice", "TECH CLOUD", MB_OK);
    }
    return add;
 }


AD getdata(int num)
{
    FILE *fp;int i=1;AD add;
    fp=fopen("address.txt","r");
    if(fp!=NULL)
    {
        while(1)
        {
            fscanf(fp," %s %s %s %s %s %d %s %s %s ",add.username,add.password,add.city,add.street,add.flatno,&add.pincode,add.state,add.name,add.phoneno);
            if(feof(fp))
                break;
            if(i==num)
                return add;
            printf("\nAddress %d\n",i);
            i++;
        }
    }
    fclose(fp);
    return add;
}


AD add_new_address()
{
    AD add;
    FILE *fp;

    fp=fopen("address.txt","a");

    read_address(&add);
    strcpy(add.username,username);
    strcpy(add.password,passwd);

    fprintf(fp," %s %s %s %s %s %d %s %s %s ",add.username,add.password,add.city,add.street,add.flatno,add.pincode,add.state,add.name,add.phoneno);

    fclose(fp);
    return add;

}


void read_address(AD *add)
{
    printf(" Enter the following Details\n\n");
    printf(" Name: ");
    scanf("%s",add->name);
    printf("\n Contact Number: ");
    scanf("%s",add->phoneno);
    printf("\n City: ");
    scanf("%s",add->city);
    printf("\n Locality,area or street: ");
    scanf("%s",add->street);
    printf("\n flat no ,building name: ");
    scanf("%s",add->flatno) ;
    printf("\n pincode: ");
    scanf("%d",&add->pincode);
    printf("\n State: ");
    scanf("%s",add->state);
}

void display_address(AD *add)
{
    printf("\n %s",add->name);
    printf("\n %s",add->flatno);
    printf("\n %s",add->street);
    printf("\n %s",add->city);
    printf("\n %s",add->state);
    printf("\n %s",add->phoneno);
}
