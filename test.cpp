#include <iostream>
using namespace std;

int main()
{
	int div, num, i;
	
	num = 0;
	i = 0;
	
	while(true)
	{	
		i++;
		div = 0;
		
		for(int j = 1; j <= i; j++)
		{
			if(i % j == 0)
			{
				div = div + 1;
				
				if(div > 2) break;
			}
		}
		
		if(div == 2)
		{
			num++;
			
			if(num == 10001)
			{
				cout << i;
				break;
			}
		}
	}
}