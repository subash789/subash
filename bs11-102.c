#include <stdio.h>
int main(void) {
  int n,i,j;
  scanf("%d",&n);
  if(n%2==0)
  {
    j=n/2;
    printf("%d",j);
  }
  else
  {
    printf("%d",n);
  }
  return 0;
}
