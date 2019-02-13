#include <stdio.h>
    int main()
    {
      int i=0,c=0,j,n,a[100],b[100],k,z;
      scanf("%d",&n);
      while(n!=0)
      {
        z=n/10;
        b[i]=z;
        n=n/10;
        i++;
      }
      for(j=i;j>=0;j--)
      {
        a[c]=b[j];
        c++;
      }
      scanf("%d",&k);
      for(j=k;j<c;j++)
      {
        printf("%d",j);
      }
      return 0;
    }
