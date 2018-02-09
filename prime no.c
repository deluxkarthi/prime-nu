#include<stdio.h>
void main()
{
  int i,m,j,cnt=0;
  scanf("%d",&n);
  for(i=2;i<=m;i++)
  {
    for(j=1;j<=m;j++)
    {
    if(i%j==0)
    {
      cnt++;
    }
  }
  if(cnt==2)
  {
    printf("%d\t",i);
    
  }
  cnt=0;
  }
 
  
}
