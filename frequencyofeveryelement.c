#include<stdio.h>
int main()
{
    int arr[10],i,x,j,k,count,f;
    printf("enter the array elements");
      for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        f=0;
      for(k=0;k<i;k++)
      {
          if(arr[i]==arr[k])
          {
            f=1;
          }
      }
      if(f!=1)
      {
          count=0;
          for(j=i;j<10;j++)
          {
              if(arr[i]==arr[j])
              {
               count++;
              }
          }
          printf("arr[%d] is present %d times \n",arr[i],count);
      }
    }
}
