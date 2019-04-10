#include <stdio.h>
int main()
{
    int n,i,arr[n],sum=0,med;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
    sum=sum+arr[i];
    }
    med=sum/n;
    printf("%d",med);
    return 0;
}
