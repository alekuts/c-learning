#include <stdio.h>

float i = 1;

int main(){
  while(i < 100000){
    i = i * 2;
    printf("%8.1f\n", i);
  }
  return 0;
}
