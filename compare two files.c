#include <stdio.h>
int main()
{
   FILE * fp1=fopen("abc.txt","r");
   FILE * fp2=fopen("xyz.txt","a");
    char ch1,ch2;
   if(fp1==NULL||fp2==NULL)
   {
       printf("file doesnot exist\n");
       return 0;
   }
   else
   {
       while((ch1=fgetc(fp1)!=EOF)&&(ch2=fgetc(fp2)!=EOF))
       {   
           if(ch1!=ch2)
           {
               printf("files are different\n");
               return(0);
           }
       }
       printf("files are same\n");
   } 
   fclose(fp1);
   fclose(fp2); 
   return 0;
}
