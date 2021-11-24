#include <iostream>
int main()
{
    int i = 0;
    int j = 0;
    int k = 0;
    for(i=0;i<1000;i++)
    {
        if(i%3==0||i%5==0)
        k=j+i;
        j=k;  
    }
    printf("%d",k);
    
}