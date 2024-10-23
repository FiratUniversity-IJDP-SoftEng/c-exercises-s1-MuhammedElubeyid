#include <stdio.h>
#include <cs50.h>
#include <strings.h>

int main (void){
  string pet= get_string("Do you have a cat or a dog?\n");
  if(strcasecmp(pet,"dog") ==0){
    printf("hoo hoo...\n");
  }
  else if(strcasecmp(pet,"cat")== 0){
    printf("meow meow ...\n");
  }
  else{
    printf("I don't know that animal sound\n");
  }
}
