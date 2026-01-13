#include<stdio.h>
int main() {
	int h,m,s,n,h2,m2,s2,time,time2,next ;
	scanf("%d:%d:%d",&h,&m,&s);
	printf("hour:%d\n",h);
	printf("minute:%d\n",m);
	printf("second:%d\n",s);
	
	printf("Next minutes:");
	scanf("%d",&next);
	time = h*60+m+next;
	if(time<1440)
	{
	h = time/60 ;
	m = time%60 ;
	}
	else
	{
	time2 = time - 1440;
	h = time2/60 ;
	m = time2%60 ;
	}
	printf("hour:%d\n",h);
	printf("minute:%d\n",m);
	printf("second:%d\n",s);
}

