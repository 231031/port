#include <iostream>
using namespace std;
int main()
{
    float sx,sy,t,v,x,y,a;
    scanf("Distance in X = ",&sx);
    scanf("Distance in Y = ",&sy);
    scanf("Time = ",&t);
    scanf("Speed = ",&v);
    scanf("Speed in X = ",&x);
    scanf("Speed in Y = ",&y);
    scanf("Acceleration = ",&a);
    if((x!=0 && t!=0) || (sx!=0 && t!=0) || (x!=0 && sx !=0)) x=sx/t;
    if((sy!=0 && y!=0 && t!=0) || (sy!=0 && y!=0 && a!=0) || (sy!=0 && t!=0 && a!=0) || (y!=0 && t!=0 && a!=0)) sy= (y*t) + (1/2*a*t*t);

}