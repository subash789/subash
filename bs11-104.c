#include <stdio.h>
int main(void) {
  int s=1,i,n,k;
  scanf("%d",&n);
  scanf("%d",&k);
  while(k!=0)
  {
    s=s*n;
    k--;
  }
  printf("%d",s);
  return 0;
}
