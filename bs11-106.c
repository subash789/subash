#include <stdio.h>
int main(void) {
  int i,j=1,a[100],b[100],n,k;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    if(a[i]%2==1)
    {
      b[j]=a[i];
      j++;
    }
  }
  scanf("%d",&k);
  for(i=1;i<j;i++)
  {
    if(i==k)
    {
    printf("%d",b[i]);
    }
  }
  return 0;
}
