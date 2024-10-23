#include <stdio.h>
#include <stdbool.h>

int main (void){
  int secretNum= 3;
  int num;
  printf("Guess a number between 1 and 5\n");
  //scanf("%d",&num);

   bool check = true;

  while(check){
      scanf("%d",&num);
      if (num>0 && num<6){
        check= false;
   if(secretNum== num){
    printf("you got it right");
  }
  else{
    printf("you got it wrong");
  }
  }
  else {
      printf("Your guess is out of range.\n");
      printf("Pleae guess a number between 1 and 5 again\n");

  }
  }
}

// What if user try to input any number out of the 1-5 interval? You should think about this solution. 
