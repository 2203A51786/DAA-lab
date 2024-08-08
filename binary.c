#include <stdio.h>
int main()
{
int i,size,a[10],search,start,mid,stop,flag=0;
printf("\n Enter the size of an array :");
scanf("%d",&size);
printf("\n Enter the value (ascending order) :");
for(i=0;i<size;i++)
scanf("%d",&a[i]);
printf("\n Find the search element : ");
scanf("%d",&search);
start=0;
stop=size-1;
while(start<=stop)
 {
mid=(start+stop)/2;
if(search==a[mid])
 {
flag=1;
break;
 }
else if (search<a[mid])
stop=mid-1;
else
start=mid+1;
 }
if(flag==1)
printf("%d fount at the position %d ",search,mid+1);
else
printf("element not found");
return 0;
}
