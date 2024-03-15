//week04-4.cpp A008 9x9 table
#include <stdio.h>
int main()
{
	for(int i=1;i<10;i++){
		for(int j=1;j<10;j++){
			printf("%dx%d=%2d ",j,i,j*i);
		}
		printf("\n");
	}

}
