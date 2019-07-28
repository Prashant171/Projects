
#include "computer.h"

int  verify_user()
{
    int ch,ch1,p,flag=0;
    USER us;
    FILE *fp;
    char notification[70];
    char user_nm[30],password[30];

    system("cls");
    printf("\n============================================================================\n");
    printf("\n                                 WELCOME                                 \n");
    printf("\n            To start shopping at TECH CLOUD , Login or SignUp           \n");
    printf("\n============================================================================\n\n");

    printf("\n Is this the Customer or the Owner....!!!!\n");
    printf("\n 1->Customer");
    printf("\n 2->Owner");
    printf("\n 3->Exit\n\n");

    printf("\n Enter your choice\n ");
    scanf("%d",&ch);

    switch(ch)
    {
      case 1 : system("cls");u=1;
               printf("\n-----------------------------------------------------------------------------");
               printf("\n                                WELCOME                                 ");
               printf("\n-----------------------------------------------------------------------------\n");
               printf("\n Please Login to start shopping.... \n");

               printf("\n 1->Login \n 2->Signup\n 3->Exit\n");
               printf("\n enter your choice\n ");
               scanf("%d",&ch1);

               switch(ch1)
               {
                 case 1 :
                          fp=fopen("cloud.txt","r");

                          if(fp==NULL)
                          {
                              MessageBox(0, "No user registered", "TECH CLOUD", MB_OK);
                              fclose(fp);
                              p=verify_user();
                              return p;
                           }

                           system("cls");

                           printf("\n-------------------------------------------------------------------------------");
                           printf("\n                           CUSTOMER LOGIN PAGE                                 ");
                           printf("\n-------------------------------------------------------------------------------\n");

                           printf("\n Username : ");
                           scanf("%s",user_nm);
                           printf("\n Password : ");
                           scanf("%s",password);

                           while(1)
                           {
                              if(feof(fp))
                                break;


                              fscanf(fp," %s %s ",&us.username,&us.password);
                              if((strcmp(us.username,user_nm)==0) && (strcmp(us.password,password)==0))
                              {
                                 strcpy(username,user_nm);
                                 strcpy(passwd,password);
                                 flag=1;
                                 fclose(fp);
                                 printf("\n Logging into your account........");
                                 printf("\n To continue, enter any key...\n ");
                                 getch();
                                 return 1;
                              }
                           }

                           if(flag==0)
                           {
                              MessageBox(0, "Invalid username or password", "TECH CLOUD", MB_OK);
                              fclose(fp);
                              p=verify_user();
                              return p;
                           }
                          break;

                 case 2 : system("cls");
                          printf("\n-------------------------------------------------------------------------------");
                          printf("\n                          CUSTOMER SIGNUP PAGE                                  ");
                          printf("\n-------------------------------------------------------------------------------\n");

                          printf("\n Username : ");
                          scanf("%s",us.username);
                          printf("\n Password : ");
                          scanf("%s",us.password);

                          fp=fopen("cloud.txt","a");
                          fprintf(fp," %s %s ",us.username,us.password);

                          fclose(fp);
                          printf("\n Logging into your account........");
                          printf("\n To continue, enter any key...\n ");
                          getch();
                          return 1;
                          break;

                 case 3 :
                          MessageBox(0, "Exiting from Customer Login Page", "TECH CLOUD", MB_OK);
                          p=verify_user();
                          return p;
                          break;

                default : MessageBox(0, "Invalid choice", "TECH CLOUD", MB_OK);
                          p=verify_user();
                          return p;
                          break;

                   }
                 break;

    case 2 :     system("cls");u=2;
                 printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
                 printf("\n                                WELCOME                                 \n");
                 printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
                 printf("\n Please Login to import and export items \n");
                 printf("\n 1->Login \n 2->Exit \n");

                 printf("\n enter your choice\n ");
                 scanf("%d",&ch1);

                 switch(ch1)
                 {
                   case 1 :
                           system("cls");
                           printf("\n-------------------------------------------------------------------------------");
                           printf("\n                             OWNER LOGIN PAGE                                 ");
                           printf("\n-------------------------------------------------------------------------------\n");
                           printf("\n For testing purpose.....");
                           printf("\n *Username : ph");
                           printf("\n *Password : prakashbh\n\n");

                           strcpy(owner_name,"ph");
                           strcpy(owner_password,"prakashbh");

                           printf("\n Username : ");
                           scanf("%s",user_nm);
                           printf("\n Password : ");
                           scanf("%s",password);

                           if((strcmp(owner_name,user_nm)==0) && (strcmp(owner_password,password)==0))
                           {
                             flag=1;
                             printf("\n\n Logging into your account........");
                             printf("\n To continue, enter any key...\n ");
                             getch();

                             system("cls");
                             FILE *fp;
                             fp=fopen("notification.txt","r");
                             if(fp!=NULL)
                             {
                                 MessageBox(0, " You got some notifications", "TECH CLOUD", MB_OK);
                                 printf("\n Following items need to be imported ..\n\n");
                                 while(1)
                                 {
                                     fscanf(fp,"%s",&notification);
                                     if(feof(fp))
                                        break;
                                     printf("\n %s",notification);
                                 }
                                 printf("\n\n To continue ,enter any key\n");
                                 getch();
                             }

                             fclose(fp);


                             return 1;
                            }

                            if(flag==0)
                            {
                              MessageBox(0, "Invalid username or password\n\t!!!Try again !!!", "TECH CLOUD", MB_OK);
                              p=verify_user();
                              return p;
                             }
                            break;

                   case 2:
                            MessageBox(0, "Exiting from Owner Login Page", "TECH CLOUD", MB_OK);
                            p=verify_user();
                            return p;

                            break;
                 default :
                            MessageBox(0, "Invalid choice", "TECH CLOUD", MB_OK);
                            p=verify_user();
                            return p;
                            break;
                   }
                break;

     case 3:
                MessageBox(0, "You are exiting from start Page", "TECH CLOUD", MB_OK);
                printf("\a\a");
                MessageBox(0, "Thank You !! Visit Again!!", "TECH CLOUD", MB_OK);
                break;

     default :  MessageBox(0, "Invalid choice", "TECH CLOUD", MB_OK);
                p=verify_user();
                return p;
                break;
    }

     return 0;
}
