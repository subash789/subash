#include <stdio.h>
#include<string.h>
int main(void) {
  char s[10];
	int i,n;
	scanf("%[^\n]s",s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(i==0)
			s[i]=s[i]-32;
		if(s[i]==' ')
			s[i+1]=s[i+1]-32;
	}
	printf("\n%s",s);
  return 0;
}
