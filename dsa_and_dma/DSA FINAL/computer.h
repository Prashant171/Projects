#ifndef COMPUTER_H_INCLUDED
#define COMPUTER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <time.h>

struct login
{
    char username[30];
    char password[30];

};

typedef struct login USER;

struct computer
{
    char name[30];
    char brand[10];
    char model[55];
    char processor_name[20];
    char processor_generation[10];
    char ram[7];
    char HDD_capacity[50];
    char Graphics[40];
    char Operating_System[30];
    float price;
    int item;
    struct computer* next;
};

typedef struct computer  COMPUTER;

struct software
{
    char name[100];
    int no_of_pcs;
    int version;
    int subscription_validity;
    char software[50];
    float price;
    int item;
    struct software* next;
};

typedef struct software SOFTWARE;

struct queue
{
    char name[100];
    float price;
    struct queue* next;
};

typedef struct queue QUEUE;

struct order
{
    char name[100];
    float price;
    struct order* next;
};

typedef struct order ORDER;

struct storage
{
    char name[40];
    int capacity;
    float price;
    int item;
    struct storage* next;
};

typedef struct storage STORAGE;

struct search_computer
{
    char name[100];
    float price;
    struct search_computer* next;
};

typedef struct search_computer SEARCH;

struct address
{
    char username[20];
    char password[20];
    char city[15];
    char street[20];
    char flatno[20];
    int pincode;
    char state[20];
    char name[20];
    char phoneno[10];
};

typedef struct address AD;

struct debit_card_details
{
    double card_number;
    int mm;
    int yyyy;
    int CVV;
};

typedef struct debit_card_details ATM;

char owner_name[10];
char owner_password[15];
char username[30];
char passwd[30];
int i,j,a[30],t=0,u;
char array[25] = {'\0'};
int bill=1;

int verify_user();
COMPUTER* getcomp();
void selec(COMPUTER *,ORDER *,SOFTWARE *,QUEUE *);
SOFTWARE* getsoftware();
void rtrn();
QUEUE* online_softwr(SOFTWARE* soft,ORDER* ORDER,COMPUTER* start,QUEUE* wake);
ORDER* discard(ORDER* order,int opn);
void search(char* key,COMPUTER* start,SOFTWARE* soft);
STORAGE* get_pend();
STORAGE* get_hd();
QUEUE* online_hardwr(COMPUTER* start,ORDER* order,SOFTWARE* soft,QUEUE* wake);
void online(COMPUTER* start,ORDER* order,SOFTWARE* soft,QUEUE* wake);
void display(QUEUE* wake);
void software_sec(SOFTWARE* soft,ORDER* order,COMPUTER* start,QUEUE* wake);
QUEUE* serve(QUEUE* wake);
void buy_online(QUEUE* order);
void dijkstras(int n,int cost[10][10],int source,int dest,int d[],int p[]);
void import(COMPUTER* start,SOFTWARE* soft);
void printpath(int d[],int p[],int n,int source,int destn);
void export(COMPUTER* start,SOFTWARE* soft);
void search(char* key,COMPUTER* start,SOFTWARE* soft);
int cont(ORDER* order);
int discnt();
void buy(ORDER* order,COMPUTER* start,SOFTWARE* soft,QUEUE* wake);
void hardware_sec(COMPUTER* start,ORDER* order,SOFTWARE* soft,QUEUE* wake);
void spot(COMPUTER* start,ORDER* order,SOFTWARE* soft,QUEUE* wake);
void timendate(char* m);
int find_m(char m[4]);
int dis(int m);
void prnt(int m);
char * getplace(int n);
AD get_shipping_address(AD add);
AD add_new_address();
AD getdata(int num);
void read_address(AD *add);
void display_address(AD *add);




#endif // COMPUTER_H_INCLUDED







