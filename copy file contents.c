#include<stdio.h>
int main()
{
   FILE * fp1=fopen("abc.txt","r");
   FILE * fp2=fopen("xyz.txt","a");
   if(fp1==NULL||fp2==NULL)
   {
       printf("it doesn't contain file");
       return 0;
   }
   else
   {
       char arr[100];
       fgets(arr,50,fp1);
       fputs(arr,fp2);
       printf("done\n");  
   }
   fclose(fp1);
   fclose(fp2);  
   return 0;
}
