#include <stdio.h>
#include <cs50.h>

int main (void) {
int num = get_int("guess a number between 1 and 5");
  if (num>=0 || num<= 5){
   printf("you got it right");
  }
  else {
     printf("you got it wrong");
  }

}

