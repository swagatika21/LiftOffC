#include<stdio.h>
#define MAX 100

int maximum(int []);
int n;

int main()
{
    int a[MAX],m,i;

       printf(" Input the number of elements to be stored in the array :");
       scanf("%d",&n);
   
       printf(" Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
        {
	      printf(" element - %d : ",i);
	      scanf("%d",&a[i]);
	    }
     m=maximum(a);

    printf(" The largest element in the array is : %d\n\n",m);
    return 0;
}
int maximum(int a[])
{
    int i=1,m;
    m=a[0];
    while(i < n)
	{
      if(m<a[i])
           m=a[i];
      i++;
    }
    return m;
}
