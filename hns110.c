#include <stdio.h>
int main(void) {
  int i,j,n,m,a[100],b[100],c=0;
  scanf("%d%d",&n,&m);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<m;i++)
  {
    scanf("%d",&b[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
       if(a[i]==b[j])
       {
          c++;
       }
    }
  }
  if(c==m)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
  return 0;
}
