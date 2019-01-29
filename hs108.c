 #include <stdio.h>   
    int main()
    {
      int i,j,a[100],n,k;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
        scanf("%d",&a[i]);
      }
      for(i=0;i<n;i++)
      {
        for(j=i+1;j<n;j++)
        {
          for(k=j+1;k<n;k++)
          {
          if(a[i]+a[j]==a[k])
          {
            printf("\n%d %d %d",a[i],a[j],a[k]);
          }
          }
        }
      }
      return 0;
    }
