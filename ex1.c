#include <stdio.h>
#include <cs50.h>

int main(void){
  int secretNum= 3;
int num= get_int("Guess a number between 1 and 5");

  if(secretNum== num){
    printf("you got it right");
  }
  else{
    printf("you got it wrong");
  }
}

