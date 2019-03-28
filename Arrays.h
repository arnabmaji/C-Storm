//C-Storm, an extensive library for C.
//This header file is a part of C-Storm project.
#include<stdio.h>

void printIntegerArray(int intArray[], int len){
  printf("\n{");
  for(int i=0;i<len;i++){
    if(i==len-1){
      printf("%d" ,intArray[i]);
    } else{
      printf("%d, ",intArray[i]);
    }
  }
  printf("}\n");
}

//******************************************************************************

int getStringLength(char string[]){
  int len=0;
  while (string[len++]!='\0'){}
  return len-1;
}

//******************************************************************************
