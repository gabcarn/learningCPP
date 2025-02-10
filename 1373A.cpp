#include <iostream>

int donutsBoxes(int N,int b):
{
	return N%b == 0? N/b : (N/b)+1;
}






int main()
{
	using std::cout;
	using std::cin;
	
	
	int n;
	cin >> n;
	
	for(int i = 0;i<n;i++)
	{
		int a,b,c;
		
		cin>> a >> b >> c;
		
		int x1,x2;
		
		if(a<(1.0*c)/b)
		{
			x1 = b;
			
		}
		else if(a>(1.0*c)/b)
		{
			x2 = b;
			
		}
		
		
		cout <<x1 <<x2;
		
	}
	
	
	
	
	
	
}