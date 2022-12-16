	#include <stdio.h>

	int main()
	{
		int i = 0;
		while(i<=100)
		{
			i++;
			if(i%4 != 0 || i%2 != 0)
				continue;
			printf("%d\n", i);
		}
		return 0;
	}
