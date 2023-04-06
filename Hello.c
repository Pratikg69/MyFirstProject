#include <stdio.h>  
#include <string.h>  
int main()  
{  
    char str[40]; // declare the size of character string  
    printf (" \n Enter a string to be reversed: ");  
    scanf ("%s", str);  
    int a=16;
    int b=89;
    
    print("Pappaisback");
      
    // use strrev() function to reverse a string  
    printf (" \n After the reverse of a string: %s ", strrev(str));  
    return 0;  
}  
