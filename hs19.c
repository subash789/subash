#include <stdio.h>

int main(void) {
  int i,j,n,a[100];
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]+a[j]==0)
      {
        printf("\n%d%d",a[i],a[j]);
      }
      else if(a[i]+a[j]==1)
      {
        printf("\n%d%d",a[i],a[j]);
      }
      else if(a[i]+a[j]==-1)
      {
        printf("\n%d%d",a[i],a[j]);
      }
      else
      {
        printf(" ");
      }
    }
  }
  return 0;

}
