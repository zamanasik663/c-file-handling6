//reading from a file using fscanf() function

#include<stdio.h>
struct emp{
   int id;
   char name[50];
   float salary;
};

int main()
{
   
    struct emp e;
    FILE *fp;
    fp = fopen("G:\\file-handling\\file-handling5\\fprintf.txt","r");
    if(fp == NULL){
      printf("file can't open\n");
      
    }
    
    while(fscanf(fp,"%s %d %f",&e.name,&e.id,&e.salary) != EOF){
      printf("%s\t%d\t%f\n",e.name,e.id,e.salary);
    }
   fclose(fp);

    return 0;
}