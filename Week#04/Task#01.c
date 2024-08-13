#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct
{
    char name[1000];
    long int phoneNumber;
    char email[1000];
}info;
bool compareNames(char *name1,char *name2)
{
    int counter=0;
    int length=strlen(name1);
    for(int i=0;name1[i]!=0;i++)
    {
        if(name1[i]==name2[i])
        {
            ++counter;
        }
    }
    return (counter==length ? true:false);
}
void add(info *person)
{
    printf("\nEnter Name         : ");
    fflush(stdin);
    scanf("%[^\n]s",person->name);
    printf("Enter phone number : ");
    scanf("%ld",&person->phoneNumber);
    printf("Enter Email        : ");
    scanf("%s",person->email);
}
void Display(info *person)
{
    printf("\nName   : %s",person->name);
    printf("\nNumber : 0%ld",person->phoneNumber);
    printf("\nEmail  : %s\n",person->email);
}
bool nameSearch(info *numbers[],int n,char name[])
{
    for(int i=0;i<n;i++)
    {
        if(compareNames(numbers[i]->name,name))
        {
            Display(numbers[i]);
            return true;
        }
    }
    return false;
}
int main()
{
    int nums;
    printf("Enter number of Contacts : ");
    scanf("%d",&nums);
    info **phoneBook;
    phoneBook = (info**)malloc(nums*sizeof(info*));
    for(int i=0;i<nums;i++)
    {
        phoneBook[i] = (info*)malloc(sizeof(info));
    }
    // Add Contacts :
    for(int i=0;i<nums;i++)
    {
        add(phoneBook[i]);
    }
    // Display Contacts :
    for(int i=0;i<nums;i++)
    {
        Display(phoneBook[i]);
    }
    // Search for any contact in Phone Book
    printf("Enter Name you want to search about :");

    char wantedName[1000];
    scanf("%s",wantedName);
    if(!nameSearch(phoneBook,nums,wantedName))
    {
        printf("Not Existed");
    }
    return 0;
}
