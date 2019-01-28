 #include <stdio.h>
    #include<string.h>
    int main()
    {
      int a,b=0,c=0,z,l;
      char s[100],ss[25][25],t;
      scanf("%[^\n]s",s);
      for(a=0;s[a]!='\0';a++)
      {
        if(s[a]==' ')
        {
          ss[c][b]='\0';
          c++;
          b=0;
        }
        else
        {
          ss[c][b]=s[a];
          b++;
        }
      }
      ss[c][b]='\0';
      for(a=0;a<=c;a++)
      {
        l=strlen(ss[a]);
        for(b=0,z=l-1;b<z;b++,z--)
        {
          t=ss[a][b];
          ss[a][b]=ss[a][z];
          ss[a][z]=t;
        }
      }
      for(a=0;a<=c;a++)
      {
        printf("%s ",ss[a]);
      }
      return 0;
    }
