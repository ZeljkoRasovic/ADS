#include<stdio.h>
#include<stdlib.h>

void main(int argc,char** argv)
{
 char index=-1,n=3,l=5,i=0;
 char* array=calloc(n,sizeof(char));
 
 printf("argc: %d\n",argc);
 for(i=0;i<argc;++i)
 {
  printf("arg %d: \"%s\"\n",i,argv[i]);
 }

 for(i=0;i<l;++i)
 {
  array[i]=rand()%9+1;
 }

 printf("Array:");
 for(i=0;i<l;++i)
 {
  printf(" %d ",array[i]);
 }
 printf("\n");
 printf("Number we are searching for is %d\n",n);
 for(i=0;i<l;++i)
 {
  if(array[i]==n)
  {
   index=i;
  }
 }

 if(index==-1)
 {
  printf("We could not find that number in a array\n");
 }
 else
 {
  printf("That number is in index position number %d\n",index);
 }

 free(array);
}
