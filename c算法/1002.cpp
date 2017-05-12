#include<stdio.h>
#define N 101
int main(){
	int a[N];
    int m;
    int max;
    int min;
    int i;
    printf("please input");
	while(scanf("%d",&m) == 1)
	{
		max = -1,min = 101;
		for(i=1;i<m;i++){
			scanf("%d",&a[i]);
			if(a[i]>max) max = a[i];
			if(a[i]<min) min = a[i];
		}
		printf("%d %d\n",max,min);
	}

	return 0;
}