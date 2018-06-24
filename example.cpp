#include <cstdio>
#include "principal.h"

int main(void){
  std::printf("Hello!\n");
  double posicion[]={2,3,4};
  double velocidad[]={5,6,7};
  Mass masa1(1, posicion, velocidad);
  std::printf("%f",masa1.getMass());
  return 0;
}
