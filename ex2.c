#include <stdio.h>
#include <cs50.h>

int main(void){
 int num= get_int("Enter your age please\n");
 for(int i= 0; i< num; i++){
   printf("Happy Birthday!\n");
 }
}
