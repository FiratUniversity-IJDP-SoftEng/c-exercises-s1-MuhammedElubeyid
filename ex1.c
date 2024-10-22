#include <stdio.h>

int main(void){
  int secretNum= 3;
  int num;
  printf("Guess a number between 1 and 5\n");
  scanf("%d",&num);
  if(secretNum== num){
    printf("you got it right");
  }
  else{
    printf("you got it wrong");
  }
}
// What if user try to input any number out of the 1-5 interval? You should think about this solution. 
