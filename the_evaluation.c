#include<stdio.h>
int main() {
   int x,y,z,k;
   
    x = 2; 
    y = 3;
    z = 3;
     k = 1;

     printf ("the value is %d", 3*x/y-z+k);


    //  first (3*x) /y -z+k = 6/y-z+k (*/% same piority so left to right assocoativity)
    //  then (6/3)-z+k = 2-3+1    (- + again same priority so left to right associativity 
    // so the answer is zero

  
 return 0;
}