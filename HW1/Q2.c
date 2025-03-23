/* Addition program */ 

#include <stdio.h> 

//-------------------------------------------------------------------------------------------------------------
//  ";" Are missing at the end of line 13 and 15
//  variable name "x" should be "sum" to code to be compiled
//------------------------------------------------------------------------------------------------------------

int main( void ) 

{ 

   int integer1 /* first number to be input by user  */ 

   int integer2 /* second number to be input by user */ 

   int x;      /* variable in which sum will be stored */  

 

   printf( Enter first integer\n ); /* prompt */ 

   scanf( "%d", &integer1 );        /* read an integer */ 

 

   printf( "Enter second integer\n" ); /* prompt */ 

   scanf( "%d", &integer2 );           /* read an integer */ 

    

   sum = integer1 + integer2; /* assign total to sum */ 

 

   printf( "Sum is %d\n", sum ); /* print sum */ 

   return 0; /* indicate that program ended successfully */ 

 

} /* end function main */ 
