/* 
   Name: Ananya Lohani
   Roll_Number: 2019018 
*/
#include <stdio.h>
#include <pthread.h>

int num = 10;
void *thread_decrement();

int main(int argc, char *argv[])
{
   pthread_t tid;
   pthread_attr_t attr;
   pthread_attr_init(&attr);
   pthread_create(&tid, &attr, thread_decrement, NULL);
   pthread_join(tid, NULL);

   while(num != 100)
   {
      num++;
   }
   printf("The value of num = %d in parent thread.\n", num);
   return 0;
}

void *thread_decrement()
{
   while(num != -90)
   {
      num--;
   }
   printf("The value of num = %d in child thread.\n", num);
   pthread_exit(0);
}