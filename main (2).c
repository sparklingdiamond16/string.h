

                        //   STRING & SUBSTRING


// Get string of input from user and also get another string input from user as pattern
//and determine number of time such pattern occurred and also display the position of the pattern 
//in the given string 1

#include <stdio.h>
#include <string.h>  // we are using string header file because of strln
 
char str[100], sub[100];
int count = 0, count1 = 0;
 
void main()
{
    int i, j, l, l1, l2;  //declarement of variable
 
    printf("\nEnter a string : ");  //printing of string minimum of 100  array size
    scanf("%[^\n]s", str);
 
    l1 = strlen(str);
 
    printf("\nEnter a substring : ");  //printing of substring minimum of 100 array size
    scanf(" %[^\n]s", sub);
 
    l2 = strlen(sub);
 
    for (i = 0; i < l1;)        // For loping the statement we are using for loop in this case
    {
        j = 0;
        count = 0;
        while ((str[i] == sub[j]))
        {
            count++;
            i++;
            j++;
        }
        if (count == l2)
        {
            count1++;                                   
            count = 0;
        }
        else
            i++;
    }    
    printf("%s occurs %d times in %s", sub, count1, str);  //printing the no. of substring,count variable&  the string that wanted to display 
}


          /*     WORKING    OF     PROGRAMME
             1)  Declarement of variable from the user
             2)  Printing of string minimum of 100  array size
             3)  For loping the statement we are using for loop in this case
             4)  printing the no. of substring,count variable&  the string that wanted to display */
             
          
          

//  Thus the work of Getting string of input from user and also get another string input from user as pattern
//and determine number of time such pattern occurred and also display the position of the pattern 
//in the given string 1 is done &programme is executed.
