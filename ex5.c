#include <stdio.h>
#include <cs50.h>
void sayHello(string name);

int main (void){
 string name= get_string("Enter your name please: ");
 sayHello(name);
}

void sayHello(string name){
  printf("Hello, %s\n", name);
}
