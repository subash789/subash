#include <stdio.h>
    int main()
    {
    int i,n,k,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=k;i<=n;i++)
    {
      printf("%d",i);
    }
      return 0;
    }
