//Pavan Vachhani 16CO151
//DSA Assignment

#include<stdio.h>
#include<stdlib.h>
void towerOfHanoi(int n, char source, char dest, char aux)
{
    if (n == 1)         //Base condition of recursion is taken
    {
        printf(" => Move disk 1 from peg %c to peg %c\n", source, dest);
        return;
    }
    towerOfHanoi(n-1, source, aux, dest);    //First transfer top n-1 disks to Aux peg
    printf(" => Move disk %d from peg %c to peg %c\n", n, source, dest);
    towerOfHanoi(n-1, aux, dest, source);    //Then transfer previous n-1 disks from Aux to Destination peg
}
 
int main()
{
    int n;
    printf("Enter the number of disks\n");
    scanf("%d",&n); 
    towerOfHanoi(n, 'A', 'C', 'B'); 
    return 0;
}