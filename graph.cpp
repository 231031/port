#include <iostream>
using namespace std;
int main()
{
    int i,n,a[105],Max=0;
    scanf("colum = %d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>Max)
            Max=a[i];
    }
    while(Max!=0){
        for(i=0;i<n;i++)
        {
            if(a[i]>=Max)
                printf("*");
            else
                printf(" ");
        }
        Max--;
        printf("\n");
    }
}