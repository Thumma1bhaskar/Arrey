#include<stdio.h>
void main()
{
	int a[10],pos1,pos2,i,size;
	printf("enter any size\n");
	scanf("%d",&size);

	printf("enter arrey elements\n");

	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("enter two positions\n");
	scanf("%d%d",&pos1,&pos2);

	for(i=pos1,pos2;i<size-1||i<size-1;i++)
	{
		a[i]=a[i+1];
	}
	size--;

	for(i=0;i<size;i++)
	{
		printf("%d",a[i]);
	}
}
