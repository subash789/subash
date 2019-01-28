    #include <stdio.h>
    #include<string.h>
    int main()
    {
      int i,j,n,c=0,a[100];
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
        scanf("%d",&a[i]);
      }
      for(i=0;i<n;i++)
      {
        if(i==a[i])
        {
          printf("%d",i);
        }
        else
        {
          c++;
        }
      }
      if(n==c)
      {
        printf("-1");
      }
      return 0;
    }
