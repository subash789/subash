#include <stdio.h>
int main()
{
    int i,j,a[100],n,k,s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++) 
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j]) 
                {
                    s=a[i];
                    a[i]=a[j];
                    a[j]=s;
                }
            }
        }
    scanf("%d",&k);
    printf("%d",a[k]);
    return 0;
}
