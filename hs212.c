#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  int i,j,a[100],n,m,t;
  scanf("%d%d",&n,&m);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
          for (i = 0; i < n;i++) 

        {
            for (j = i + 1; j < n;j++)
            {
                if (a[i] > a[j]) 
                {
                    t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
            }
        }
printf("%d",a[n-m]);
return 0;
}
