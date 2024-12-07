#include <iostream>
#include <conio.h>
#include<math.h>
using namespace std;
main()
{
	int i;
	int sum = 0;
	int n;
	
	for ( i = 0 ;   ; i++ )
	{
		cin>>n;
		if ( n <= 0 ) break;
		sum += n;
	}
	
	cout<<( float ) sum / i;
}
