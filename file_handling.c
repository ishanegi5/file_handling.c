#include<stdio.h>
#include<stdlib.h>
int main(){ 
  char ch[20];
  FILE *fptr;
  fptr=fopen("xyz.txt","a");
  fptr=fopen("D:\\xyz.txt","a");
  if(fptr==NULL)
  {
    printf("Error! The filedoes not exist.");
    exit(0);
  }
  printf("Enter your friends name: ");
  fgets(ch,20,stdin);
  fprintf(fptr,"%s",ch);
  fclose(fptr);
    return 0;
}
