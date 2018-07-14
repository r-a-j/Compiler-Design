// Created on 14-July-2018 11:53 IST
// Created By Pawar Raj - Git Usename : r-a-j
// Program to checking weather the entered word can be accepted as an identifier or not.

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
  // Declarations --------------------

  char identifier[100];
  int i;
  _Bool valid = 0;

  // End of Declarations------------------

  printf("Welcome to the program of checking the identifier...\n");
  printf("\nEnter the identifier : ");
  gets(identifier);

  /*
  //Printing the entered string
  for(i=0 ; i<strlen(identifier) ; i++)
  {
    printf("%c",identifier[i]);
  }
  */

  // Prefoming the checking of the rules of the identifier

  for(i=0 ; i<strlen(identifier) ; i++)
  {
    if((identifier[0] >= 'a') || (identifier[0] >= 'z') || (identifier[0] >= 'A') || (identifier[0] >= 'Z'))
    {
      valid = 1;
    }
  }

  if(valid)
  {
    printf("\nYes Valid ");
    valid = 0;
  }
  else
  {
    printf("\nNot Valid ");
  }

  getchar();
}
