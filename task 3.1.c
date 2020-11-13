#include <stdio.h>
#include <stdlib.h>
int h =0;
int main()
{

int arr[20], i, j;
int k ;
for(i = 0; i < 20; i++)
{
      scanf("%d", k);
      for(j =0 ; j < 20 ; j++)
        {
            if( k == arr[j])
            {
                printf("this num is used please enter another number");
                i--;
            }
        arr[i]=k;
        }
}
for(int e = 0; e < 20; e++)
{
    printf("All numbers entered are %d",arr[e]);
    sum(arr[e]);
}
printf("Total %d",h);
return 0 ;
}
int sum (array)
{
  h=h+array;
  return h;
}
