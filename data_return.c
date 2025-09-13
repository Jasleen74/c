#include<stdio.h>
int main() {
 int a , b ;
 a = 8 ;
 b = 2 ;
 float c = 3.0;

 printf ("th value of : %f  ", c/a-b);
// first the precedence is of / so first c/a that is 3.0/8 so int and float will give us a float .
// so then after we get float by integer so we again get a float so the answer is in float .

  
 return 0;
}