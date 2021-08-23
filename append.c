#include <stdio.h>
int main()
{
   FILE * fp;
   if (fp = fopen("abc.txt", "a")){
      printf("File opened successfully ");
      char arr[]="durga";
      fprintf(fp,arr);    
   }
   else
   printf("Error");
   fclose(fp);
   return 0;
}
