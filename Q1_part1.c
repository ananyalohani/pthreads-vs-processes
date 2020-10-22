/* 
   Name: Ananya Lohani
   Roll_Number: 2019018 
*/
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int num = 10;

int main(int argc, char *argv[]) 
{
   pid_t pid = fork();
   if(pid == 0)
   {
      for(int i = 0; i < 100; i++)
      {
         num--;
      }
      printf("The value of num = %d in child process.\n", num);
   }
   else
   {
      wait(NULL);
      for(int i = 0; i < 100; i++)
      {
         num++;
      }
      printf("The value of num = %d in parent process.\n", num);
   }
   return 0;
}