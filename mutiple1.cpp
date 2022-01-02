#include <iostream>
using namespace std;
int main()
{
    long int k,i;
    int j;
 for(i=1;;i++)
 {
     for(j=20;j>=1;j--)
     {
        if(i%j!=0)
        break;
     }
     if(j==1)
     printf("%d",i);
 }

}
    