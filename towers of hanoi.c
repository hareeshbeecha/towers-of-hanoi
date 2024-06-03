// programing on the towers of hanoi
#include<stdio.h>                             // header file to use all the printf and scanf statments
void TOH(int n,char x,char y,char z)          // sub function to use recursively the varibles are globle and those can use it any part of the 
{                                             // program
   if(n>0)                                    // to check the entered diskes are grater than 0 or not 
   {
      TOH(n-1,x,z,y);                         // the disk moving from A to B with respect to c when it is 3 disks and repreate the statment 
      printf("\n From Tower %c To %c",x,y);   // printing the disk from the where to ware it moves
      TOH(n-1,z,y,x);                         //againt to move the disk we use this statment
   }
}
int main()                                         //main function
{
   int n;                                           // this is number of diskes to be entered
   printf("Enter Number Of Diskes");                // to takes the number diskes the user is entering
   scanf("%d",&n);                                  // scaning the the number of digites user entered
   printf("The sequence of moves involved in the Tower of Hanoi are :");// printing just the statment
   TOH(n,'A','B','C');                                 // calling the sub function by the local varibles 
}
