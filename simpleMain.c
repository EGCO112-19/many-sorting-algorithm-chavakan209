#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "bubble.h"
#include "selection.h"
#include "insertion.h"

int main(int argc, char *argv[]){
  int i,N;
  printf("Sort mode : %s\nArgument input :",argv[1]);
  for(i=2;i<argc;i++){
     printf(" %d",atoi(argv[i]));
  }
  printf("\n");
  N=argc-2;
  int *a;
  a=(int*) malloc(sizeof(int)*N);

  for(i=1;i<argc-1;i++){
        a[i-1]=atoi(argv[i+1]);
  }
  if(!strcmp(argv[1],"bubble")) bubble(a,N);
  else if(!strcmp(argv[1], "selection")) selection(a,N);
  else if(!strcmp(argv[1], "insertion")) insertion(a,N);
  else printf("sorting argument error!\n");
  return 0;
}
