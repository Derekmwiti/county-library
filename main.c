/*
country library management system
by Deen
Feb 2022
MIT licence
c89 compiler
*/
#include <stdio.h>
#include <stdlib.h>

int menu ()
{
 int action;
 int action;
 printf("select an action:\n") ;
 printf("1.Add new patron\n") ;
 printf("2.View patrons\n") ;
 printf("3.view books\n") ;
 printf("4.Add New book\n") ;
 printf("Your action: ") ;
 scanf("%d",&action) ;
 return action;
}

int main()
{
printf("county library system!\n");
printf("welcome mr. deen!\n");

printf("you selected action %d",menu());
    return 0;
}
