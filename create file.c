#include <stdio.h>
int main(){
   FILE * file;
   if (file = fopen("abc.txt", "w"))
   {
      printf("File is creatd ");
      printf("done\n");
   }
   else
   printf("Error");
   fclose(file);
   return 0;
}
